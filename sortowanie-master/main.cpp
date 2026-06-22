#include <filesystem>
#include <iostream>
#include "functions.h"
#define SIZE 10



// void swap(int *ptrN1 , int *ptrN2){
//     int temp = *ptrN1;
//     *ptrN1 = *ptrN2;
//     *ptrN2 = temp;
// }
// float calculateAverage(int sum, int size){
//     float avarage = (float) sum / SIZE;
//     printf("avarage:%f\n",avarage);
//     return 0;
// }
// float calculateSum(int numbers[], int size){
//     for(int i=0;i< SIZE;i++){
//         sum+= *(numbers+i);
//     }
//     return 0;
// }
// void deklaracjaTablicy2(int numbers[]){
//     for (int i = 0; i < SIZE; i++) {
//       numbers2[i] = numbers[i];
//     }
// }
// void sortowanie(int numbers2[]){
//     int s;
//     for(int i = 0; i < 100; i++) {
//         for(int j = 0; j < SIZE - 1; j++) {
//             if (*(numbers2+j) > *(numbers2+j+1)) {
//                 s = numbers2[j];
//                 numbers2[j] = *(numbers2+j+1);
//                 numbers2[j+1] = s;            }
//         }
//     }
//     printf("\n");
//     for(int i = 0; i < SIZE ; i++){
//         printf("*numbers2[%d] = %d\n",i,*(numbers2 +i));
//     }
// }
// int findMaximum(int numbers[]){
//     int max = numbers[0];
//     for (int i=0;i<SIZE;i++){
//         if(*(numbers+i) > max){
//             max = numbers[i];
//         }
//     }
//     return max;
// }
// int findMinimum(int numbers[]){
//     int min = numbers[0];
//     for (int i=0;i<SIZE;i++){
//         if(*(numbers+i) < min){
//             min = numbers[i];
//         }
//     }
//     return min;
// }
// void mediana(){
//     if (SIZE%2==0) {
//         float mediana = ((float(numbers2[((SIZE/2)-1)]) + float(numbers2[(SIZE/2)])) / 2);
//         printf("mediana = %f\n", mediana);
//     }
//     else{
//         float mediana = numbers[((SIZE + 1)/2)];
//         printf("mediana = %f\n", mediana);
//     }
// }
// void deklaracjaTablicy(){
//     puts("Podaj elementy tablicy");
//     for(int i = 0; i < SIZE ; i++){
//         scanf("%d",&numbers[i]);
//     }
//     for(int i = 0; i < SIZE ; i++){
//         printf("numbers[%d] = %d\n",i,*(numbers + i));
//     }
// }
int main() {
    deklaracjaTablicy();

    printf("max = %d\n",findMaximum(numbers));

    printf("min = %d\n",findMinimum(numbers));

    calculateSum(numbers,SIZE);

    calculateAverage(sum,SIZE);

    deklaracjaTablicy2(numbers);

    sortowanie(numbers2);

//    printf("\n");
//    for(int i = 0; i < SIZE ; i++){
//        printf("*numbers2[%d] = %d\n",i,*(numbers2 +i));
//    }

    mediana();

    return 0;

