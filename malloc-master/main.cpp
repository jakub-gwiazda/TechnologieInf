#include <iostream>
#include <cstdlib>
int main() {
    srand( time( NULL ) );
    int amount = 0;
    int Nmin = 0;
    int Nmax = 0;
    printf("Numbers amount: ");
    scanf("%d",&amount);
    printf("Range from: ");
    scanf("%d",&Nmin);
    printf("Range to: ");
    scanf("%d",&Nmax);
    int tablica[100];
    void *malloc(size_t rozmiar);
    int *temps;
    temps = (int *)malloc(10*sizeof(int));
    printf("You have choosen %d numbers in range form %d to %d   \n",amount,Nmin,Nmax);
    for (int i = 1;i <= amount;i++) {
        int liczba = std::rand();
        int los = (liczba % (Nmax - Nmin)) + Nmin;
        tablica[i]= los;
    }
    for (int i = 1;i <= amount;i++) {
        printf("los%d: %d\n",i,tablica[i]);
    }
}
