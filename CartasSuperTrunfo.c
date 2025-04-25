#include <stdio.h>
#include <string.h>

int main() {

    // Variáveis (CARTA 1)
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
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
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade2;
    float percapta2;
    float superPower2;

    // Entrada de dados (CARTA 1)
    printf("***Carta 1***\n\n");

    printf("Qual o nome do estado? \n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Qual o código da carta? \n");
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = '\0';

    printf("Qual o nome da cidade? \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Qual a população da cidade? \n");
    scanf("%i", &populacao);
    getchar();

    printf("Qual a Área Geográfica da cidade (em km²)? \n");
    scanf("%f", &area);
    getchar();

    printf("Qual o PIB da Cidade (Bilhões de reais)? \n");
    scanf("%f", &pib);
    getchar();

    printf("Quantos pontos turísticos há na cidade? \n");
    scanf("%d", &turisticos);
    getchar();


    // Entrada de dados (CARTA 2)
    printf("***Carta 2***\n\n");

    printf("Qual o nome do estado? \n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Qual o código da carta? \n");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Qual o nome da cidade? \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Qual a população da cidade? \n");
    scanf("%i", &populacao2);
    getchar();

    printf("Qual a Área Geográfica da cidade (em km²)? \n");
    scanf("%f", &area2);
    getchar();

    printf("Qual o PIB da Cidade (Bilhões de reais)? \n");
    scanf("%f", &pib2);
    getchar();

    printf("Quantos pontos turísticos há na cidade? \n");
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
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área (em km²): %.2f\n", area);
    printf("PIB da cidade (Bilhões de reais): %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turisticos);
    printf("Densidade: %.2f\n", densidade);
    printf("PIB per capta: %.2f\n\n", percapta);
    printf("Super Power: %.2f\n\n", superPower);


    // Saída de dados (CARTA 2)
    printf ("***Carta 2***\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área (em km²): %.2f\n", area2);
    printf("PIB da cidade (Bilhões de reais): %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capta: %.2f\n\n", percapta2);
    printf("Super Power2: %.2f\n\n", superPower2);
    

    // Comparação de carta1 com carta2
    if ( populacao  > populacao2) {
        printf("População: A carta %s Venceu!!! \n", codigo);
    } else if (populacao < populacao2){
        printf("População: A carta %s Venceu!!! \n", codigo2);
    } else{
        printf("População: As cartas %s e %s empataram!!! \n", codigo, codigo2); 
    }

    if ( area  > area2) {
        printf("Área: A carta %s Venceu!!! \n", codigo);
    } else if ( area  < area2){
        printf("Área: A carta %s Venceu!!! \n", codigo2);
    } else{
        printf("Área: As cartas %s e %s empataram!!! \n", codigo, codigo2); 
    }

    if ( pib  > pib2) {
        printf("PIB: A carta %s Venceu!!! \n", codigo);
    } else if (pib < pib2){
        printf("PIB: A carta %s Venceu!!! \n", codigo2);
    } else{
        printf("PIB: As cartas %s e %s empataram!!! \n", codigo, codigo2); 
    }

    if ( turisticos  > turisticos2) {
        printf("Pontos Turísticos: A carta %s Venceu!!! \n", codigo);
    } else if (turisticos < turisticos2){
        printf("Pontos Turísticos: A carta %s Venceu!!! \n", codigo2);
    } else{
        printf("Pontos Turísticos: As cartas %s e %s empataram!!! \n", codigo, codigo2); 
    }

    if ( densidade  > densidade2) {
        printf("Densidade: A carta %s Venceu!!! \n", codigo);
    } else if (densidade < densidade2){
        printf("Densidade: A carta %s Venceu!!! \n", codigo2);
    } else{
        printf("Densidade: As cartas %s e %s empataram!!! \n", codigo, codigo2); 
    }

    if ( percapta  > percapta2) {
        printf("PIB per capita: A carta %s Venceu!!! \n", codigo);
    } else if (percapta < percapta2){
        printf("PIB per capita: A carta %s Venceu!!! \n", codigo2);
    } else{
        printf("PIB per capita: As cartas %s e %s empataram!!! \n", codigo, codigo2); 
    }

    if ( superPower  > superPower2) {
        printf("Super Power: A carta %s Venceu!!! \n\n", codigo);
    } else{
        printf("Super Power: A carta %s Venceu!!! \n\n", codigo2);
    }

    return 0;
}