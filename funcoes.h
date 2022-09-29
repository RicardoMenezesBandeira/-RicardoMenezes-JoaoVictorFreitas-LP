/*
    Ricardo Menezes G. P. Bandeira
    João Victor de M. Freitas
    HEAP 
*/

#ifndef _FUNCOES_
#define _FUNCOES_


#define Theap 80;//tamanho do heap
//1 first 2 fit 3 best 4 worst
typedef struct elemento{
    char id;//identificador
    int tamanho;//tamanho na memoria
    int inicio;//ponto de partida na memoria
}elemento;
typedef struct heap{
    elemento *item;
    struct heap *prox;
    
}heap;

heap *addbest(heap *h, heap *novo);
heap *addworst(heap *h, heap *novo);
heap *addFirst(heap *h,heap *novo);
heap *addFit(heap *a, heap *novo, int cont);
void imprimirHeap(heap *h);
int finderid(heap *h,char id);
heap *add(heap *h,char id,int tam);
void destroi(heap *h);
heap *delete (heap *h, char id);
heap *chamadelete(heap *h, char id);
void modo();
#endif