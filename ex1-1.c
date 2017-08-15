/* Exercicio 1: Criar uma função que cheque quais números num vetor são divisíveis por 3 e 7 */



#include <stdio.h>

int multiplosDe(int *, int *, int, int);

int multiplosDe(int v[], int m[], int tv, int tm){
	int n = 0;
	for(int i = 0; i < tv; ++i){
		for (int j = 0; j < tm; ++j)
			if (v[i] % m[j] == 0 && v[i] != 0)
				++n;
		if (n == tm)
			printf("%d\n", v[i]);
		
		n = 0;
	}
}
int main(){
	int v[] = {1, 3, 0, 13, 32, 21, 7, 98, 24, 5, 24};
	int m[] = {4, 2, 6, 12, 10};
	multiplosDe(v, m, sizeof(v) / sizeof(v[0]), sizeof(m) / sizeof(m[0]));
	return 0;
}
