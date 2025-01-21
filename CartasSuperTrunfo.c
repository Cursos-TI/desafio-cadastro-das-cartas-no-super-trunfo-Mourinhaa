#include <stdio.h>
int main(){
    char cidade1 [4] = "A01";  //variável para o nome da primeira cidade.
    double populacao1 = 742.452;  //variável para a população da primeira cidade.
    double area1 = 532.506;  //variável para o tamanho da primeira cidade.
    float pib1 = 5.4;  //variável para o pib da primeira cidade.
    char turismo1 = '9';  //variável para os pontos turisticos da primeira cidade.

    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("População: \n");
    scanf("%f", &populacao1);
    printf("Área: \n");
    scanf("%f", &area1);
    printf("PIB da cidade: \n" );
    scanf("%f", &pib1);
    printf("Pontos Turisticos: \n");
    scanf("%s", &turismo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %.3f \n", populacao1);
    printf("Area: %.3f \n", area1);
    printf("PIB: %2.f \n", pib1);
    printf("Números de Pontos Turísticos: %c \n", turismo1);









}