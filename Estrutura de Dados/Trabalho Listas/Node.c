
List* lst_create(){
	return 0;
}

List* lst_add (List* l, int i){
	List* newie = (List*) malloc(sizeof(List));
	newie->info = i;
	newie->next = l;
	return newie;
}

void lst_show (List* list){
	
	if(lst_empty(list)==0){
		List* work;
		
		for(work=list; work != NULL; work=work->next){
			
			printf("LIST : %d\n", work->info);
			
		}
		printf("\n");
		return;
	
	}else{
		printf("ESTÁ VAZIA\n");
		return;
	}
	
}

int lst_empty(List* list){
	return (list==NULL);
}

List* lst_find(List* list, int va){
	
	List* work;
	
	for(work=list; work!=NULL; work->next){
		if(work->info ==va){
			return work;
		}	
	}
	return NULL;
}

List* lst_remove (List* list, int va){
	List* prev = NULL;
	List* work = list;
	
	while(work != NULL && work->info != va){
		prev = work;
		work = work->next;
	}
	if(work == NULL){
		return list;
	}
	if(prev == NULL){
		list = work->next;
	}else{
		prev->next = work->next;
	}
	
	free(work);
	
	return list;
}

void lst_freedr(List* list){
	List* p = list;
	
	free(list);
	
	return;
}
