#include <stdio.h>
#include "cmake-build-debug/stack.h"

void menu(void)
{
    printf("\n");
    printf("1 - dodaj liczbe w kolejce (Push)\n");
    printf("2 - odczytaj ostatnia w kolejce\n");
    printf("3 - zdejmij liczbe pierwsza w kolejce (Pop)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pusta\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    printf("STOS - implementacja w tablicy statycznej\n");
    while (1)
    {
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 1:
                if ( !isQueueFull() ){
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    QPush(temp);
                }
                else {
                    printf("operacja niedozwolona STOS pelny!!!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = QTop();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona STOS pusty!!!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = QPop();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona STOS pusty!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("STOS jest pusty.\n");
                }
                else {
                    printf("STOS nie jest pusty.\n");
                }
                break;

            case 5:
                if (isQueueEmpty()) {
                    printf("STOS jest pelny.\n");
                }
                else {
                    printf("STOS nie jest pelny.\n");
                }
                break;

            case 6:
                //zakonczenie programu
                return 0;
            case 7:
                for(int i = 0; i<5; i++){
                    printf("%d",queue_table[i]);
                }

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}
