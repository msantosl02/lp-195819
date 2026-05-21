#include <stdio.h>

int main() {
    
 int hi,hf,tempo;
 
scanf("%d %d",&hi,&hf);

tempo=24-hi+hf;
  
 if (tempo >24)
 printf("O JOGO DUROU %d HORA(S)\n",tempo-24);
 else
 printf("O JOGO DUROU %d HORA(S)\n",tempo);

    return 0;
}
