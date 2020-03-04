#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>

int main(void)
{
    int should_run = 1;
    char last[80];
    int first_run = 0;
    int pipa[2];
    int pipe_off = 1;
    pipe(pipa);
    pid_t pid;
    while (should_run)
    {
        int pipa[2];
        pipe(pipa);

        char args[80];
        printf("linux>");
        fflush(stdout);

        gets(args);

        if ((strcmp("!!", args) == 0) && (first_run == 1))
        {
            strcpy(args, last);
        }

        else if ((strcmp("!!", args) == 0) && (first_run == 0))
        {
            while (strcmp(args, "!!") == 0)
            {
                printf("No commands in history\n");
                printf("linux>");
                gets(args);
            }
        }

        strcpy(last, args);
        int count = 0;
        char *resp[80 / 2 + 1];
        char *token = strtok(args, " ");
        while (token != NULL)
        {
            resp[count] = token;
            count++;
            token = strtok(NULL, " ");
        }

        pid = fork();
        first_run = 1;
        if (pid == 0)
        {
            int arq;
            int i;
            for (i = 0; i < count; i++)
            {
                if (strcmp(">", resp[i]) == 0)
                {
                    arq = open(resp[i + 1], O_WRONLY);
                    dup2(arq, STDOUT_FILENO);
                    count = i;
                }
                if (strcmp("<", resp[i]) == 0)
                {
                    arq = open(resp[i + 1], O_RDONLY);
                    dup2(arq, STDIN_FILENO);
                    count = i;
                }
                if (strcmp("|", resp[i]) == 0)
                {

                    pipe_off = 0;
                    pid = fork();
                    if (pid == 0)
                    {
                        //replace stdout with the write end of the pipe
                        dup2(pipa[1], STDOUT_FILENO);
                        //close read to pipe, in child
                        close(pipa[0]);
                        printf("%s", resp[0]);
                        // char *argvs[2] = {"ls",NULL};

                        char *argvs[i + 1];
                        for (int j = 0; j < i; j++)
                        {
                            argvs[j] = resp[j];
                        }
                        argvs[i] = NULL;
                        execvp(argvs[0], argvs);
                        exit(EXIT_SUCCESS);
                    }
                    else
                    {
                        //Replace stdin with the read end of the pipe
                        dup2(pipa[0], STDIN_FILENO);
                        //close write to pipe, in parent
                        close(pipa[1]);

                        // char *argvs[2] = {"less", NULL};

                        char *argvs[count - i];
                        for (int j = 0; j < count - i - 1; j++)
                        {
                            argvs[j] = resp[i + j + 1];
                        }
                        argvs[count - i] = NULL;

                        execvp(argvs[0], argvs);
                        exit(EXIT_SUCCESS);
                    }
                }
            }

            if (pipe_off == 1)
            {
                char *cmd = resp[0];
                char *argv[count];
                for (int j = 0; j < count; j++)
                {
                    argv[j] = resp[j];
                }
                argv[count] = NULL;
                if (strcmp(cmd, "cd") == 0)
                {
                    chdir(argv[1]);
                }
                else
                {
                    execvp(cmd, argv);
                    exit(EXIT_SUCCESS);
                }

                close(arq);
            }
        }
        else if (pid > 0)
        {
            // close(pipa[0]);
            close(pipa[1]);
            wait(NULL);
        }
        else
        {
            printf("fork failed");
        }
    }
    return 0;
}