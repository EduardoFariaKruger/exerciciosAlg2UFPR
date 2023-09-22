#include <stdio.h>

void imprime_i_ate_n(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
}

void imprime_r_ate_zero(int n)
{
    if (n == 0)
    {
        printf("%d\n", n);
        return;
    }
    printf("%d\n", n);
    imprime_r_ate_zero(n - 1);
}

void imprime_r_ate_n(int i, int n)
{
    if (i == n)
    {
        printf("%d\n", i);
        return;
    }
    printf("%d\n", i);
    imprime_r_ate_n(i + 1, n);
}

/*Escreva uma fun¸c˜ao recursiva que verifica se um vetor de n´umeros corresponde a um
palındrome. A fun¸c˜ao retorna 1 em caso de sucesso e 0 em caso de falha.*/

int ehPalindromo(int vetor[], int tamIni, int tamFim)
{
    if ((tamFim - tamIni) == 0 || (tamFim - tamIni) == 1)
    {
        if (vetor[tamIni] == vetor[tamFim])
        {
            return 1;
        }
        return 0;
    }
    if (vetor[tamIni] == vetor[tamFim])
    {
        return 1 && ehPalindromo(vetor, tamIni + 1, tamFim - 1);
    }
    return 0;
}

/*Escreva uma fun¸c˜ao recursiva que calcule e retorne a soma de todos os elementos de um
vetor de inteiros dado como entrada. O tamanho do vetor tamb´em ´e lido do teclado.*/

int soma_vetor(int vetor[], int tam)
{
    if (tam == 1)
    {
        return vetor[tam-1];
    }
    return vetor[tam-1] + soma_vetor(vetor, tam-1);
}

int lg (int N)
{
    int i, n;
    i = 0;
    n = 1;
    while (n <= N/2){
        n = 2 * n;
        i += 1;
    }
    return i;
}

int lg_r (int N)
{
    if (N == 1)
    {
        return 0;
    }
    if (N <= 2)
    {
        return 1;
    }
    return 1 + lg_r(N/2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", lg_r(n));
}