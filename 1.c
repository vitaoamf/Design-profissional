#include <stdio.h>


int main() {

    int num1, num2, num3; 
    float media;

    printf("--- Calculadora de Media Aritmetica ---\n");
    printf("Digite o primeiro numero inteiro: ");

    scanf("%d", &num1); 

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);
    
    media = (float)(num1 + num2 + num3) / 3.0; 
    
    printf("\n--- Resultado ---\n");
    printf("Os numeros digitados foram: %d, %d e %d\n", num1, num2, num3);

    printf("A media aritmetica e: %.2f\n", media); 

    return 0;

}
