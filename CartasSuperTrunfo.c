#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char estado1, cidade1, pontosturisticos1[30];
    int populacao1;
    int codigo1;
    double area1, pib1;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Digite Codigo\n");
    scanf("%d", &codigo1);
    printf("Digite Estado:\n");
    scanf("%s", &estado1);
    printf("Digite Cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite Ponto turistico:\n");
    scanf("%d", &pontosturisticos1);
    printf("Digite Populacao:\n");
    scanf("%d", &populacao1);
    printf("Digite Pib:\n");
    scanf("%f", &pib1);
    printf("Digite Area: \n");
    scanf("%f", &area1);
     
    printf("\n--- Carta cadastrada ---\n");
    printf("Codigo: %d\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);
    printf("População: %f\n",populacao1);
    printf("Pib: %f\n ", pib1);
    printf("Area: %f\n", area1);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.

    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
