   #include <stdio.h>
    int main(){
        //Variáveis//
    char  codigo1[5], cidade1[20], estado1[5], codigo2[5], cidade2[20], estado2[5];
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, area2, pib2;

    //____________________CARTA 1____________________________//

    printf("Carta 1!\n");

    //ESTADO
    printf("Digite o estado (A-H):");
    scanf("%s", estado1);
    //Codigo da cidade
    printf("Digite o codigo:");
    scanf("%s", codigo1);
    //Nome da cidade
    printf("Digite o nome da cidade:");
    scanf("%s", cidade1);
    //População
    printf("Digite a populacao:");
    scanf("%d", &populacao1);
    //Área
    printf("Digite a area:");
    scanf("%f", &area1);
    //PIB
    printf("Digite o PIB:");
    scanf("%f", &pib1);
    //Pontos turísticos
    printf("Digite os pontos turisticos:");
    scanf("%d", &pontos1);

    printf("Carta 1!\n");   
    printf("ESTADO: %s\n", estado1);
    printf("CODIGO DA CIDADE:%s\n", codigo1);
    printf("CIDADE:%s\n", cidade1);
    printf("POPULACAO:%d\n", populacao1);
    printf("AREA:%.2f\n", area1);
    printf("PIB:%.2f\n", pib1);
    printf("PONTOS TURISTICOS:%d\n", pontos1);

    //_________________CARTA 2________________//

    printf("Carta 2!\n");

    printf("Digite o Estado (A-H):");
    scanf("%s", estado2);

    printf("Digite o codigo:");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:");
    scanf("%s", cidade2);

    printf("Digite a populacao:");
    scanf("%d", &populacao2);

    printf("Digite a Area:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos:");
    scanf("%d", &pontos2);

    printf("Carta 2!\n");   
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO DA CIDADE:%s\n", codigo2);
    printf("CIDADE:%s\n", cidade2);
    printf("POPULACAO:%d\n", populacao2);
    printf("AREA:%.2f\n", area2);
    printf("PIB:%.2f\n", pib2);
    printf("PONTOS TURISTICOS:%d\n", pontos2);


    return 0;
    }
