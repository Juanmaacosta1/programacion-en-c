#include <stdio.h>
//Escribe una función que reciba un array de enteros y su tamaño, y devuelva la media de los elementos del array.

float numero (int arr[],int tamaño)
{
float acu = 0;

for (int i = 0; i < tamaño; i++)
{
   acu += arr[i];
}
return (acu/tamaño);
}
