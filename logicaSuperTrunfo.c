#include <stdio.h>

int main(){

    char estado1[20] = "São Paulo";
    char estado2[20] = "Rio de Janeiro";
    char codigoletra1[4] = "A01"; 
    char codigoletra2[4] = "B02";
    char nomeCidade1[20] = "Mauá"; 
    char nomeCidade2[20] = "Macaé";
    int populacao1 = 12325000;
    int populacao2 = 6748000;
    float area1 = 152111;
    float area2 = 120025;
    float pib1 = 69928;
    float pib2 = 30050;
    int pontosTuristicos1 = 50; 
    int pontosTuristicos2 = 30;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    

    printf("Olá, bem-vindos ao jogo Super Trunfo!\n");

   
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // Impressão dos dados da Carta 1
    printf("--- Carta 01 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoletra1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.3f Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // Impressão dos dados da Carta 2
    printf("--- Carta 02 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoletra2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.3f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    
    
    printf("**Comparação de cartas (Atributo: População)**\n");
    printf("Carta 1: %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2: %s: %d\n", nomeCidade2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Carta 1 %s venceu!\n", nomeCidade1);
  } else {
    printf("Carta 2 %s venceu!\n", nomeCidade2);
  }
    printf("**Comparação de cartas (Atributo: Área)**\n");
    printf("Carta 1: %s: %.2f\n", nomeCidade1, area1);
    printf("Carta 2: %s: %.2f\n", nomeCidade2, area2);
    
    if (area1 > area2) {
        printf("Carta 1 %s venceu!\n", nomeCidade1);
  } else {
    printf("Carta 2 %s venceu!\n", nomeCidade2);
  }
    printf("**Comparação de cartas (Atributo: PIB)**\n");
    printf("Carta 1: %s: %.3f\n", nomeCidade1, pib1);
    printf("Carta 2: %s: %.3f\n", nomeCidade2, pib2);
    
    if (pib1 > pib2) {
        printf("Carta 1 %s venceu!\n", nomeCidade1);
  } else {
    printf("Carta 2 %s venceu!\n", nomeCidade2);
  }
    printf("**Comparação de cartas (Atributo: Pontos Turisticos)**\n");
    printf("Carta 1: %s: %d\n", nomeCidade1, pontosTuristicos1);
    printf("Carta 2: %s: %d\n", nomeCidade2, pontosTuristicos2);
    
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 %s venceu!\n", nomeCidade1);
  } else {
    printf("Carta 2 %s venceu!\n", nomeCidade2);
  }
    printf("**Comparação de cartas (Atributo: Densidade Populacional)**\n");
    printf("Carta 1: %s: %.2f\n", nomeCidade1, densidadepopulacional1);
    printf("Carta 2: %s: %.2f\n", nomeCidade2, densidadepopulacional2);
    
    if (densidadepopulacional1 < densidadepopulacional2) {
        printf("Carta 1 %s venceu!\n", nomeCidade1);
  } else {
    printf("Carta 2 %s venceu!\n", nomeCidade2);
  }
    return 0;
}