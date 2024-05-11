#include <stdio.h>
void funcion(int *x) {
 *x = *x * *x;
}

int main() {
 int num = 6;
 funcion(&num);
 printf("%d", num);
 return 0;
} 
