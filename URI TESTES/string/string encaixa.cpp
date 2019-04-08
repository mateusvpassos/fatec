#include<stdio.h>
#include<string.h>
int main(){
	
	int n, i, j, k, cont;
    char n1[1001], n2[1001];
    
    scanf("%d",&n);
    for(i = 0; i < n; i++){
          cont = 0;
          scanf("%s %s", &n1, &n2);
          
          for(j = strlen(n2), k = strlen(n1) ; j >= 0; j--, k--){
                if(n1[k] == n2[j]){
                	cont++;
				}
                else{
                	break;
				}
          }
          if(cont == strlen(n2)+1){
          	printf("encaixa\n");
		  }
          else{
          	printf("nao encaixa\n");
		  }
    }
    return 0;
	
}
