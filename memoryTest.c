#include <stdio.h>
#include <stdlib.h>
#define n 492440

void modify(int*** x);
void modify2(int** x);

int main(int argsc, char** argsv){
	int** x = malloc(sizeof(int*) * n);
	int i;

	for(i=0;i<n;++i) x[i] = malloc(sizeof(int) * n);

	printf("%d \n", x);
	char inp = (char)argsv[1][0];
	switch(inp){
		case '0':
			modify(&x);
			break;
		case '1':
			modify2(x);
			break;
	}

	printf("%d \n", x);

	for(i=0;i<n;++i) free(x[i]);
	free(x);

	sleep(60);
	return 0;
}

void modify(int*** x){
	//dummy function
}

void modify2(int** x){
	//dummy function
}
