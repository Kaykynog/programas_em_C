#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Atividade calculadora em c, usando funções

//função de soma
int soma (int s1, int s2)
{
int resultado;
resultado = s1+s2;
return(resultado);
}
 
 //função de subtração
int subtrai (int sub1, int sub2)
{
int resultado;
resultado = sub1-sub2;
return (resultado);
}
 
 //função de multiplicação
int multiplica (int m1, int m2)
{
int resultado;
resultado = m1*m2;
return (resultado);
}
 
 //função de divisão 
int divide (int d1, int d2)
{
int resultado;
if (d1==0 && d2==0){ //if se faz necessário pois nenhum numero pode ser divido por 0
printf ("Nao é possivel dividir por zero!!!");
}
else{
resultado = d1/d2;
}
return (resultado);
}
 
 //função principal
int main (void)
{

setlocale(LC_ALL, "Portuguese");
 
int op, num1, num2, resultado;
 
 printf(" Projeto realizado por: Kayky Nogueira\n ");
 printf("Cursando Análise e Desenvolvimento de sistemas\n ");
 printf("FAC Anhanguera\n");
 printf(" Data: 27/10/2022\n\n");
 
printf ("\n1 - Adicão (+)\n");
printf ("2 - Subtracão (-)\n");
printf ("3 - Multiplicacão (*)\n");
printf ("4 - Divisão (/)\n");
printf ("\nEscolha a operacao a ser realizada:\n");
 
scanf ("%d", &op);
 
switch (op){
case 1: 
printf ("A operacao escolhida foi ADIÇÃO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &num2);
resultado=soma(num1, num2);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 2:
printf ("A operacao escolhida foi SUBTRAÇÃO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &num2);
resultado=subtrai(num1, num2);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 3:
printf ("A operacao escolhida foi MULTIPLICAÇÃO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &num2);
resultado=multiplica(num1, num2);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
case 4:
printf ("A operacao escolhida foi DIVISÃO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &num1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &num2);
resultado=divide(num1, num2);
printf ("O resultado da operacao é: %d\n", resultado);
break;
 
default:
printf ("DIGITA O NUMERO CERTO CARA '-' \n"); // caso o usuario digitar um numero que não for de 1 a 4, imprime isso na tela
}
 
getch();
return 0;
}