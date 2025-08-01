#include <stdio.h>
#include <string.h>

int main()
{
    // ====== Declarção da Variaveis ==========//
    char letracidade1, letracidade2;
    char nomecidade1[20], nomecidade2[20];
    char codigodacarta1[4], codigodacarta2[4];
    int populacaoCidade1, populacaoCidade2, nptcd1, nptcd2;
    float areacd1, areacd2, pibcd1, pibcd2;
    float densidadepopulacionalcd1, densidadepopulacionalcd2;
    float pibpercaptadc1, pibpercaptadc2;

    // ===== CARTA 1 =====
    printf("Entrada das Informações da carta 1:\n");

    printf("Informe uma letra para identificar o estado:\n");
    scanf(" %c", &letracidade1);

    printf("Informe o código:\n");
    scanf("%3s", codigodacarta1);

    // Limpa buffer antes do fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    printf("Informe o nome da cidade:\n");
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    if (nomecidade1[strlen(nomecidade1) - 1] == '\n')
    {
        nomecidade1[strlen(nomecidade1) - 1] = '\0';
    }

    printf("Informe a população da cidade:\n");
    scanf("%d", &populacaoCidade1);

    printf("Informe a área da cidade:\n");
    scanf("%f", &areacd1);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &pibcd1);

    printf("Informe o número de pontos turísticos da cidade:\n");
    scanf("%d", &nptcd1);

    // ===== CARTA 2 =====
    printf("\nEntrada das Informações da carta 2:\n");

    printf("Informe uma letra para identificar o estado:\n");
    scanf(" %c", &letracidade2);

    printf("Informe o código:\n");
    scanf("%3s", codigodacarta2);

    // Limpa buffer antes do fgets
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    printf("Informe o nome da cidade:\n");
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    if (nomecidade2[strlen(nomecidade2) - 1] == '\n')
    {
        nomecidade2[strlen(nomecidade2) - 1] = '\0';
    }

    printf("Informe a população da cidade:\n");
    scanf("%d", &populacaoCidade2);

    printf("Informe a área da cidade:\n");
    scanf("%f", &areacd2);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &pibcd2);

    printf("Informe o número de pontos turísticos da cidade:\n");
    scanf("%d", &nptcd2);

    // ==== Realiza os calulos ========
    densidadepopulacionalcd1 = (float)populacaoCidade1 / areacd1;
    densidadepopulacionalcd2 = (float)populacaoCidade2 / areacd2;
    pibpercaptadc1 = (float)pibcd1 / populacaoCidade1;
    pibpercaptadc2 = (float)pibcd2 / populacaoCidade2;

    // ===== IMPRESSÃO =====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", letracidade1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome: %s\n", nomecidade1);
    printf("População: %d\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areacd1);
    printf("PIB: %.2f bilhões de reais\n", pibcd1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacionalcd1);
    printf("PIB per Capita: %.2f reais\n", pibpercaptadc1);
    printf("Número de Pontos Turísticos: %d\n", nptcd1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", letracidade2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome: %s\n", nomecidade2);
    printf("População: %d\n", populacaoCidade2);
    printf("Área: %.2f km²\n:", areacd2);
    printf("PIB: %.2f bilhões de reais\n", pibcd2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacionalcd2);
    printf("PIB per Capita: %.2f reais\n", pibpercaptadc2);
    printf("Número de Pontos Turísticos: %d\n", nptcd2);

    return 0;
}
