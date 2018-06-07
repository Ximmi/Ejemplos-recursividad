#include <stdio.h>

void abcd1(char);
void abcd2(char);

int main(){
    
    char a;
    printf("\tTeclea un caracter\n");  
    a=getchar();
    abcd1(a); 
    puts("");
    abcd2(a);	
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

