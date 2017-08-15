/* Crie um programa que receba 10 números inteiros, armazene-os em um vetor e, em seguida, exiba os múltiplos de 3 e 7, bem como a posição do vetor onde foram encontrados. */

#include <stdio.h>

int main(){
	int v[10];
	for(int i = 0; i < 10; ++i)
		scanf("%d", &v[i]);

	for(int i = 0; i < 10; ++i){
		if((v[i] % 3 == 0 && v[i] % 7 == 0) && v[i] != 0 )
			printf("%d: %d\n", i, v[i]);
	}
	return 0;
} 
