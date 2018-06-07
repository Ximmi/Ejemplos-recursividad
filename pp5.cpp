#include <stdio.h>

int fibonacci2(int n);
void imprime(int pos);
int main(){
	int pos, j;
	printf("Dime la posicion de la serie que deseas obtener\n");
	scanf("%d", &pos);

		imprime(pos);
return 0;	
}



int fibonacci2(int n){
	if(n==0 || n==1)/*Caso base */
		return n;
	else
		return fibonacci2(n-2) + fibonacci2(n-1);
}

void imprime(int pos){
	if(pos){
		imprime(pos-1);
		printf("p%d = %d\n", pos, fibonacci2(pos));
	}
}
