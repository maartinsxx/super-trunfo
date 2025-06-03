#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as notas e a média
    float nota1, nota2, nota3, media;

    // Solicita ao usuário que digite as três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média aritmética das três notas
    media = (nota1 + nota2 + nota3) / 3;

    // Exibe a média com duas casas decimais
    printf("\nA média das notas é: %.2f\n", media);

    return 0;
}
