#include <stdio.h>

int lista_cheia();
void incluir(int);
int procurar(int);
int remover(int);

int a[5];
int x = 0;

int lista_cheia(){
	if (x == (sizeof(a) / sizeof(a[0]))){
		return 1;
	}
	return 0;
}

void incluir(int valor){
	if(lista_cheia() == 0 && procurar(valor) == -1)
		a[x++] = valor;
}

int procurar(int valor){
	if (x > 0)
		for (int i = 0; i < x; ++i)
			if (a[i] == valor)
				return i;
	return -1;
}

int remover(int valor){
	int p = procurar(valor);
	if(p != -1){
		a[p] = a[--x];
		return 1;
	}
	return 0;
}

int main(){
	incluir(5);
	incluir(4);
	incluir(5);
	for(int i = 0; i < x; ++i)
		printf("%d\n", a[i]);
}
