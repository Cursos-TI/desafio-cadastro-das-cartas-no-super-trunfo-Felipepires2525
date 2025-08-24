#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

        int populacao1;
        float area1;
        float pib1;
        int pontosturisticos1;
        int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //mensagem de boas vindas.
    //Solicitação dos dados da carta 1 para o usuario.
    
    printf("|****************************************|\n"); 
    printf("| BEM-VINDO Cartas Super Trunfo - Paises!|\n");
    printf("|________________________________________|\n");
    printf("|****************************************|\n\n");
    printf("\n--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite a Populacao da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    //solicitação dos dados da carta 2 para o usuario 

    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Digite a Populacao da primeira cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);
    printf("Digite O PIB(em bilhoes):");
    scanf("%f", &pib2);
    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Populacao: %d", populacao1);
    printf("Area %f", area1);
    printf("PIB %f", pib1);
    printf("Pontos Turisticos: %d", pontosturisticos1);


    printf("Populacao: %d", populacao2);
    printf("Area %f", area2);
    printf("PIB %f", pib2);
    printf("Pontos Turisticos: %d", pontosturisticos2);


    return 0;
}
