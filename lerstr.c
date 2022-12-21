#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int j;
    char s[100];

    printf("Digite uma frase ou palavra: \n");
    gets(s);

    for(j=0; s[j] != '\0'; j++);
    printf("Possui %d caracteres contando espaço.");
    return 0;
}
