#include <stdio.h>
#include <math.h>

//funcion numero 1
void leerGrados(float * angulo)
 {
    printf("Ingrese el angulo en grados: ");//ingresa un numero por pantalla 
scanf("%f",angulo);//lee lo ingresado por pantalla y lo almacena 
}
//fin del llamado 

//..........................................................

//funcion numero 2 
float CalcTangente(float angulo) 
{
float angRad = angulo * (3.14 / 180.0);//realiza el calculo 
return tan(angRad);//devuelve el resultado en angulo de radianes 
}
//fin del llamado 

//...........................................................

//inicio del programa 
int main (){
//inicio 2 vaiables para guardar los valores d la funcion y mostrar en pantalla 
float ang;    // primera variable float 
float tangen; // segunda variable float 

leerGrados(&ang); // la funcion leer grados  almacena el resultado en = ang 
tangen=CalcTangente(ang);//  la funcion calculo de tangente almacena resultado = tangen 

printf("La tangente del ángulo ingresado es : %f",tangen);//muestra resultado
}
