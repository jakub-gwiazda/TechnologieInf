#include "parking.h"
#include <cstdio>
#include <cstring>

// Definicja tablicy danych
char tablica3D[4][4][4][50] = {
    {
        {"Zajete", "WZ56G43", "Kowalski", "5"},
        {"Wolne", "", "", "0"},
        {"Wolne", "", "", "0"},
        {"Wolne", "", "", "0"}
    },
    {
                {"Wolne", "", "", "0"}, {"Wolne", "", "", "0"}, {"Wolne", "", "", "0"}, {"Wolne", "", "", "0"}
    },
    {
                {"Wolne", "", "", "0"}, {"Wolne", "", "", "0"}, {"Wolne", "", "", "0"}, {"Wolne", "", "", "0"}
    },
    {
                {"Wolne", "", "", "0"}, {"Wolne", "", "", "0"}, {"Wolne", "", "", "0"}, {"Wolne", "", "", "0"}
    }
};

int dzien = 5;

bool czyMiejsceZajete(int r, int k) {
    int do_kiedy = 0;
    sscanf(tablica3D[r][k][3], "%d", &do_kiedy);

    if (strcmp(tablica3D[r][k][0], "Zajete") == 0 && dzien <= do_kiedy) {
        return true;
    }
    return false;
}

void wyswietlTablice() {
    printf("\n        A.\t\tB.\t\tC.\t\tD.\n");
    for (int i = 0; i < 4; ++i) {
        printf("%d\t", i + 1);
        for (int j = 0; j < 4; ++j) {
            if (czyMiejsceZajete(i, j)) {
                printf("Zajete\t\t");
            } else {
                printf("Wolne\t\t");
            }
        }
        printf("\n");
    }
}