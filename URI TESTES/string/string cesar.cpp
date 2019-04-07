#include <stdio.h>
#include <string.h>
void cifraC(char* a, int ta){
	int i, aux=0;
	
	for (i = 0; i < 50; i++){
            if (a[i] == '\0'){
            	break;
			}
            if ((a[i] - ta) < 65){
            	aux = (a[i] - ta) + 26;
			}else{
				 aux = a[i] - ta;
			}
        printf("%c", aux);
        }
        printf("\n");
}
int main(){
	
	int n, i, ta;
	char a[50];
	scanf("%d", &n);
	
    for(i=0 ; i < n ; i++){
		scanf(" %s %d", &a, &ta);
		cifraC(a, ta);
	}
	return 0;
	
}
