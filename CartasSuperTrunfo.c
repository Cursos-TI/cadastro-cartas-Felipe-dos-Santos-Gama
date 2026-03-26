#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
char carta1[20], carta2, codigo1[20], codigo2[20], nome_de_cidade1[20], nome_de_cidade2[20];
char estado1[20], estado2[20];
int populaçao1, populaçao2, pontos_tur1, pontos_tur2;
float area1, area2, pib1, pib2;

printf("----- Carta 1 ----- \n", &carta1);

printf("Estado: ");
scanf("%s", &estado1);

printf("Código: ");
scanf("%s", &codigo1);

printf("Nome da cidade: ");
scanf("%s", &nome_de_cidade1);

printf("População: ");
scanf("%d", &populaçao1);

printf("Área: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos_tur1);

printf("----- Carta 2 ----- \n");
printf("Estado: ");
scanf("%s", &estado2);

printf("Código: ");
scanf("%s", &codigo2);

printf("Nome da cidade: ");
scanf("%s", &nome_de_cidade2);

printf("População: ");
scanf("%d", &populaçao2);

printf("Área: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos_tur2);

printf("\n");

printf("Carta 1 \n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da cidade: %s\n", nome_de_cidade1);
printf("População: %d\n", populaçao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", pontos_tur1);

printf("Carta 2 \n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da cidade: %s\n", nome_de_cidade2);
printf("População: %d\n", populaçao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de pontos turísticos: %d\n", pontos_tur2);

return 0;
}
