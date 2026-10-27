#include<stdio.h>

void main(){
   float base, altura;
   float areatriangulo;

   printf("Insira a altura: \n");
   scanf("%f", &altura);
   printf("Insira a base: \n");
   scanf("%f", &base);

   areatriangulo = (base*altura) /2 ;
   printf("A área do triangulo é: %.2f\n", areatriangulo);

}