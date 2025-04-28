#include <stdio.h>
#include <string.h>

int main() {

    // Variáveis (CARTA 1)
    char estado[20];
    char codigo[20];
    char cidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float percapta;
    float superPower;

    // Variáveis (CARTA 2)
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade2;
    float percapta2;
    float superPower2;

    // Entrada de dados (CARTA 1)
    printf("***Carta 1***\n\n");

    printf("Qual o estado (UF)? \n");
    scanf("%s", &estado);
    getchar();

    printf("Qual o cógigo da carta? \n");
    scanf("%s", &codigo);
    getchar();

    printf("Qual o nome da cidade? \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Qual a população da cidade? \n");
    scanf("%lu", &populacao);
    getchar();

    printf("Qual a Área Geográfica da cidade (em km²)? \n");
    scanf("%f", &area);
    getchar();

    printf("Qual o PIB da Cidade (Bilhões de reais)? \n");
    scanf("%f", &pib);
    getchar();

    printf("Quantos pontos turísticos há na cidade? \n\n");
    scanf("%d", &turisticos);
    getchar();


    // Entrada de dados (CARTA 2)
    printf("***Carta 2***\n\n");

    printf("Qual o estado (UF)? \n");
    scanf("%s", &estado2);
    getchar();

    printf("Qual o cógigo da carta? \n");
    scanf("%s", &codigo2);
    getchar();

    printf("Qual o nome da cidade? \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Qual a população da cidade? \n");
    scanf("%lu", &populacao2);
    getchar();

    printf("Qual a Área Geográfica da cidade (em km²)? \n");
    scanf("%f", &area2);
    getchar();

    printf("Qual o PIB da Cidade (Bilhões de reais)? \n");
    scanf("%f", &pib2);
    getchar();

    printf("Quantos pontos turísticos há na cidade? \n\n");
    scanf("%d", &turisticos2);
    getchar();


    // Operadores (CARTA 1)
    densidade = populacao / area;
    percapta = pib / populacao;
    superPower = populacao + area + pib + turisticos;


    // Operadores (CARTA 2)
    densidade2 = populacao2 / area2;
    percapta2 = pib2 / populacao2;
    superPower2 = populacao2 + area2 + pib2 + turisticos2;


    // Saída de dados (CARTA 1)
    printf ("***Carta 1***\n\n");
    printf("Código da carta: %s\n", codigo);
    printf("Cidade (UF): %s (%s)\n", cidade, estado);
    printf("População: %lu\n", populacao);
    printf("Área (em km²): %.2f\n", area);
    printf("PIB da cidade (Bilhões de reais): %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turisticos);
    printf("Densidade: %.2f\n", densidade);
    printf("PIB per capta: %.2f\n\n", percapta);
    printf("Super Power: %.2f\n\n", superPower);


    // Saída de dados (CARTA 2)
    printf ("***Carta 2***\n\n");
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade (UF): %s (%s)\n", cidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área (em km²): %.2f\n", area2);
    printf("PIB da cidade (Bilhões de reais): %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capta: %.2f\n\n", percapta2);
    printf("Super Power2: %.2f\n\n", superPower2);
    

    // Comparação de carta1 com carta2
    if ( populacao  > populacao2) {
        printf("População: Carta 1 (%s %s) venceu!\n", cidade, estado);
    } else if (populacao < populacao2){
        printf("População: Carta 2 (%s %s) venceu!\n", cidade2, estado2);
    } else{
        printf("População: A carta 1 (%s %s) e a carta 2 (%s %s) empataram!\n", cidade, estado, cidade2, estado2);
    }

    if ( area  > area2) {
        printf("Área: Carta 1 (%s %s) venceu!\n", cidade, estado);
    } else if (area < area2){
        printf("Área: Carta 2 (%s %s) venceu!\n", cidade2, estado2);
    } else{
        printf("Área: A carta 1 (%s %s) e a carta 2 (%s %s) empataram!\n", cidade, estado, cidade2, estado2);
    }

    if ( pib  > pib2) {
        printf("PIB: Carta 1 (%s %s) venceu!\n", cidade, estado);
    } else if (pib < pib2){
        printf("PIB: Carta 2 (%s %s) venceu!\n", cidade2, estado2);
    } else{
        printf("PIB: A carta 1 (%s %s) e a carta 2 (%s %s) empataram!\n", cidade, estado, cidade2, estado2);
    }

    if ( turisticos  > turisticos2) {
        printf("Pontos Turísticos: Carta 1 (%s %s) venceu!\n", cidade, estado);
    } else if (turisticos2 < turisticos2){
        printf("Pontos Turísticos: Carta 2 (%s %s) venceu!\n", cidade2, estado2);
    } else{
        printf("Pontos Turísticos: A carta 1 (%s %s) e a carta 2 (%s %s) empataram!\n", cidade, estado, cidade2, estado2);
    }

    if ( densidade  < densidade2) {
        printf("Densidade: Carta 1 (%s %s) venceu!\n", cidade, estado);
    } else if (densidade > densidade2){
        printf("Densidade: Carta 2 (%s %s) venceu!\n", cidade2, estado2);
    } else{
        printf("Densidade: A carta 1 (%s %s) e a carta 2 (%s %s) empataram!\n", cidade, estado, cidade2, estado2);
    }

    if ( percapta  > percapta2) {
        printf("PIB per capita: Carta 1 (%s %s) venceu!\n", cidade, estado);
    } else if (percapta < percapta2){
        printf("PIB per capita: Carta 2 (%s %s) venceu!\n", cidade2, estado2);
    } else{
        printf("PIB per capita: A carta 1 (%s %s) e a carta 2 (%s %s) empataram!\n", cidade, estado, cidade2, estado2);
    }

    if ( superPower  > superPower2) {
        printf("Super Power: Carta 1 (%s %s) venceu!\n", cidade, estado);
    } else if (superPower < superPower2){
        printf("Super Power: Carta 2 (%s %s) venceu!\n", cidade2, estado2);
    } else{
        printf("Super Power: A carta 1 (%s %s) e a carta 2 (%s %s) empataram!\n", cidade, estado, cidade2, estado2);
    }

    return 0;
}