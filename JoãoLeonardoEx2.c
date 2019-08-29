#include <stdio.h>
#include <stdlib.h>
#include "JoãoLeonardoEx0.c"
int divisores(int num);
void mostrarDivisores(int num);

int main(void)
{
    int tam, lim1, lim2, i, ind;

    printf("Insira o tamanho do vetor: ");
    scanf("%d",&tam);
    printf("Insira o menor limite: ");
    scanf("%d",&lim1);
    printf("Insira o maior limite: ");
    scanf("%d",&lim2);

    int vet[tam];
    gerarVetor(vet, tam, lim1, lim2);
    ordernarVetor(vet, tam);
    printf("\nVetor:\n");
    mostrarVetorComLinha(vet, tam, 10);
    printf("\nVetor ordenado:\n");
    mostrarVetorComLinha(vet, tam, 10);
    printf("\n\nDivisores:\n");

    lim2 = 0;
    for(i=0; i < tam; i++)
    {
        for(lim1 = 0; lim1 < i; lim1++)
        {
            if(vet[lim1] == vet[i])
            {
                lim1 = i+1;
            }
        }
        if(lim1 != i+2)
        {
            printf("%d -> ", vet[i]);
            mostrarDivisores(vet[i]);
            printf(" = %d divisores\n\n", lim1 = divisores(vet[i]));
            if(lim1 > lim2)
            {
                lim2 = lim1;
                ind  = vet[i];
            }
        }
    }
    printf("A maior quantidade de divisores e %d e pertence a %d\n",lim2, ind);
    system("pause");
    return(0);
}

int divisores(int num)
{
    int i, aux=2;

    if(num == 1)
    {
        return(1);
    }

    if(num != 0)
    {
        for(i = 2; i<=num/2; i++)
        {
            if(num % i == 0)
            {
                aux++;
            }
        }
    }
    return(aux);
}

void mostrarDivisores(int num)
{
    int i;

    printf("1");
    if(num != 0)
    {
        for(i = 2; i<=num/2; i++)
        {
            if(num % i == 0)
            {
                printf("%4d",i);
            }
        }
    }
    if(num != 1)
    {
        printf("%4d",num);
    }
}
