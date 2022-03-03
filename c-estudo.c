#include <stdio.h>
#include <stdlib.h>


int SOMA(int a, int b){
       
    int ab = a + b;
   

    return ab;
}

int main(){
    
    

    int ax = 10;
    int axx= 20;
    int num = SOMA(ax, axx);
    printf("resultado da soma: %i", num);
    return 0;
}