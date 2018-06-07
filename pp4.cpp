#include <stdio.h>

int fibonacci(int n);
int fibonacci2(int n);
int main(){
	int pos, i, j;
	printf("Dime la posicion de la serie que deseas obtener\n");
	scanf("%d", &pos);
	for(i=0; i<pos;i++)
		printf("%d", fibonacci(i));
		
	printf("\n-----------------\n");
	for(j=0; j<pos; j++)
		printf("p%d = %d\n", j, fibonacci2(j));
return 0;	
}

int fibonacci(int n){
	if(n>2){
		return fibonacci(n-1)+fibonacci(n-2);
    }
	else if(n==2){
		return 1;

	}
	else if(n==1){
		return 1;

	}
	else if(n==0){
		return 0;
	}
	else
	return -1;
		
}

int fibonacci2(int n){
	if(n==0 || n==1)/*Caso base */
		return n;
	else
		return fibonacci2(n-2) + fibonacci2(n-1);
}
