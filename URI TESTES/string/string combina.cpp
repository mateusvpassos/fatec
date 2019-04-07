#include <stdio.h>
#include <string.h>
void combina(char* a, char* b){
	int i, j, tam;
	if(strlen(a)>strlen(b)){
		tam=strlen(a);
	} else{
		tam=strlen(b);
	}
	for(i=0; i<tam; i++){
		if(i<strlen(a)){
			printf("%c", a[i]);
		}
		if(i<strlen(b)){
			printf("%c", b[i]);
		}
	}
	printf("\n");
}
int main(){
	
	int n, i;
	char a[50];
	char b[50];
	scanf("%d", &n);
    for(i=0 ; i < n ; i++){
		scanf(" %s %s", &a, &b);
		combina(a, b);
	}
	return 0;
	
}
