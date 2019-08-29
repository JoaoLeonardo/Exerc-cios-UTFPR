#include <stdio.h>
#include <stdlib.h>
#include "JoãoLeonardoEx0.c"

int main(void)
{
    int vet[5], vetB[100], linha, i, j, aux=0, maior=0, ind;

    gerarNotRandVetor(vet, 5, 10, 30);
    gerarVetor(vetB, 100, 10, 30);

    printf("Mostrar quantos numeros por linha? ");
    scanf("%d",&linha);

    printf("\nVetor 1:\n");
    mostrarVetorComLinha(vet, 5, linha);
    printf("\n\nVetor 2:\n");
    mostrarVetorComLinha(vetB, 100, linha);

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 100; j++)
        {
            if(vet[i] == vetB[j])
            {
                aux++;
            }
        }
        if(aux > maior)
        {
            maior = aux;
            ind = vet[i];
        }
        aux = 0;
    }
    printf("\nMaior ocorrencia de A em B e %d e pertence ao numero %d\n", maior, ind);
    system("pause");
    return(0);
}
