#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float m;
    float c; 
    c = m / 2;


    printf("- Entre com o valor em Metros:\n ");
    scanf("%d", &m);
    
    printf("Metros = %2.f \n", m);
    printf(" Centimetro: %f", c);
    return 0;
}
