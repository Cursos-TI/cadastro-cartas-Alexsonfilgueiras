#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
      char  EstadoCarta2[2];
      char  EstadoCarta1[2];
      char  CodigoCarta1[4], CodigoCarta2[4]; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)//
      char  NomeCidadecarta1[20], NomeCidadecarta2[20];  //O nome da cidade. Tipo: char[] (string)// 
      int   PopulacaoCarta1, PopulacaoCarta2; //O número de habitantes da cidade. Tipo: int// 
      float AreaCarta1, AreaCarta2; //A área da cidade em quilômetros quadrados. Tipo: float// 
      float pibCarta1, pibCarta2; //O Produto Interno Bruto da cidade. Tipo: float//
      int   NumPontoTuristicoCarta1, NumPontoTuristicoCarta2; //A quantidade de pontos turísticos na cidade. Tipo: int//
  // Área para entrada de dados

      printf("Ditide o Estado Carta 1: \n");
      scanf("%1s", EstadoCarta1);

      printf("Ditide o Estado Carta 2: \n");
      scanf("%1s", EstadoCarta2);

      printf("Ditide o Codigo  Carta 1: \n");
      scanf("%s", CodigoCarta1);

      printf("Ditide o Codigo  Carta 2: \n");
      scanf("%s", CodigoCarta2);

      printf("Ditide a População Carta 1: \n");
      scanf("%d", &PopulacaoCarta1);

      printf("Ditide a População Carta 2: \n");
      scanf("%d", &PopulacaoCarta2);

      printf("Ditide a Área Teritorial Carta 1: \n");
      scanf("%f", &AreaCarta1);

      printf("Ditide a Área Teritorial Carta 2: \n");
      scanf("%f", &AreaCarta2);

      printf("Ditide o PIB Carta 1: \n");
      scanf("%f", &pibCarta1);

      printf("Ditide o PIB Carta 2: \n");
      scanf("%f", &pibCarta2);



  // Área para exibição dos dados da cidade
      
  
      
      printf("Estado da Carta 1: %1s \n" , EstadoCarta1);

      printf("Estado da Carta 1: %1s \n" , EstadoCarta2);

      printf("Código da Carta 1: %1s \n" , CodigoCarta1);
      
      printf("Código da Carta 2: %1s \n" , CodigoCarta2);

      printf("Poplação Carta 1: %d \n" , PopulacaoCarta1);
      
      printf("Poplação Carta 2: %d \n" , PopulacaoCarta2);

      printf("Área Teritorial Carta 1: %.2f \n", AreaCarta1);

      printf("Área Teritorial Carta 2: %.2f \n", AreaCarta2);

      printf("PIB Carta 1: %.2f \n" , pibCarta1);

      printf("PIB Carta 1: %.2f \n" , pibCarta2);

      printf(" FIM ");
      
      
      
      

     

return 0;
} 