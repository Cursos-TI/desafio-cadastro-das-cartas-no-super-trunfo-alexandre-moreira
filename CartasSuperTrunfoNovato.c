#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
     char estado1[50];
    char codigoCarta1[20];
    char cidade1[50];
    int populacao1;
    float areaKm1;
    float Pib1;
    int numerosPontosTuristicos1;

    char estado2[50];
    char codigoCarta2[20];
    char cidade2[50];
    int populacao2;
    float areaKm2;
    float Pib2;
    int numerosPontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n========= Cadastro Carta 01 ======\n");

    printf("Digite o estado 01: ");
    scanf("%s", estado1);

    printf("Digite o código da carta 01: ");
    scanf("%s", codigoCarta1);

    printf("Digite a cidade 01: ");
    scanf("%s", cidade1);

    printf("Digite a populacao 01: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2 01: ");
    scanf("%f", &areaKm1);

    printf("Digite o PIB 01: ");
    scanf("%f", &Pib1);

    printf("Digite o numero de pontos turisticos 01: ");
    scanf("%d", &numerosPontosTuristicos1);

    printf("\n========= Fim Cadastro Carta 01 ======\n");

    printf("\n========= Cadastro Carta 02 ==========\n");

    printf("Digite o estado 02: ");
    scanf("%s", estado2);

    printf("Digite o código da carta 02: ");
    scanf("%s", codigoCarta2);

    printf("Digite a cidade 02: ");
    scanf("%s", cidade2);

    printf("Digite a populacao 02: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2 02: ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB 02: ");
    scanf("%f", &Pib2);

    printf("Digite o numero de pontos turisticos 02: ");
    scanf("%d", &numerosPontosTuristicos2);

    printf("\n========= Fim Cadastro Carta 02 ======\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n========= Impressao Carta 01 =========\n");

    printf("\nEstado 01: %s \n", estado1);
    printf("Código carta 01: %s \n", codigoCarta1);
    printf("Cidade 01: %s \n", cidade1);
    printf("Populacao 01: %d \n", populacao1);
    printf("Area 01: %.2f \n", areaKm1);
    printf("PIB 01: %.2f \n", Pib1);
    printf("Numero de pontos turisticos 01: %d \n", numerosPontosTuristicos1);

    printf("\n========= Fim Impressao Carta 01 ========\n");

    printf("\n========= Impressao Carta 02 =============\n");

    printf("\nEstado 02: %s \n", estado2);
    printf("Código carta 02: %s \n", codigoCarta2);
    printf("Cidade 02: %s \n", cidade2);
    printf("Populacao 02: %d \n", populacao2);
    printf("Area 02: %.2f \n", areaKm2);
    printf("PIB 02: %.2f \n", Pib2);
    printf("Numero de pontos turisticos 02: %d \n", numerosPontosTuristicos2);

    printf("\n========= Fim Impressao Carta 02 ======\n");

    return 0;
}
