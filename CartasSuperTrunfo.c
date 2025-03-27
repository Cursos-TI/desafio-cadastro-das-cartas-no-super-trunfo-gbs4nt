#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("---------Carta 1-------\n");
    char estado1[20],estado2[20], codigo_carta1[5],codigo_carta2[5], nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2,pontos_turisticos1,pontos_turisticos2;
    float area1, pib1,area2, pib2;
    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]",&nome_cidade1);

    printf("Diga a populacao: \n");
    scanf("%i", &populacao1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turisticos: \n");
    scanf("%i", &pontos_turisticos1);

    
    printf("-------Carta2---------\n");
    
    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado2);
    
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Diga a populacao: \n");
    scanf("%i", &populacao2);
    
    printf("Digite a area: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Qual a quantidade de pontos turisticos: \n");
    scanf("%i", &pontos_turisticos2);
    
    printf("CARTA 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código da carta: %s \n ", codigo_carta1);
    printf("Cidade: %s \n", nome_cidade1);
    printf("Populacao da area: %i \n", populacao1);
    printf("Area: %f km² \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turisticos: %i \n", pontos_turisticos1);

    printf("CARTA 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s \n ", codigo_carta2);
    printf("Cidade: %s \n", nome_cidade2);
    printf("Populacao da area: %i \n", populacao2);
    printf("Area: %f km² \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turisticos: %i \n", pontos_turisticos2);

  
   

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
