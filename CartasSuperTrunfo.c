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

      float DensidadePopulacaoC01;// Variável para calcular a densidade populacional
      float DensidadePopulacaoC02;
      float PibPercapita01;//Variavelpara calcular pib percapita
      float PibPercapita02;
  // Área para entrada de dados

      printf("Ditide o Estado Carta 1: \n");
      scanf("%1s", EstadoCarta1);

      printf("Ditide o Estado Carta 2: \n");
      scanf("%1s", EstadoCarta2);

      printf("Ditide o Codigo  Carta 1: \n");
      scanf("%s", CodigoCarta1);

      printf("Ditide o Codigo  Carta 2: \n");
      scanf("%s", CodigoCarta2);

      printf("Ditide o Nome  Da Cidade Carta 1: \n");
      scanf("%s", NomeCidadecarta1);

      printf("Ditide o Nome  Da Cidade Carta 2: \n");
      scanf("%s", NomeCidadecarta2);

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

      printf("Ditide Numero Ponto Turistico Carta 1: \n");
      scanf("%d", &NumPontoTuristicoCarta1);

      printf("Ditide Numero Ponto Turistico Carta 2: \n");
      scanf("%d", &NumPontoTuristicoCarta2);





  // Área para exibição dos dados da cidade
      
  
      
      printf("Estado da Carta 1: %1s \n" , EstadoCarta1);

      printf("Estado da Carta 1: %1s \n" , EstadoCarta2);

      printf("Código da Carta 1: %1s \n" , CodigoCarta1);
      
      printf("Código da Carta 2: %1s \n" , CodigoCarta2);

      printf("Nome  Da Cidade Carta 1: %s \n" , &NomeCidadecarta1);

      printf("Nome  Da Cidade Carta 2: %s \n" , &NomeCidadecarta2);


      printf("Poplação Carta 1: %d \n" , PopulacaoCarta1);
      
      printf("Poplação Carta 2: %d \n" , PopulacaoCarta2);

      printf("Área Teritorial Carta 1: %.2f \n", AreaCarta1);

      printf("Área Teritorial Carta 2: %.2f \n", AreaCarta2);

      printf("PIB Carta 1: %.2f \n" , pibCarta1);

      printf("PIB Carta 1: %.2f \n" , pibCarta2);

      printf("Numero Ponto Turistico Carta 1: %d \n" , NumPontoTuristicoCarta1);

      printf("Numero Ponto Turistico Carta 2: %d \n" , NumPontoTuristicoCarta2);


      DensidadePopulacaoC01 = (PopulacaoCarta1 / AreaCarta1);
      DensidadePopulacaoC02 = (PopulacaoCarta2 / AreaCarta2);
      printf("A densidade Pupulacional Carta1 é: %f \n", DensidadePopulacaoC01);   
      printf("A densidade Pupulacional Carta2 é: %f \n", DensidadePopulacaoC02);

      PibPercapita01 = ( pibCarta1/PopulacaoCarta1);
      PibPercapita02 = ( pibCarta2/PopulacaoCarta2);
      printf("O PIB Percapita Carta1 é: %.2f \n", PibPercapita01);   
      printf("O PIB Percapita Carta2 é: %.2f \n", PibPercapita02);


      printf(" FIM ");     

     

return 0;
} 