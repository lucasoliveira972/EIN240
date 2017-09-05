#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int n;
	int *a;
} Pilha;

void incluir(Pilha *, int);
int procurar(Pilha *, int);
int remover(Pilha *, int);

void incluir(Pilha *pilha, int valor){
	if(pilha->x < pilha->n)
		*(pilha->a+pilha->x++) = valor;
}

int procurar(Pilha *pilha, int valor){
	if (pilha->x > 0)
		for (int i = 0; i < pilha->x; ++i)
			if (pilha->a[i] == valor)
				return i;
	return -1;
}

int remover(Pilha *pilha, int valor){
	int p = procurar(pilha, valor);
	if(p != -1){
		pilha->a[p] = pilha->a[--pilha->x];
		return 1;
	}
	return 0;
}

int main(){
	int n;
	printf("Digite o tamanho da pilha: ");
	scanf("%d", &n);
	
	Pilha minhaPilha;
	minhaPilha.x = 0;
	minhaPilha.n = n;
	minhaPilha.a = malloc(sizeof(minhaPilha) + n * sizeof(int));

	Pilha *umaPilha = malloc(sizeof(*umaPilha) + n * sizeof(int));
	umaPilha->x = 0;
	umaPilha->n = n;

	return 0;
}
