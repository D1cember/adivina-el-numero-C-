
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, intento, intentos = 0;
    const int MAX_INTENTOS = 7;

    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;

    printf("=== vamos a que adivines el codigo ===\n");
    printf("He wuachado un numero del 1 y 100.\n");
    printf("Tienes %d intentos para adivinarlo que comience el juego.\n\n", MAX_INTENTOS);

    while (intentos < MAX_INTENTOS) {
        printf("Intento %d: ", intentos + 1);
        if (scanf("%d", &intento) != 1) {
            printf("Entrada bien.\n");
            return 1;
        }

        intentos++;

        if (intento == numeroSecreto) {
            printf("ahuevito ganaste crees que puedas ganar otra vez ?? Lo adivinaste en %d intento(s).\n", intentos);
            return 0; 
        } else if (intento < numeroSecreto) {
            printf("piensa mas alla.\n");
        } else {
            printf("nonono mas abajo tampoco tanto.\n");
        }

        printf("se te estan acabando tus oportunidades tequedan aver a pues estos: %d\n\n", MAX_INTENTOS - intentos);
    }

    printf("mamaste no le atinaste ni modo, el numero era %d.\n", numeroSecreto);
    return 0; 
}
