#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>


#define _MAX 3

struct s_nodo{
	uint8_t id;
	struct s_nodo* next;
};


void init_nodo(struct s_nodo *n){
	uint8_t id;
	printf("Ingrese id\n ");
	scanf("%hhu",&id);
	n->id = id;
	//MANDA ANSI
	n->next = NULL;
}

int main(){
	struct s_nodo nodo[_MAX];
	struct s_nodo *inicio;// *cursor;

	for(uint8_t i=0;i<_MAX;i++){
		init_nodo(&nodo[i]);
	}

	inicio = &nodo[0];

	for(uint8_t i=0;i<_MAX;i++){
		if(i == (_MAX-1)){
			nodo[i].next = NULL;
		}else{
			nodo[i].next = &nodo[i+1];
		}
	}
	//cursor = inicio;
	//while (cursor != NULL){
	//	printf("%hhu->",cursor->id);
	//	cursor=cursor->next;
	//}


	exit(EXIT_SUCCESS);
}
