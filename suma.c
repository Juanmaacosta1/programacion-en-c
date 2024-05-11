#include <stdio.h>

int suma(int num1, int num2)//defino una funcion con su tipo de dato su nombre y los parametros 
 {
    int resultado = num1 + num2;//realiza la cuenta 
    return resultado;//guarda ese la suma de num1 y num2 en resultado 
}


int main() {
    int a ;//declaracion de un numero entero
    int b ;//declaracion de otro numero entero 

    printf("ingrese un valor a sumar :");// ingresa un valor 
    scanf("%d",&a);//guarda el valor 

    printf("ingrese otro valor a sumar : ");//ingresa otro valor 
    scanf("%d",&b);//ingresa otro valor 


    int resultado_suma = suma(a, b);//llama a resultado y el nombre de la funcion para realizar la cuenta 

    printf("La suma de %d y %d es %d\n", a, b, resultado_suma);//muestra en pantalla 
    
    return 0;
}
