#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char* duplica(int tam, char* str){
	
	int i,j=0;
	int n=tam*2;
	
	char* resp=(char*) malloc((2*tam+1)*sizeof(char));
	
 	for(i=0;i<n;i++){
 		resp[i]=str[j];
 		j++;
 		if(j==tam){
 			j=0;
		}
	}
	
	resp[i]='\0';
	
 	return resp;	
	
}
int main(){
	
	char str[100];
	scanf("%[^\n]", &str);
	int tam=strlen(str);
	char* resp = duplica(tam, str);
	
	printf("%s", resp);
	
	free(resp);
	return 0;
}
