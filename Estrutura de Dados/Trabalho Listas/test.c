#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
struct node {
	
	int info;
	Node* next;
};
int main(){
	Node* unordered = lst_create();
	Node* ordered = lst_create();
	int i, N, input;
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &input);
		unordered=lst_insert_at_begin(unordered, input);
	}
	
	ordered = lst_insertion_sort(unordered); 
	lst_print_all(ordered);
	
	return 0;
}
Node* lst_create (void){
	
	return NULL;
}
int lst_is_empty (Node* L){
	
	return (L==NULL);
}
Node* lst_insert_at_begin (Node* L, int value){
	
	Node* newi = (Node*) malloc(sizeof(Node));
	newi->info = value;
	newi->next = L;
	
	return newi;
}
Node* lst_insert_at_end (Node* L, int value){
	
	Node* newi = (Node*) malloc(sizeof(Node));
	
	while(1){
		if(L->next == NULL){
			L->next=newi;
			break;
		}
		L=L->next;
	}
	newi->info = value;
	newi->next = NULL;
	
	return newi;
}
Node* lst_find (Node* L, int v){
	
	Node* work = L;
	
	for(work=L; work!=NULL; work=work->next){
		if(work->info == v){
			return work;
		}	
	}
	
	return NULL;
}
void lst_print_all (Node* L){
		Node* work = L;
		printf("%d", work->info);
		work=work->next;
		for(; work != NULL; work=work->next){
			printf(" - %d", work->info);
		}
		printf("\n");
		
		return;
}
Node* lst_remove (Node* L, int v){
	
	Node* prev;
	Node* work = L;
	
	while(work != NULL && work->info != v){
		prev = work;
		work = work->next;
	}
	if(work == NULL){
		return L;
	}
	if(prev == NULL){
		L = work->next;
	}else{
		prev->next = work->next;
	}
	free(work);
	
	return NULL;
}
Node* lst_free (Node* L){
	Node* work = L;
	while(work != NULL){
		Node* wrk = work->next;
		free(work);
		work=wrk;
	}

	return L;
}

Node* lst_insert_ordered(Node* L, int v){
	
	Node* ant;
	Node* work = L;
	
	while (work != NULL && work->info < v){
		ant = work; work = work->next;
	}

	Node* newi = (Node*) malloc(sizeof(Node));
	newi->info = v;

	if (ant == NULL){ 
		newi->next = L;
		L = newi;
	}else { 
		newi->next = ant->next;
		ant->next = newi;
	}
	
	return L;
}
Node* lst_insertion_sort (Node* unordered){
	
	Node* work;
	Node* test = unordered;
	int qtd=1, r=0;
	
	while(test->next!=NULL){
		qtd++;
		test=test->next;
	}
	while(r<qtd){
		work = lst_insert_ordered(work, unordered->info);
		unordered=unordered->next;
		r++;
	}
	return work;
}
