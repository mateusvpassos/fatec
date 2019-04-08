#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* codificaCesar(char* cifra);
int main(){
	
	char cifra[100];
	scanf(" %[^\n]s", &cifra);
	
	char* cifraCesar = codificaCesar(cifra);
	printf("%s\n", cifraCesar);
	
	free(cifraCesar);
	
	return 0;
} 
char* codificaCesar(char* cifra){
	
	int i, tam=strlen(cifra);
	char* cifraCesar = (char*) malloc(sizeof(char) * tam);
	
	for(i=0;i<strlen(cifra);i++){
		
		if(cifra[i]>=97 && cifra[i]<=122 || cifra[i]>=65 && cifra[i]<=90){
			
			if(cifra[i]+3 > 122 || cifra[i]+3 > 90 && cifra[i]+3 <= 96){
				
				cifraCesar[i]=cifra[i]-23;	
			}else{
				
				cifraCesar[i]=cifra[i]+3;
			}
		}else{
			
			cifraCesar[i]=cifra[i];
		}
	}
	
	cifraCesar[i]='\0';
	
	return cifraCesar;
}
