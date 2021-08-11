#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void erroParam(){

    printf("\nERRO");
    printf("\nPara fazer um calculo digite como parametros:");
    printf("\nO primeiro numero");
    printf("\nA operacao desejada(+, -, /, x)");
    printf("\nO segundo numero\n");

    exit(1);

}

int main(int argc, char *argv[]){

    if(argc == 4){

        double x1, x2, r;
        char *operation;

        x1 = atof(argv[1]);
        x2 = atof(argv[3]);

        operation = (char *) malloc(sizeof(argv[2]));

        strcpy(operation, argv[2]);

        if(strcmp(operation, "+") == 0){

            r = x1 + x2;

        }else{

            if(strcmp(operation, "-") == 0){

                r = x1 - x2;

            }else{

                if(strcmp(operation, "x") == 0){

                    r = x1 * x2;

                }else{

                    if(strcmp(operation, "/") == 0){

                        r = x1 / x2;

                    }else{

                        erroParam();

                    }


                }

            }

        }

        printf("O resultado e: %.2f\n", r);

        free(operation);

    }else{

        erroParam();

    }

    return 0;

}