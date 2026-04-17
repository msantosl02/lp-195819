#include <stdio.h>
int main() {
	int X[100] , i , maior , ps;
	for(i = 0; i < 100; i++) {
	    scanf("%d", &X[i]);
	    
	    if(i==0){
	        maior = X[i];
	        ps = i;
	    } else {
	        if(X[i] >= maior){
	            maior = X[i];
	            ps = i;
	        }
	    }
	}
    
    printf("%d\n", maior);
    printf("%d\n", ps + 1);
    
    return 0;
}    
