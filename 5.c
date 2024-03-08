#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Digite o valor de a: \n");
    scanf("%d", &a);

    printf("Digite o valor de b: \n");
    scanf("%d", &b);

    // Troca os valores de a e b utilizando apenas a variável temp
    temp = a;
    a = b;
    b = temp;

    printf("O novo valor de a é: %d\n", a);
    printf("O novo valor de b é: %d\n", b);

    return 0;
}
