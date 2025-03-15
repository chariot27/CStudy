#include <stdio.h>

#define N 5

void printa_matriz(int matriz[N][N]){
    int i,j;
    for (j = 0; j < N; j++) {
        for (i = 0; i < N; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[N][N];
    int i, j, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    int somaAcimaDiagonalPrincipal = 0, somaAcimaDiagonalSecundaria = 0;
    int somaAcimaPrincipalAbaixoSecundaria = 0;
    int aux = 0;

    printf("Informe uma matriz: \n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    // 1 possibilidade
    /*
    for (i = 0; i < N; i++) {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][N - i - 1];


            1 2 3
            4 5 6
            7 8 9

    }
    */

    // 2 possibilidade
    /*
    for (i = 0, j = N - 1; i < N; i++,j--) {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][j];


            1 2 3
            4 5 6
            7 8 9

    }*/

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {

            if(i==j){
                somaDiagonalPrincipal += matriz[i][j];
            }
            else if(i < j){
                somaAcimaDiagonalPrincipal += matriz[i][j];

                if(i + j > N - 1){
                    somaAcimaPrincipalAbaixoSecundaria += matriz[i][j];
                }
            }



            if(i + j==N-1){
                somaDiagonalSecundaria += matriz[i][j];
            }
            else if(i+j < N-1){
                somaAcimaDiagonalSecundaria += matriz[i][j];
            }

        }
    }

    printa_matriz(matriz);

    printf("\nSoma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaDiagonalSecundaria);
    printf("Soma acima diagonal principal: %d\n", somaAcimaDiagonalPrincipal);
    printf("Soma acima diagonal secundaria: %d\n",somaAcimaDiagonalSecundaria);
    printf("Soma acima abaixo secundaria: %d\n",somaAcimaPrincipalAbaixoSecundaria);

    return 0;
}
