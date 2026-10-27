#include<stdio.h>

void main(){
   float a, b , c;
   float media;
   printf("Digite o primeiro número:\n" );
   scanf("%f", &a);
   printf("Digite o segundo número:\n" );
   scanf("%f", &b);
   printf("Digite o terceiro número:\n" );
   scanf("%f", &c);
   
   media = (a + b + c)/3;
   printf("O resultado é: %2f\n", media);
}