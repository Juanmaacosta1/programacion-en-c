#include <stdio.h>
int pote (int num1,int num2){
    int pepe = num1*num2 ;
    return pepe;

}
int main () {
    int a;
    int b;
    printf("ingrese su primer num : ");
    scanf("%d",&a);
    printf("ingrese su segundo num : ");
    scanf("%d",&b);
int pepe = pote (a,b);
printf ("resultado : %d",pepe);
return 0;

}