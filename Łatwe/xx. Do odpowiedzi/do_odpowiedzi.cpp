#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int *tree;

void order_statistic(int k, int n) // n jest liczbą 2^coś-1 i jest maksymalną liczbą z tych, które będziemy przeszukiwać w poszukiwaniu k-tej statystyki pozycyjnej
{
        int x = 1;
        while(x <= n) // dopóki nie dojdziemy do liści
                if(k > tree[x<<1]) // jeśli w lewym poddrzewie nie ma wystarczająco elementów
                        k -= tree[x<<1], // odejmij tyle elementów ile jest w lewym poddrzewie
                        x = (x<<1)+1; // i przejdź do prawego poddrzewa
                else // przejdź do lewego poddrzewa
                        x <<= 1;
        --tree[x]; // usuń k-ty element
        while(x > 1) // i zaktualizuj tablicę drzewa
            x >>= 1,
            tree[x] = tree[x<<1]+tree[(x<<1)+1];
}

int main()
{
    int n, primes[n]; // dane
    int n2, i, j, k;
    tree = new int[2*n2+2];
    cin>>n;

    if(n < 4)
    {
        puts("1");
    }
    n2 = n+1;
    if(n2-1 & n2) // jeśli n nie jest potęgą 2
    {
        frexp(n2, &n2);
        n2 = 1 << n2; // to zrób z n potęgę 2
    }
    --n2; // i pomniejsz o 1
    for(j = 1; j < 2*n2+2; ++j) // wyzeruj tablicę drzewa
        tree[j] = 0;
    for(j = 1; j <= n; ++j) // wypełnij tablicę drzewa liczbami z przedziału 1..n
    {
        k = j+n+1;
        ++tree[k];
        while(k > 1)
            k >>= 1,
            tree[k] = tree[k<<1]+tree[(k<<1)+1];
    }
    for(j = 0, k = 1; j < n-1; ++j) // usuń n-1 liczb
    {
        i = primes[j]-1+k; i = (-1)%(n-j)+1; // %rozmiar - wcześniej omówiony trick
        order_statistic(i, n); // znajdź i-tą liczbę i ją usuń
        k = i; k = (k-1)%(n-j-1)+1; // rozmiar się zmniejszył, bo usunęliśmy 1 liczbę
    }
    for(j = n+1; j < 2*n+2; ++j)
        if(tree[j]) // jeśli znalazłeś jakąś nie usuniętą liczbę to ją wypisz i zakończ szukanie
        {
            printf("%d", j-n-1);
            break;
        }
}