#include <stdio.h>
#include <stdlib.h>
#include <string.h> //biblioteca da função strlen

int main(){

    char s[100]; //Definindo o vetor de char como  100

    printf("Digite uma palavra ou uma frase: ");//obs, o será contado os espaçoes e o caracter nulo
    fgets(s, 100, stdin); //lendo a string

    // imprime na tela o tamanho da string s
    printf("Numeros de caracteres: %d\n", strlen(s));

    return 0;
}
