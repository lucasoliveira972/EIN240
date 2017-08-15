/* Criar uma função que procure um inteiro dentro de um vetor e retorne a sua posição */

#include <stdio.h>

int procurar(int [], int, int);

int procurar(int v[], int p, int t){
	for(int i = 0; i < t; ++i){
		if(v[i] == p)
			return i;
	}
	return -1;
}

int main(){
	int v[] = {0, 21, 3, 4, 1, 490, 10, 44, 5667};
	printf("%d\n", procurar(v, 10, sizeof(v) / sizeof(v[0])));
	return 0;
}
