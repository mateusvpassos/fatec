#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char x[1110];
    int n, r=0, i, j;
    scanf("%d", &n);
    for(i=0 ; i < n ; i++){
        scanf("%s", x);
        for( j=0 ; j < strlen(x) ; j++){
	        if(x[j] == '1'){
	            r+=2;
	        }
	        else if(x[j] == '2'){
	            r+=5;
	        }
	        else if(x[j] == '3'){
	            r+=5;
	        }
	        else if(x[j] == '4'){
	            r+=4;
	        }
	        else if(x[j] == '5'){
	            r+=5;
	        }
	        else if(x[j] == '6'){
	            r+=6;
	        }
	        else if(x[j]== '7'){
	            r+=3;
	        }
	        else if(x[j] == '8'){
	            r+=7;
	        }
	        else if(x[j] == '9'){
	            r+=6;
	        }
	        else if(x[j] == '0'){
	            r+=6;
	        }
	    }
        printf("%d leds\n", r);
        r = 0;
        }
    return 0;
}
