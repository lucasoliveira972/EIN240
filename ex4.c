#include <stdio.h>

int a[5];
int x = 0;

int lista_cheia(){
	if (x == (sizeof(a) / sizeof(a[0]))){
		return 1;
	}
	return 0;
}

void incluir(int valor){
	if(lista_cheia() == 0)
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
}
