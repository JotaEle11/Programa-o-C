#include <stdio.h>

int main (){

// Informações e funções CARTA 1

     char Estado = 'A';
     char Código[5] = "A01";
     char Cidade[20] = "Recife";
     int População = 3700000; // População total
     float Área = 98.312; // Área em km²
     float PIB = 135000000000.00; // PIB bruto
     int Pontos = 37; // Pontos turísticos
     float Densidade = População / Área; // Densidade demográfica
     float Capita = PIB / População; // PIB per capita
     float SuperPoder = (float) População + Área + PIB + Pontos + (1 / Densidade) + Capita;

// Informações e funções CARTA 2

     char Estado2 = 'B';
     char Código2[5] = "B01";
     char Cidade2[30] = "Salvador";
     int População2 = 2417678; // População total
     float Área2 = 693.44; // Área em km²
     float PIB2 = 76699000000.00; // PIB
     int Pontos2 = 43; // Pontos turísticos
     float Densidade2 = População2 / Área2; // Densidade demográfica
     float Capita2 = PIB2 / População2; // PIB per capita
     float SuperPoder2 = (float) População2 + Área2 + PIB2 + Pontos2 + (1 / Densidade2) + Capita2;     

// Variaveis para menus e funções de resultado

     int menu1, menu2, atributo1, atributo2, resultado1, resultado2;

// Menu do jogo

     printf("ººº Super Trunfo Nordeste ººº\n");
     printf("\n1. Iniciar jogo\n");
     printf("2. Regras\n");
     printf("3. Sair do jogo\n");
     printf("Escolha a opção que deseja:  ");
     scanf("%d", &menu1);

// 1º Menu interativo (Início do game)

     switch (menu1){

          case 1:
             // 2º Menu interativo (Opções de cartas)
             printf("\nEscolha com qual capital você quer jogar!\n");
             printf("1. Recife\n");
             printf("2. Salvador\n");
             printf("Escolha:  ");
             scanf("%d", &menu2);

             // Início do jogo

             switch (menu2){

               case 1: // Menu do atributo 1 (Recife)
                  printf("\nBem-vindo, você escolheu Recife! Ecolha o primeiro atributo:\n");
                  printf("1. População total\n");
                  printf("2. Área\n");
                  printf("3. PIB\n");
                  printf("4. Pontos turísticos\n");
                  printf("5. Densidade demográfica\n");
                  printf("6. PIB per capita\n");
                  printf("7. Super poder\n");
                  printf("Escolha:  ");
                  scanf("%d", &atributo1);

                  // Comparação de atributos 1 (Recife)

                  switch (atributo1){

                    case 1: // População
                       printf("\nSeu primeiro atributo é População!\n");
                       resultado1 = População > População2 ? 1 : 0;
                       break;
                    case 2: // Área
                       printf("\nSeu primeiro atributo é Área!\n");
                       resultado1 = Área > Área2 ? 1 : 0;
                       break;
                    case 3: // PIB
                       printf("\nSeu primeiro atributo é PIB!\n");
                       resultado1 = PIB > PIB2 ? 1 : 0;
                       break;
                    case 4: // Pontos turísticos
                       printf("\nSeu primeiro atributo é Pontos turísticos!\n");
                       resultado1 = Pontos > Pontos2 ? 1 : 0;
                       break;
                    case 5: // Densidade demográfica
                       printf("\nSeu primeiro atributo é Densidade demográfica!\n");
                       resultado1 = Densidade > Densidade2 ? 0 : 1;
                       break;
                    case 6: // PIB per capita
                       printf("\nSeu primeiro atributo é PIB per capita!\n");
                       resultado1 = Capita > Capita2 ? 1 : 0;
                       break;
                    case 7: // Super poder
                       printf("\nSeu primeiro atributo é Super poder!\n");
                       resultado1 = SuperPoder > SuperPoder2 ? 1 : 0;
                       break;
                    default:
                       printf("\nOpção inválida, tente novamente!\n");
                       break;
                  }

                  // Menu do atributos 2 (Recife)

                  printf("\nEcolha o segundo atributo!\n");
                  printf("ATENÇÃO: Você deve escolher um atributo diferente do primeiro!\n");
                  printf("\n1. População total\n");
                  printf("2. Área\n");
                  printf("3. PIB\n");
                  printf("4. Pontos turísticos\n");
                  printf("5. Densidade demográfica\n");
                  printf("6. PIB per capita\n");
                  printf("7. Super poder\n");
                  printf("Escolha:  ");
                  scanf("%d", &atributo2);

                  // Comparação do atributo 2 (Recife)

                  if (atributo1 == atributo2){
                    printf("\nVocê escolheu o mesmo atributo! Volte do inicio e tente novamente!\n");
                    return 0;
                  } else {
                    switch (atributo2){

                         case 1: // População
                       printf("\nSeu segundo atributo é População!\n");
                       resultado1 = População > População2 ? 1 : 0;
                       break;
                    case 2: // Área
                       printf("\nSeu segundo atributo é Área!\n");
                       resultado1 = Área > Área2 ? 1 : 0;
                       break;
                    case 3: // PIB
                       printf("\nSeu segundo atributo é PIB!\n");
                       resultado1 = PIB > PIB2 ? 1 : 0;
                       break;
                    case 4: // Pontos turísticos
                       printf("\nSeu segundo atributo é Pontos turísticos!\n");
                       resultado1 = Pontos > Pontos2 ? 1 : 0;
                       break;
                    case 5: // Densidade demográfica
                       printf("\nSeu segundo atributo é Densidade demográfica!\n");
                       resultado1 = Densidade > Densidade2 ? 0 : 1;
                       break;
                    case 6: // PIB per capita
                       printf("\nSeu segundo atributo é PIB per capita!\n");
                       resultado1 = Capita > Capita2 ? 1 : 0;
                       break;
                    case 7: // Super poder
                       printf("\nSeu segundo atributo é Super poder!\n");
                       resultado1 = SuperPoder > SuperPoder2 ? 1 : 0;
                       break;
                    default:
                       printf("\nOpção inválida, tente novamente!\n");
                       break;
                    }
                  }

                  // Lógica do resultado da comparação dos atributos (Recife)

          if (resultado1 && resultado2){
               printf("\nParabéns, você venceu!!!\n");
          } else if (resultado1 != resultado2){
               printf("\nO jogo empatou!\n");
          } else {
               printf("\nInfelizmente, você perdeu...\n");
          }       
                  break;

               case 2: // Salvador
                  printf("\nBem-vindo, você escolheu Salvador! Ecolha o primeiro atributo:\n");
                  printf("1. População total\n");
                  printf("2. Área\n");
                  printf("3. PIB\n");
                  printf("4. Pontos turísticos\n");
                  printf("5. Densidade demográfica\n");
                  printf("6. PIB per capita\n");
                  printf("7. Super poder\n");
                  printf("Escolha:  ");
                  scanf("%d", &atributo1);

                  // comparação de atributos 1 (Salvador)

                  switch (atributo1){

                    case 1:
                       printf("\nSeu primeiro atributo é População!\n");
                       resultado1 = População2 > População ? 1 : 0;
                       break;
                    case 2: // Área
                       printf("\nSeu primeiro atributo é Área!\n");
                       resultado1 = Área2 > Área ? 1 : 0;
                       break;
                    case 3: // PIB
                       printf("\nSeu primeiro atributo é PIB!\n");
                       resultado1 = PIB2 > PIB ? 1 : 0;
                       break;
                    case 4: // Pontos turísticos
                       printf("\nSeu primeiro atributo é Pontos turísticos!\n");
                       resultado1 = Pontos2 > Pontos ? 1 : 0;
                       break;
                    case 5: // Densidade demográfica
                       printf("\nSeu primeiro atributo é Densidade demográfica!\n");
                       resultado1 = Densidade2 > Densidade ? 0 : 1;
                       break;
                    case 6: // PIB per capita
                       printf("\nSeu primeiro atributo é PIB per capita!\n");
                       resultado1 = Capita2 > Capita ? 1 : 0;
                       break;
                    case 7: // Super poder
                       printf("\nSeu primeiro atributo é Super poder!\n");
                       resultado1 = SuperPoder2 > SuperPoder ? 1 : 0;
                       break;
                    default:
                       printf("\nOpção inválida, tente novamente!\n");
                       break;
                  }

                  // Menu do atributos 2 (Salvador)

                  printf("\nEcolha o segundo atributo!\n");
                  printf("ATENÇÃO: Você deve escolher um atributo diferente do primeiro!\n");
                  printf("\n1. População total\n");
                  printf("2. Área\n");
                  printf("3. PIB\n");
                  printf("4. Pontos turísticos\n");
                  printf("5. Densidade demográfica\n");
                  printf("6. PIB per capita\n");
                  printf("7. Super poder\n");
                  printf("Escolha:  ");
                  scanf("%d", &atributo2);

                  // Comparação de atributos 2 (Salvador)

                  if (atributo1 == atributo2){
                    printf("\nVocê escolheu o mesmo atributo! Volte do inicio e tente novamente!\n");
                    return 0;
                  } else {
                    switch (atributo2){

                         case 1:
                       printf("\nSeu segundo atributo é População!\n");
                       resultado1 = População2 > População ? 1 : 0;
                       break;
                    case 2: // Área
                       printf("\nSeu segundo atributo é Área!\n");
                       resultado1 = Área2 > Área ? 1 : 0;
                       break;
                    case 3: // PIB
                       printf("\nSeu segundo atributo é PIB!\n");
                       resultado1 = PIB2 > PIB ? 1 : 0;
                       break;
                    case 4: // Pontos turísticos
                       printf("\nSeu segundo atributo é Pontos turísticos!\n");
                       resultado1 = Pontos2 > Pontos ? 1 : 0;
                       break;
                    case 5: // Densidade demográfica
                       printf("\nSeu segundo atributo é Densidade demográfica!\n");
                       resultado1 = Densidade2 > Densidade ? 0 : 1;
                       break;
                    case 6: // PIB per capita
                       printf("\nSeu segundo atributo é PIB per capita!\n");
                       resultado1 = Capita2 > Capita ? 1 : 0;
                       break;
                    case 7: // Super poder
                       printf("\nSeu segundo atributo é Super poder!\n");
                       resultado1 = SuperPoder2 > SuperPoder ? 1 : 0;
                       break;
                    default:
                       printf("\nOpção inválida, tente novamente!\n");
                       break;
                    }
                  }

                  // Lógica do resultado das comparações dos atributos (Salvador)

          if (resultado1 && resultado2){
               printf("\nParabéns, você venceu!!!\n");
          } else if (resultado1 != resultado2){
               printf("\nO jogo empatou!\n");
          } else {
               printf("\nInfelizmente, você perdeu...\n");
          }   
                  break;
               default:
                  printf("Opção indisponível, tente novamente!\n");
                  break;
               }

             break;
          case 2:
             //Regras do jogo
             printf("\nBem-Vindo ao Super Trunfo Nordeste: \n");
             printf("Neste jogo, há duas cartas representando capitais do Nordeste: Recife e Salvador.\n");
             printf("No início da partida, o jogador deverá escolher com qual carta deseja jogar.\n");
             printf("Em seguida, deverá selecionar o primeiro atributo a ser comparado com a carta adversária.\n");
             printf("Após isso, o jogador deverá escolher um segundo atributo para comparação,\n");
             printf("sendo obrigatório que este seja diferente do primeiro atributo escolhido.\n");
             printf("Depois de definidas as duas opções, os atributos selecionados serão comparados com os da carta adversária.\n");
             printf("\nCritérios de vitória!!!\n");
             printf("- O jogador vence se ganhar nos dois atributos escolhidos;\n");
             printf("- O jogo termina em empate se cada jogador vencer em apenas um atributo;\n");
             printf("- O jogador perde se for derrotado nos dois atributos.\n");
             printf("\nInicie o jogo novamente e BOA SORTE!\n");
             break;
          case 3:
             //Opção de fechamento do jogo
             printf("Saindo...");
             break;
          default:
             //Caso o usuário digite um número inexistente no menu
             printf("Opção indisponível, tente novamente!");
             break;   
     }

return 0;

}
