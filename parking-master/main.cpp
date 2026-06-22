#include "parking.h"
#include <cstdio>
#include <cstring>

char opcja;
int rzad;
char kolumna;

int main() {
    while (true) {
        printf("\nPodglad parkingu na dzien: %02d.06.2042\n", dzien);
        puts("1 - Zarezerwuj miejsce");
        puts("2 - Sprawdz szczegoly miejsca");
        puts("> - Przewin czas w przod");
        puts("< - Przewin czas w tyl");
        puts("X - Wyjdz z programu");

        wyswietlTablice();
        printf("Wybor: ");
        scanf(" %c", &opcja);

        if (opcja == 'X' || opcja == 'x') {
            break;
        }

        switch (opcja) {
            case '1': {
                printf("Podaj rzad (1-4): ");
                if (scanf("%d", &rzad) != 1) {
                    printf("Blad: Podaj liczbe!\n");
                    while (getchar() != '\n');
                    break;
                }

                printf("Podaj kolumne (A-D): ");
                scanf(" %c", &kolumna);

                int k_indeks = -1;
                if (kolumna == 'A' || kolumna == 'a') k_indeks = 0;
                else if (kolumna == 'B' || kolumna == 'b') k_indeks = 1;
                else if (kolumna == 'C' || kolumna == 'c') k_indeks = 2;
                else if (kolumna == 'D' || kolumna == 'd') k_indeks = 3;

                int r_indeks = rzad - 1;

                if (r_indeks < 0 || r_indeks >= 4 || k_indeks < 0 || k_indeks >= 4) {
                    printf("Blad: Miejsce %c%d nie istnieje!\n", kolumna, rzad);
                    break;
                }

                if (czyMiejsceZajete(r_indeks, k_indeks)) {
                    int do_kiedy = 0;
                    sscanf(tablica3D[r_indeks][k_indeks][3], "%d", &do_kiedy);
                    printf("Blad: Miejsce %c%d jest zajete do %02d.06 przez %s!\n",
                           kolumna, rzad, do_kiedy, tablica3D[r_indeks][k_indeks][2]);
                    break;
                }

                char rejestracja[20];
                char nazwisko[30];
                int ilosc_dni;

                printf("Podaj numer rejestracyjny: ");
                scanf(" %19s", rejestracja);
                printf("Podaj nazwisko kierowcy: ");
                scanf(" %29s", nazwisko);
                printf("Na ile dni ma byc rezerwacja?: ");

                if (scanf("%d", &ilosc_dni) != 1 || ilosc_dni <= 0) {
                    printf("Blad: Nieprawidlowa ilosc dni!\n");
                    while (getchar() != '\n');
                    break;
                }

                int do_kiedy_dzien = dzien + ilosc_dni - 1;

                strcpy(tablica3D[r_indeks][k_indeks][0], "Zajete");
                strcpy(tablica3D[r_indeks][k_indeks][1], rejestracja);
                strcpy(tablica3D[r_indeks][k_indeks][2], nazwisko);
                sprintf(tablica3D[r_indeks][k_indeks][3], "%d", do_kiedy_dzien);

                printf("\nMiejsce %c%d pomyślnie zarezerwowane na %d dni (do %02d.06)!\n",
                       kolumna, rzad, ilosc_dni, do_kiedy_dzien);
                break;
            }

            case '2': {
                printf("Podaj rzad miejsca do sprawdzenia (1-4): ");
                if (scanf("%d", &rzad) != 1) {
                    printf("Blad: Podaj liczbe!\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("Podaj kolumne miejsca do sprawdzenia (A-D): ");
                scanf(" %c", &kolumna);

                int k_indeks = -1;
                if (kolumna == 'A' || kolumna == 'a') k_indeks = 0;
                else if (kolumna == 'B' || kolumna == 'b') k_indeks = 1;
                else if (kolumna == 'C' || kolumna == 'c') k_indeks = 2;
                else if (kolumna == 'D' || kolumna == 'd') k_indeks = 3;

                int r_indeks = rzad - 1;

                if (r_indeks < 0 || r_indeks >= 4 || k_indeks < 0 || k_indeks >= 4) {
                    printf("Blad: Miejsce %c%d nie istnieje!\n", kolumna, rzad);
                    break;
                }

                printf("\n=== SZCZEGOLY MIEJSCA %c%d ===\n", kolumna, rzad);
                if (czyMiejsceZajete(r_indeks, k_indeks)) {
                    int do_kiedy = 0;
                    sscanf(tablica3D[r_indeks][k_indeks][3], "%d", &do_kiedy);

                    printf("Status:        ZAJETE\n");
                    printf("Rejestracja:   %s\n", tablica3D[r_indeks][k_indeks][1]);
                    printf("Kierowca:      %s\n", tablica3D[r_indeks][k_indeks][2]);
                    printf("Rezerwacja do: %02d.06.2042\n", do_kiedy);
                } else {
                    printf("Status:        WOLNE\n");
                    printf("Miejsce nie posiada obecnie zadnych aktywnych rezerwacji.\n");
                }
                printf("=============================\n");
                break;
            }

            case '>':
                dzien++;
                break;
            case '<':
                if (dzien > 1) dzien--;
                else printf("Nie mozana cofnac czasu przed 1.06!\n");
                break;
            default:
                printf("Niepoprawna opcja.\n");
                break;
        }
    }
    return 0;
}