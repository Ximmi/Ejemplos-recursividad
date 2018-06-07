#include <stdio.h>

void abcd1(char);
void abcd2(char);
void num1(int);
void num2(int);

int main(){
    
    int a;
    printf("\tTeclea un numero entero\n");  
    scanf("%d", &a);
    num1(a); 
    puts("");
    num2(a);	
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
