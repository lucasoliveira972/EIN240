/* Criar um programa que interlace 2 vetores em um terceiro vetor e imprima-o */

#include <stdio.h>

int main(){
	char a[] = {'A', 'B', 'C', 'D', 'E'};
	char b[] = {'1', '2', '3', '4', '5'};
	char c[sizeof(a) + sizeof(b)];

	int n = -1;
	for(int i = 0; i < 5; ++i){
		c[++n] = a[i];
		c[++n] = b[i];
	}

	for(int i = 0; i < 10; ++i){
		printf("%c", c[i]);
	}
	return 0;
}
