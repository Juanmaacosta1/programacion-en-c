#include <stdio.h>

// Función para determinar si un año es bisiesto
int esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// Función para obtener el día de la semana para una fecha dada
int obtenerDiaSemana(int dia, int mes, int anio) {
    if (mes < 3) {
        mes += 12;
        anio -= 1;
    }
    int k = anio % 100;
    int j = anio / 100;
    int diaSemana = (dia + 13 * (mes + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    return (diaSemana + 5) % 7;  
}

// Función para imprimir el calendario de un mes dado
void imprimirCalendario(int mes, int anio) {
    int diasEnMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && esBisiesto(anio)) {
        diasEnMes[2] = 29;
    }

    printf(" Calendario %d-%02d\n", anio, mes);
    printf(" Lu Ma Mi Ju Vi Sa Do\n");

    // Obtener el día de la semana para el primer día del mes
    int diaInicio = obtenerDiaSemana(1, mes, anio);

    // Imprimir espacios en blanco hasta el día de inicio
    for (int i = 0; i < diaInicio; i++) {
        printf("   ");
    }

    // Imprimir los días del mes
    for (int dia = 1; dia <= diasEnMes[mes]; dia++) {
        printf("%3d", dia);

        // Cambiar de línea al final de la semana (sábado)
        if ((dia + diaInicio - 1) % 7 == 0 || dia == diasEnMes[mes]) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
}

int main() {
    int mes, anio;

    //  entrada del usuario para el mes y el año
    printf("Ingrese el mes (1-12): ");
    scanf("%d", &mes);

    printf("Ingrese el año: ");
    scanf("%d", &anio);

    //  entrada del usuario
    if (mes < 1 || mes > 12 || anio < 0) {
        printf("Entrada no válida.\n");
        return 1;
    }

    // mostrar el calendario
    imprimirCalendario(mes, anio);

    return 0;
}
