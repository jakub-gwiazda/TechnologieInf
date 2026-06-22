#include <iostream>
#include <cstring>
#include <string>

void usage(char *programName) {
    printf("Usage: %s number1 operation number2\n", programName);
    printf("Available operations:\n");
    printf("\tadd\n");
    printf("\tminus\n");
    printf("\tmultipy\n");
    printf("\tdivide\n");
    printf("\n");
}

int main(int argc, char* argv[]) {

    int number1 = 0;
    int number2 = 0;
    int result = 0;

    if (argc == 4) {
        number1 = atoi(argv[1]);
        number2 = atoi(argv[3]);

        if (!strcmp("add", argv[2])) {
            result = number1 + number2;
            printf("%d + %d = %d\n", number1, number2, result);
            return 0;
        }
        if (!strcmp("minus", argv[2])) {
            result = number1 - number2;
            printf("%d - %d = %d\n", number1, number2, result);
            return 0;
        }
        if (!strcmp("multiply", argv[2])) {
            result = number1 * number2;
            printf("%d * %d = %d\n", number1, number2, result);
            return 0;
        }
        if (!strcmp("divide", argv[2])) {
            if(number2==0){
                return 0;
            }
            result = number1 / number2;
            printf("%d / %d = %d\n", number1, number2, result);
            return 0;
        }

    }
    if(argc ==2){
        char slowo[100];
        printf("slowo : %s",argv[1]);


        return 0;
    }

    usage(argv[0]);

    return 0;
}
