#include <stdio.h>

void abcd1(char);
void abcd2(char);
void num1(int);
void num2(int);
void tablam(int, int);

int main(){
    
    int a, b;
    printf("\tTeclea el numero a multiplicar\n");  
    scanf("%d", &a);
    printf("\tTeclea el numero de veces a multiplicar\n");  
    scanf("%d", &b);
    tablam(a, b);	
    return 1;
}

void abcd1(char a){
    if(a>='A'){
	abcd1(a-1);
	putchar(a);
    }
}

void abcd2(char a){
    if(a>='A'){
	putchar(a);
	abcd2(a-1);
    }
}

void num1(int a){
    if(a>=1){
	num1(a-1);
	printf("%d ", a);
    }
}

void num2(int a){
    if(a>=1){
	printf("%d ", a);
	num2(a-1);
    }
}

void tablam(int t, int n){
    if(n){
	tablam(t, n-1);
	printf("%d  x %d = %d\n", t, n, t*n);
    }
}
