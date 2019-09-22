#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int info;
	struct node *front;
	struct node *back;
	struct node *esq;
	struct node *dir;
}node;

node* inserir(node* root, int valor){

	//Caso meu root seja NULL, irei colocar um valor para ele e colocar sua esquerda e direita para NULL
	if(root == NULL){
		node *aux;
		aux = (node *)malloc(sizeof(node));
		aux->info = valor;
		aux->dir = NULL;
		aux->esq = NULL;
		return aux;
	}
	//Caso ele não seja NULL, irei verificar se é maior ou menos para manda-lo para esquerda ou direita e verificar se são nulos
	else{
		if(root->info < valor){
			root->dir = inserir(root->dir, valor);
		}
		else if(root->info > valor){
			root->esq = inserir(root->esq, valor);
		}

	}
return root;
}

void Pre_Tree(node *root){

	if(root != NULL){
		printf("%d ",root->info);
		Pre_Tree(root->esq);
		Pre_Tree(root->dir);

	}

}

void In_Tree(node *root){

	if(root != NULL){
		Pre_Tree(root->esq);
		printf("%d ",root->info);
		Pre_Tree(root->dir);

	}

}

void Pos_Tree(node *root){

	if(root != NULL){
		Pre_Tree(root->esq);
		Pre_Tree(root->dir);
		printf("%d ",root->info);

	}

}




void freeTrees(node *root){

	if(root != NULL){
		//freeTrees(root->another);
		freeTrees(root->esq);
		freeTrees(root->dir);
		free(root);
	}

}

void Cases(node *tree, int contagem){
	printf("Case %d:\n",contagem);
	
	printf("Pre.: ");
	Pre_Tree(tree);
	
	printf("\n");

	printf("In..: ");
	In_Tree(tree);

	printf("\n");

	printf("Post: ");
	Pos_Tree(tree);

	printf("\n");
}









int main(){
	node* inserir();
	void freeTrees();
	void Cases();
	void Pre_Tree();
	void In_Tree();
	void Pos_Tree();

	int DEBUG = 1;

	int tamanho,n,j,elementos,conteudo;
	//criando minha(s) raiz(es) da(s) arvore(s)
	node *raiz;
	raiz = NULL;

	/*
	//meu macaco atual que ira varrendo de arvore para arvore
	node *monkey;

	//crio meu gorila que vai da minha raiz até meu macaco
	node *gorila;

	*/

	//meu macaco começa na minha arvore raiz para depois ir pulando pra proxima arvore
	monkey = raiz;

	if(DEBUG){
		//Pegar quantas arvores serão
		scanf("%d",&tamanho);


		//Loop que vai fazer as coisas em todas as arvores
		
		for(n=0; n<tamanho; n++){

			//setando meu ponteiro atual para NULL
			monkey = NULL;

			//sabendo quantos elementos serão
			scanf("%d",&elementos);

			//loop para pegar J elementos
			for(j=0;j<elementos;j++){
				scanf("%d",&conteudo);
				
				//meu macaco vai inserir os elementos na arvore atual que ele está
				monkey = inserir(monkey, conteudo);
			}

			Cases(monkey,n+1);
			printf("\n");
		}
	}

	//desalocar as arvores
	freeTrees(monkey);

	return 0;
}
