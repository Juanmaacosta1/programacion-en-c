#include <stdio.h>

struct Cancion {
    char titulo[50];
    char artista[50];
    int duracion; // en segundos
};

int duracion_total(struct Cancion arr[], int tam) {
    int duracionTotal = 0;

    for (int i = 0; i < tam; i++) {
        duracionTotal += arr[i].duracion;
    }

    return duracionTotal;
}

int main() {
    struct Cancion canciones[] = {
        {"Cancion 1", "Artista 1", 180},
        {"Cancion 2", "Artista 2", 240},
        {"Cancion 3", "Artista 3", 210}
    };
    
    int tam = sizeof(canciones) / sizeof(canciones[0]);

    int duracionTotal = duracion_total(canciones, tam);

    printf("Duración total de todas las canciones: %d segundos\n", duracionTotal);

    return 0;
}
