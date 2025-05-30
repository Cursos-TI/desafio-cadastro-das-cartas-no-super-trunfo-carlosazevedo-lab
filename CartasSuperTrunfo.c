#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados da cidade
    char estado1[30], cidade1[30], pontosturisticos1[100];
    int populacao1;
    int codigo1;
    double area1, pib1;

    // Cadastro
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo1);

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite os pontos turísticos (sem espaços ou use fgets): ");
    scanf("%s", pontosturisticos1); // Ou use fgets() se quiser permitir espaços

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Digite a área (em km²): ");
    scanf("%lf", &area1);

    // Exibição
    printf("\n--- Carta Cadastrada ---\n");
    printf("Código: %d\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Pontos Turísticos: %s\n", pontosturisticos1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2lf bilhões\n", pib1);
    printf("Área: %.2lf km²\n", area1);

    return 0;
}