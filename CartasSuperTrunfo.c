#include <stdio.h>

int main() {

    // Variáveis
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float percapta;

    // Entrada de dados
    printf("Qual o nome do estado? \n");
    scanf("%c", &estado);

    printf("Qual o código da carta? \n");
    scanf("%s", codigo);

    printf("Qual o nome da cidade? \n");
    scanf("%s", cidade);

    printf("Qual a população da cidade? \n");
    scanf("%i", &populacao);

    printf("Qual a Área Geográfica da cidade (em km²)? \n");
    scanf("%f", &area);

    printf("Qual o PIB da Cidade (Bilhões de reais)? \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos há na cidade? \n");
    scanf("%d", &turisticos);

    // Operadores
    densidade = populacao / area;
    percapta = pib / populacao;

    // Saída de dados
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área (em km²): %.2f\n", area);
    printf("PIB da cidade (Bilhões de reais): %.2f\n", pib);
    printf("Pontos turísticos: %d\n");
    printf("Densidade: %.2f\n", densidade);
    printf("PIB per capta: %.2f", percapta);

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
