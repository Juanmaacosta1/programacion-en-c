#include <stdio.h>
int mult(int num1 , int num2 )
{
int resultado =num1 * num2 ;

return resultado;
}
int main (){
    int a;
    int b;
    printf("num: ");
    scanf("%d",&a);
    
    printf("num: ");
    scanf("%d",&b);

    int resultado = mult (a,b);
    printf("resultado: %d",resultado);
    return 0;
}