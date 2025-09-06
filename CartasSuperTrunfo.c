#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Exemplo: A01, A02, B03, etc.
    //nesta etapa estou adicionando o estado, codigo,nome da cidade, char  
        char estado1;
        char codigo1[4];
        char nomeCidade1[50];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int pontosturisticos1;
        float densidade1;
        float pibpercapita1;
        float superPoder1;

        //variaveis da carta 2

        char estado2;
        char codigo2[4];
        char nomeCidade2[50];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;
        float dencidade2;
        float pibpercapita2;
        float superPoder2;

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

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao da primeira cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    //solicitação dos dados da carta 2 para o usuario 

    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao da segunda cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite O PIB(em bilhoes):");
    scanf("%f", &pib2);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    densidade1 = (float)populacao1 / area1;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area %f\n", area1);
    printf("PIB %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", (float)populacao1/area1);  //Calcular a Densidade Populacional dividindo popuação/area 
    printf("PIB per Capita: %.2f\n", (float)pib1/populacao1);  //Calcular o pib per capita dividindo pib/população

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area %f\n", area2);
    printf("PIB %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", (float)populacao2/area2);
    printf("PIB per Capita: %.2f\n", (float)pib2/populacao2);

    return 0;
}