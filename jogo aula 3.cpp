#include <stdio.h>
#include <stdib.h>
#include <locale.h>
#include <time.h>
int main(){
    setlocale (LC_ALL, "Portuguese");
    int numusuario, numaaleatorio =0;
    srand(time(NULL);
    numaaleatorio=rand()%100;
    printf("Bem vindo ao jogo da adivinhaçao/nDIgite um valor entre 0 e 100 que acha ser o correto/n");
    scanf("%d",&numusuario){
        if (numusuario<numaaleatorio){
            printf("O numero digitado foi menor que o numero correto, tente de  novo!!/n");
            scanf ("%d", &numusuario);

        }
        if ("O numero digitado foi maior quer o numero correto, tente de novo!!/n");
        scanf("%d",&numusuario);
    }
}
if (numusuario==numaaleatorio){
    printf("Parabens voce acertou !!!, o numero correto que era %d.",numaaleatorio);
}
return 0;

}