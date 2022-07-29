#include <stdio.h>

void sumar (int w, int x, int y, int z) {
    printf("%d / %d\n", w * z + x * y, x * z);
}

int main(int argc, char const *argv[]) {
    int num1, den1, num2, den2, opcion;
    printf("Ingrese el numerador y denominador de la 1ra fracción: ");
    scanf("%d %d", &num1, &den1);
    printf("Ingrese el numerador y denominador de la 2da fracción: ");
    scanf("%d %d", &num2, &den2);
    printf("Opciones:\n1 - Sumar\nElija una opción: ");
    scanf("%d", &opcion);
    switch (opcion) {
    case 1:
        sumar(num1, den1, num2, den2);
        break;
    
    default:
        break;
    }
    return 0;
}
