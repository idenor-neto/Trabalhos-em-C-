#include <stdio.h>
#include <math.h>
#define PI 3.14159265

void main (){
   double raio, area, volume;

   printf("Digite o raio da esfera: \n");
   scanf("%lf", &raio);

   area = 4 * PI * pow(raio,2);
   volume = (4.0/3.0) * PI * pow(raio,3);

   printf("A área e o volume da sua esfera são: \n");
   printf("%.4f\n", area);
   printf("%.4f\n", volume);

}