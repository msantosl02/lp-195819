#include <stdio.h>
int main() {
    int maior , i , n , ps;
    for(i=1; i<= 100; i++) {
        scanf("%d", &n );
        if(i==1) {
            maior = n;
            ps = i;
        }
        if(n > maior) {
            maior = n;
            ps = i;
        }
        
        
    }
    printf("%d\n", maior);
     printf("%d\n", ps);
     return 0;
}
