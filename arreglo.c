#include <stdio.h>

int main() {
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {1, 2, 3, 4, 5};

    int sonIguales = 1; // Suponemos que son iguales al principio

    // Comparación de los valores de array1 y array2
    for (int i = 0; i < 5; i++) {
        if (array1[i] != array2[i]) {
            sonIguales = 0; // Si encontramos una diferencia, los marcamos como diferentes
            break;
        }
    }

    if (sonIguales) {
        printf("Los arrays son iguales\n");
    } else {
        printf("Los arrays no son iguales\n");
    }

    return 0;
}
