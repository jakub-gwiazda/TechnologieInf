#ifndef PARKING_H
#define PARKING_H

// Deklaracja zmiennej globalnej tablicy (extern oznacza, że jej ciało jest w .cpp)
extern char tablica3D[4][4][4][50];
extern int dzien;

// Deklaracje funkcji
bool czyMiejsceZajete(int r, int k);
void wyswietlTablice();

#endif // PARKING_H