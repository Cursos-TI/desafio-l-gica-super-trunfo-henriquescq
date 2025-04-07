#include <stdio.h> // Biblioteca de IO
#include <stdlib.h> // Controle de processos: Usar system ou exit (interação com SO)
#include <Windows.h> // Biblioteca funções do Windows

int main () {

    char country_letter1 [5], code_letter1 [10], country_name1 [50], country_letter2 [5], code_letter2 [10], country_name2 [50]; // Letra do Pais, código das cartas e nome do Pais.
    int tourist_attractions1, tourist_attractions2, opcao, comp_atrib1, comp_atrib2, game; // Pontos turísticos, Opção de escolha menu interativo, Escolha e Comparação de atributo.
    unsigned long int populat1, populat2; // População
    unsigned long long int area1, PIB1, area2, PIB2; // Área, PIB1 (Produto interno bruto)
    double population_density1, PIB_per_capita1, population_density2, PIB_per_capita2; //Densidade Populacional, PIB1 por capital
    
    /*Entrada dos dados na carta 1*/

    printf ("-------JOGO DO SUPER TRUNFO-------\n"
            "1. Como funciona?\n"
            "2. Regras.\n"
            "3. Iniciar Jogo.\n"
            "4. Sair.\n"
            "Escolha um das opções: ");
    scanf ("%d", &game);

    switch (game)
    {
    case 1:
            printf ("\nComo o jogo funciona\n"
                    "\nO jogo funciona entre duas cartas, onde cada carta terá dois atributos a serem comparados,\n"
                    "logo após serem comparados, ganha quem tiver mais pontuação na soma de atributos e na\n"
                    "comparação dos atributos individualmente. Lembrando que na Densidade Populacional, ganha quem\n"
                    "tiver o menor valor.\n");
    break;

    case 2:
                printf ("\nRegras\n"
                        "\n1. Jogo do Super Trunfo está em sua versão DEMO, então evite errar nas informações pedidas. Se por\n"
                        "algum acaso erre, em alguns casos o programa irá ser encerrado e terá que inicia-lo novamente. Me\n"
                        "desculpe por isso.\n"
                        "2. Espero que se divirta ao máximo e que goste, por agora o jogo não tem regras por estar em sua versão\n"
                        "DEMO. Mas os desenvolvedores estão a todo vapor para proporcionar a melhor experiência dentro do jogo\n"
                        "para vocês.\n");
    break;

    case 3:
            printf ("\nIniciando");
            Sleep (1000);
            printf(".");
            Sleep (1000);
            printf(".");
            Sleep (1000);
            printf(".");
            Sleep (1000);
            printf(".");
            Sleep (1000);
            printf(".\n");

            printf ("\nDigite as informações da Carta 1: \n");

            printf ("\nLetra de 'A' a 'Z' representando o Pais desejado: ");
                scanf ("%s",country_letter1);
            printf ("Código da Carta 1, dentre 01 a 05: ");
                scanf ("%s",code_letter1);
            printf ("Nome do Pais: ");
                scanf ("%s",country_name1);
            printf ("População: ");
                scanf ("%lu", &populat1);
            printf ("Área: ");
                scanf ("%llu", &area1);
            printf ("PIB: ");
                scanf ("%llu", &PIB1);
            printf ("Número de Pontos turísticos: ");
                scanf ("%d", &tourist_attractions1);

            /*Cálculo da Densidade Populacional e PIB por capital da Carta 1 */
            population_density1 = (double)populat1 / area1;
            PIB_per_capita1 = (double)PIB1 / populat1;

            /*Entrada dos dados na carta 2*/
            printf ("\nDigite as informações da Carta 2: \n");

            printf ("\nLetra de 'A' a 'Z' representando o Pais desejado: ");
                scanf ("%s",country_letter2);
            printf ("Código da carta A, dentre 01 a 05: ");
                scanf ("%s",code_letter2);
            printf ("Nome do Pais: ");
                scanf ("%s",country_name2);
            printf ("População: ");
                scanf ("%lu", &populat2);
            printf ("Área: ");
                scanf ("%llu", &area2);
            printf ("PIB: ");
                scanf ("%llu", &PIB2);
            printf ("Número de Pontos turísticos: ");
                scanf ("%d", &tourist_attractions2);

            /*Cálculo da Densidade Populacional e PIB por capital da Carta 2 */

            population_density2 = (double)populat2 / area2;
            PIB_per_capita2 = (double)PIB2 / populat2;

            /*Variaveis somente de armazenamento de informação para exibição dos dados*/
            unsigned long int exb_cart1_atrb1_lu, exb_cart1_atrb2_lu, exb_cart2_atrb1_lu, exb_cart2_atrb2_lu; // População
            unsigned long long int exb_cart1_atrb1_llu, exb_cart1_atrb2_llu, exb_cart2_atrb1_llu, exb_cart2_atrb2_llu, exb_cart1_atrb1_lluu, exb_cart1_atrb2_lluu, exb_cart2_atrb1_lluu, exb_cart2_atrb2_lluu, sum1, sum2; // PIB1 e Área
            double exb_cart1_atrb1_f, exb_cart1_atrb2_f, exb_cart2_atrb1_f, exb_cart2_atrb2_f; //Densidade Populacional e PIB1 por capital
            int exb_cart1_atrb1_int, exb_cart1_atrb2_int, exb_cart2_atrb1_int, exb_cart2_atrb2_int, test1 = 0, test2 = 0, victory_cart = 0, victory_cart1 = 0; // Pontos Túristicoa e Teste para vencedor ou perdedor
            char *attribute1, *attribute2; // Exibição de qual atributo está usando atributo 1 e 2.

            /*/////////////////////////////////////////////////////////////////////////////////////
            Abertura do menu interativo escolher ver as informações da cartas ou comparar atributos
            /////////////////////////////////////////////////////////////////////////////////////*/
                printf ("\n-----Menu----\n"
                        "1. Informações da carta 1.\n"
                        "2. Informações da carta 2.\n"
                        "3. Comparação de atributos.\n"
                        "Escolha uma opção: ");
                    scanf ("%d", &opcao);
            
            /*Switch menu interativo para escokha de exibição ou comparação*/
                switch (opcao) {
                
                    case 1:
                    printf ("\nCarta 1: \n");

                    printf ("\nLetra do País: %s \n", country_letter1);
                    printf ("Código: %s%s \n", country_letter1, code_letter1);
                    printf ("Nome: %s \n", country_name1);
                    printf ("População: %lu\n", populat1);
                    printf ("Área: %llu km²\n", area1);
                    printf ("PIB: %llu\n", PIB1);
                    printf ("Números de Pontos Turísticos: %d \n", tourist_attractions1);
                    printf ("Densidade Populacional: %.2f \n", population_density1);
                    printf ("PIB por capital: %.2f \n", PIB_per_capita1);
                    break;

                    case 2:
                    printf ("\nCarta 2: \n");

                    printf ("\nLetra do País: %s \n", country_letter2);
                    printf ("Código: %s%s \n", country_letter2, code_letter1);
                    printf ("Nome: %s \n", country_name2);
                    printf ("População: %lu \n", populat2);
                    printf ("Área: %llu km² \n", area2);
                    printf ("PIB: %llu \n", PIB2);
                    printf ("Números de Pontos Turísticos: %d \n", tourist_attractions2);
                    printf ("Densidade Populacional: %.2f \n", population_density2);
                    printf ("PIB por capital: %.2f \n", PIB_per_capita2);
                    break;

                    case 3:
                    /*Opção para comparar atributos e já armazenar quantas vitórias que cada jogador terá*/
                            printf ("\n---Escolha do Primeiro Atributo---\n");
                            printf ("1. População\n");
                            printf ("2. Área\n");
                            printf ("3. PIB\n");
                            printf ("4. Números de Pontos Turísticos\n");
                            printf ("5. Densidade Populacional\n");
                            printf ("Escolha um dos atributos acima para realizar a comparação: ");
                            scanf ("%d", &comp_atrib1);

                        switch (comp_atrib1) {

                            case 1:

                            test1 = populat1 > populat2 ? (victory_cart = victory_cart + 1 ): (victory_cart1 = victory_cart1 + 1);
                                attribute1 = "População";
                                exb_cart1_atrb1_lu = populat1;
                                exb_cart2_atrb1_lu = populat2;
                            break;

                            case 2:

                            test1 = area1 > area2 ? (victory_cart = victory_cart + 1) : (victory_cart1 = victory_cart1 + 1);
                                attribute1 = "Área";
                                exb_cart1_atrb1_llu = area1;
                                exb_cart2_atrb1_llu = area2;
                            break;

                            case 3:

                            test1 = PIB1 > PIB2 ? (victory_cart = victory_cart + 1) : (victory_cart1 = victory_cart1 + 1);
                                attribute1 = "PIB";
                                exb_cart1_atrb1_lluu = PIB1;
                                exb_cart2_atrb1_lluu = PIB2;
                            break;

                            case 4:
                                
                            test1 = tourist_attractions1 > tourist_attractions2 ? (victory_cart = victory_cart + 1) : (victory_cart1 = victory_cart1 + 1);
                                attribute1 = "Pontos Túristicos";
                                exb_cart1_atrb1_int = tourist_attractions1;
                                exb_cart2_atrb1_int = tourist_attractions2;
                            break;

                            case 5:

                            test1 = population_density1 < population_density2 ? (victory_cart = victory_cart + 1) : (victory_cart1 = victory_cart1 + 1);
                                attribute1 = "Densidade Populacional";
                                exb_cart1_atrb1_f = population_density1;
                                exb_cart2_atrb1_f = population_density2;
                            break;

                            default:
                                printf("Opção invalida, infelizmente o programa irá ser encerrado!");
                                return 0;
                            break;
                        }
                            
                            
                            printf ("\n---Escolha do Segundo Atributo---\n");
                            printf ("1. População\n");
                            printf ("2. Área\n");
                            printf ("3. PIB1\n");
                            printf ("4. Números de Pontos Turísticos\n");
                            printf ("5. Densidade Populacional\n");

                            printf ("\nEscolha um dos atributos acima para realizar a comparação, lembrando que tem que ser diferente do primeiro atributo: ");
                                scanf ("%d", &comp_atrib2);

                        /*Esse if-else está iniciando a próxima comparação de atributos e armazenamento só se o primeiro do diferente*/

                        if (comp_atrib1 != comp_atrib2) {

                            switch (comp_atrib2) {

                                case 1:
                                    test2 = populat1 > populat2 ? (victory_cart = victory_cart + 1) : (victory_cart1 = victory_cart1 + 1);
                                        attribute2 = "População";
                                        exb_cart1_atrb2_lu = populat1;
                                        exb_cart2_atrb2_lu = populat2;
                                break;
                    
                                case 2:
                                    test2 = area1 > area2 ? (victory_cart = victory_cart + 1) : (victory_cart1 = victory_cart1 + 1);
                                        attribute2 = "Área";
                                        exb_cart1_atrb2_llu = area1;
                                        exb_cart2_atrb2_llu = area2;
                                break;
                    
                                case 3:
                                    test2 = PIB1 > PIB2 ? (victory_cart = victory_cart + 1) : (victory_cart1 = victory_cart1 + 1);
                                        attribute2 = "PIB";
                                        exb_cart1_atrb2_lluu = PIB1;
                                        exb_cart2_atrb2_lluu = PIB2;
                                break;
                    
                                case 4: 
                                    test2 = tourist_attractions1 > tourist_attractions2 ? (victory_cart = victory_cart + 1) : (victory_cart1 = victory_cart1 + 1);
                                        attribute2 = "Pontos Túristicos";
                                        exb_cart1_atrb2_int = tourist_attractions1;
                                        exb_cart2_atrb2_int = tourist_attractions2;
                                break;
                    
                                case 5:
                                    test2 = population_density1 < population_density2 ? (victory_cart = victory_cart + 1) : (victory_cart1 = victory_cart1 + 1);
                                        attribute2 = "Densidade Populacional";
                                        exb_cart1_atrb2_f = population_density1;
                                        exb_cart2_atrb2_f = population_density2;
                                break;

                                default:
                                    printf("Opção invalida, infelizmente o programa irá ser encerrado!");
                                    return 0;
                                break;
                            }
                        } else {
                            printf ("Você não pode escolher o mesmo atributo para realizar a comparação, infelizmente o programa vai ser encerrado!");
                            return 0;
                        }
                    break;
                    
                    default:
                        printf ("Opção invalida, infelizmente o programa irá ser encerrado!");
                        return 0;
                    break;
                }

                /*Processamento de soma dos atributos para a comparação de vencedor ou perdedor*/
                sum1 = (populat1 + area1 + PIB1 + tourist_attractions1 + population_density1);
                sum2 = (populat2 + area2 + PIB2 + tourist_attractions2 + population_density2);

                /*///////////////////////////////////////////////////////////////////////////////////////////////////
                Exibição de todos os dados de comparação e ganhador e exibilçao das cartas e seus respectivos valores
                ///////////////////////////////////////////////////////////////////////////////////////////////////*/
                if (opcao == 3){
                    printf ("\n---Informações das Cartas---\n");
                                    printf ("Carta 1: %s%s\n", country_letter1, code_letter1);
                                    printf ("Pais: %s\n", country_name1);
                                    printf ("Primeiro Atributo: %s - ", attribute1);
                                    if (comp_atrib1 == 1) printf ("Valor: %lu\n", exb_cart1_atrb1_lu);
                                    else if (comp_atrib1 == 2) printf ("Valor: %llu\n", exb_cart1_atrb1_llu);
                                    else if (comp_atrib1 == 3) printf ("Valor: %llu\n", exb_cart1_atrb1_lluu);
                                    else if (comp_atrib1 == 4) printf ("Valor: %d\n", exb_cart1_atrb1_int);
                                    else if (comp_atrib1 == 5) printf ("Valor: %f\n", exb_cart1_atrb1_f);
                                    printf ("Segundo Atributo: %s - ", attribute2);
                                    if (comp_atrib2 == 1) printf ("Valor: %lu\n", exb_cart1_atrb2_lu);
                                    else if (comp_atrib2 == 2) printf ("Valor: %llu\n", exb_cart1_atrb2_llu);
                                    else if (comp_atrib2 == 3) printf ("Valor: %llu\n", exb_cart1_atrb2_lluu);
                                    else if (comp_atrib2 == 4) printf ("Valor: %d\n", exb_cart1_atrb2_int);
                                    else if (comp_atrib2 == 5) printf ("Valor: %f\n", exb_cart1_atrb2_f);
            
                                    printf ("\nCarta 2: %s%s\n", country_letter2, code_letter2);
                                    printf ("Pais: %s\n", country_name2);
                                    printf ("Primeiro Atributo: %s -", attribute1);
                                    if (comp_atrib1 == 1) printf ("Valor: %lu\n", exb_cart2_atrb1_lu);
                                    else if (comp_atrib1 == 2) printf ("Valor: %llu\n", exb_cart2_atrb1_llu);
                                    else if (comp_atrib1 == 3) printf ("Valor: %llu\n", exb_cart2_atrb1_lluu);
                                    else if (comp_atrib1 == 4) printf ("Valor: %d\n", exb_cart2_atrb1_int);
                                    else if (comp_atrib1 == 5) printf ("Valor: %f\n", exb_cart2_atrb1_f);
                                    printf ("Segundo Atributo: %s -", attribute2);
                                    if (comp_atrib2 == 1) printf ("Valor: %lu\n", exb_cart2_atrb2_lu);
                                    else if (comp_atrib2 == 2) printf ("Valor: %llu\n", exb_cart2_atrb2_llu);
                                    else if (comp_atrib2 == 3) printf ("Valor: %llu\n", exb_cart2_atrb2_lluu);
                                    else if (comp_atrib2 == 4) printf ("Valor: %d\n", exb_cart2_atrb2_int);
                                    else if (comp_atrib2 == 5) printf ("Valor: %f\n", exb_cart2_atrb2_f);
                                    
                    printf ("\n---Comparação dos Atributos---\n");
                                    if (test1 == test2) {
                                        printf ("Resultado: Empate! Carta 1 - %d atributo(s) / Carta 2 - %d atributo(s)!\n", test1, test2);
                                    }
                                    else if (test1 > test2) {
                                        printf ("Resultado: Vencedor! Carta 1 - %d atributo(s) / Carta 2 - %d atributo(s)!\n", test1, test2);
                                    }
                                    else {
                                        printf("Resultado: Vencedor! Carta 2 - %d atributo(s) / Carta 1 - %d atributo(s)!\n", test2, test1);
                                    }

                    printf ("\n---Soma dos Atributos---\n");
                                    if (sum1 == sum2) printf ("Soma de todos os atributos: Empate! Carta 1 - %llu / Carta2 - %llu.\n", sum1, sum2);
                                    else if (sum1 > sum2) printf ("Soma de todos os atributos: Vencedor! Carta 1 - %llu / Carta2 - %llu.\n", sum1, sum2);
                                    else printf ("Soma de todos os atributos: Vencedor! Carta 2 - %llu / Carta 1 - %llu.\n", sum2, sum1);
                    }
        break;

        case 4:
            printf ("\nSaindo");
            Sleep (1000);
            printf(".");
            Sleep (1000);
            printf(".");
            Sleep (1000);
            printf(".");
            Sleep (1000);
            printf(".");
            Sleep (1000);
            printf(".");
        break;
        default:
            printf ("Opção invalida, infelizmente o programa irá ser encerrado!");
            return 0;
        break;
    }
return 0;
}
