#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int mat [10] [10] = {{1, 2 ,3, 4, 5, 6, 7, 8,9,10}, {01, 02, 03, 04, 05, 06, 07, 8, 9, 010 }};
    int i, j;

    printf("Imprimindo primeira linha da Matriz: \n");
    for (j=0; j<10; j++){
       printf("%d", mat [0][j]);
    }

    printf ("\n Imprimindo a Matriz toda:\n");
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d", mat[i][j]);
        }
    }
    return 0;
}
