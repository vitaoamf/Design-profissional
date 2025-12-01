#include <stdio.h>

// Função principal do programa
int main() {
    // 1. Declaração de variáveis
    int num1, num2, num3; 
    float media;

    // 2. Coleta de dados do usuário
    printf("--- Calculadora de Media Aritmetica ---\n");
    printf("Digite o primeiro numero inteiro: ");
    // scanf le o valor digitado e armazena na variavel num1
    scanf("%d", &num1); 

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);

    // 3. Calculo da media
    // A soma dos numeros e dividida por 3.0 para garantir que o resultado seja float (com casas decimais)
    media = (float)(num1 + num2 + num3) / 3.0; 

    // 4. Exibicao do resultado
    printf("\n--- Resultado ---\n");
    printf("Os numeros digitados foram: %d, %d e %d\n", num1, num2, num3);
    // %.2f formata a saida para ter apenas 2 casas decimais
    printf("A media aritmetica e: %.2f\n", media); 

    return 0;
}