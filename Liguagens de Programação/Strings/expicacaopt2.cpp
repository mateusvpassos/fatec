/*Funções retornam apenas 1 valor; int float ou char; 
Ou não retornam valor; void;
Matriz e vetor são por referência, é VOID pois os valores se tranferem pela referência;
*/
#include <stdio.h>
void soma(int a, int b, int &c){
	c=a+b;
	return;
}
main(){
	int x,y,&sm;
	printf("x = ");
	scanf("%d",&x);
	printf("\n Y: ");
	scanf("%d", &y);
	soma(x,y,&sm);
	printf("\nSOMA: %d ", sm);
	printf("\n X= %d", x);
	printf("\n Y= %d", y);
}
//SADASDLASDKÇLALK TA ERRADO

