#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include "funcoes.h"
int main(){
    int a = 1;
    while(a==1){
        modo();
        heap *HEAP = NULL;
        
        printf("\nadd a 10");
        HEAP = add(HEAP,'a',10);    
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);
        
    

        printf("\nadd b 5");
        HEAP = add(HEAP,'b',5);   
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);
        
    

        printf("\nadd c 10");
        HEAP = add(HEAP,'c',10);
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);
        


        printf("\nadd a 10");
        HEAP = add(HEAP,'a',10);
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);
        
    

        printf("\nadd f 10");    
        HEAP = add(HEAP,'f',10);
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);
        
    

        printf("\nadd d 10");
        HEAP = add(HEAP,'d',10);
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);
        
    
        
        printf("\nDelete b");
        HEAP = delete(HEAP,'b');
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);
        
    

        printf("\nDelete c");
        HEAP = delete(HEAP,'c');
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);

        printf("\nDelete a");
        HEAP =delete(HEAP,'a');
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);

        printf("\nadd j 10");
        HEAP = add(HEAP,'j',10);
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);
        
    

        printf("\nadd k 5");
        HEAP = add(HEAP,'k',5);
        printf("\n\nHEAP:\n");   
        imprimirHeap(HEAP);
        
    printf("\n\n");

        destroi(HEAP);
        printf("DESEJA SAIR?\n 1- não\n 2-sim\n\nr:");
        scanf("%d",&a);

    }
    return 0;
}
