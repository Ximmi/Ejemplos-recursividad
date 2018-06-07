#include <stdio.h>

int factorial(int n);
int main(){
	int n;
	printf("Teclea el numero para obtener su factorial\n");
	scanf("%d", &n);
	printf("El factorial es: %d", factorial(n));
}


int factorial(int n){
	if(n>1)
		return n*factorial(n-1);
	if(n==1)
		return 1;
}
