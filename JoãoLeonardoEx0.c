#include <time.h>
#include <math.h>

int gerarNotRandVetor(int vetor[], int tam, int limiteMenor, int limiteMaior)
{
    int i, j;
    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % (limiteMaior - limiteMenor + 1) + limiteMenor;
        for(j = 0; j<i; j++)
        {
            if(vetor[i] == vetor[j])
            {
                i--;
                j = 1000;
            }
        }
    }
}

int gerarVetor(int vet[], int tam, int limiteMenor, int limiteMaior)
{
    int i;
    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vet[i] = rand() % (limiteMaior - limiteMenor + 1) + limiteMenor;
    }
}

void mostrarVetorComLinha(int vet[], int tam, int qntLinha)
{
    int i, aux=0;

    for(i=0; i<tam; i++)
    {
        printf("%4d",vet[i]);
        aux++;
        if(aux == qntLinha)
        {
            aux = 0;
            printf("\n");
        }
    }
}

int ordernarVetor(int vet[], int tam)
{
    int i, aux, j;

    for(i=0; i<tam; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

int maisOcorre(int vet[], int tam)
{
    int i, maior=0, j, y=0, ind;

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            if(vet[i] == vet[j])
            {
                y++;
            }
        }
        if(y > maior)
        {
            maior = y;
            ind = vet[i];
        }
        y=0;
    }
    return(ind);
}

int qntOcorre(int vet[], int tam)
{
    int i, maior=0, j, y=0, ind;

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            if(vet[i] == vet[j])
            {
                y++;
            }
        }
        if(y > maior)
        {
            maior = y;
        }
        y=0;
    }
    return(maior);
}
