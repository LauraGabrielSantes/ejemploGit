#include <stdio.h>

// Función para sumar dos números
int suma(int a, int b) {
    return a + b;
}

// Función para restar dos números
int resta(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;

    printf("Ingresa el primer número: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);

    int resultadoSuma = suma(num1, num2);
    int resultadoResta = resta(num1, num2);

    printf("Suma: %d + %d = %d\n", num1, num2, resultadoSuma);
    printf("Resta: %d - %d = %d\n", num1, num2, resultadoResta);

    return 0;
}

