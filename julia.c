#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
/*
int main(int argc, char const *argv[])
{
    int senha;
    printf("Digite a senha do cartao:\n");
    scanf("%d", &senha);
    if (senha == 3027){
        printf("Processando...\n");
        printf("Pagamento Autorizado!\n");
    } else{
        printf("Senha incorreta \nTente novamente!");
    }
    return 0;
}
 */
/*
int main(){

 float horas, minutos;
 setlocale(LC_ALL,"portuguese");

 printf("Quer saber quanto minutos já se passaram hoje? me informe, que horas são? (ex: 18,10) \n");

 scanf("%f", &horas);

 minutos=(horas*60);

 printf("\nJá se passaram %.2f minutos do seu dia", minutos);
 return 0;
 }*/

 int main (){
    int preco=0;

    printf("BEM VINDO AO KN AERON!!\n\n");
    printf("Qual sera o seu destino?\n");
    printf("1 - Cancun \n2 - Paris\n3 - Ilhas Maldivas\n4 - Genebra\n5 - Roma\n6 - Las Vegas\n7 - Orlando\n");
    scanf("%d", &preco);

switch (preco)
{
case 1:
    printf("Otima escolha!\nValor USD 399,00\n7 dias com tudo incluso!\n");
    printf("Aceitamos pix, cartao de debito e credito (bandeiras: MasterCard, Visa, Elo)");
        break;
case 2: 
    printf("Otima escolha!\nValor USD 600,00\n7 dias com tudo incluso!\n");
    printf("Aceitamos pix, cartao de debito e credito (bandeiras: MasterCard, Visa, Elo)");
        break;
case 3:
    printf("Otima escolha!\nValor USD 799,00\n7 dias com tudo incluso!\n");
    printf("Aceitamos pix, cartao de debito e credito (bandeiras: MasterCard, Visa, Elo)");
        break;
case 4:
    printf("Otima escolha!\nValor USD 599,00\n7 dias com tudo incluso!\n");
    printf("Aceitamos pix, cartao de debito e credito (bandeiras: MasterCard, Visa, Elo)");
        break;
case 5:
    printf("Otima escolha!\nValor USD 299,00\n7 dias com tudo incluso!\n");
    printf("Aceitamos pix, cartao de debito e credito (bandeiras: MasterCard, Visa, Elo)");
        break;
case 6:
    printf("Otima escolha!\nValor USD 899,00\n7 dias com tudo incluso!\n");
    printf("Aceitamos pix, cartao de debito e credito (bandeiras: MasterCard, Visa, Elo)");
        break;
case 7:
    printf("Otima escolha!\nValor USD 699,00\n7 dias com tudo incluso!\n");
    printf("Aceitamos pix, cartao de debito e credito (bandeiras: MasterCard, Visa, Elo)");
        break;
    default: 
    printf("OPCAO INVALIDA!");
    break;
}
    
    return 0;
 }
 