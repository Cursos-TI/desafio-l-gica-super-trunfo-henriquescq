#include <stdio.h> // biblioteca de IO

int main () {

    char country_letter [5], code_letter [10], country_name [50], country_letter1 [5], code_letter1 [10], country_name1 [50]; // Letra do Pais, código das cartas e nome do Pais.
    int tourist_attractions, tourist_attractions1, opcao, comp_cart1; // População, pontos turísticos, opção de escolha, comparação carta.
    unsigned long int populat, populat1; // População
    unsigned long long int area, PIB, area1, PIB1; // Área, PIB (Produto interno bruto)
    double population_density, PIB_per_capita, population_density1, PIB_per_capita1; //Densidade Populacional, PIB por capital
    
    /* Entrada de dados da carta 1. */
    printf ("Carta 1: \n");

    printf ("\nDigite uma Letra de 'A' a 'H' representando o Pais desejado: ");
        scanf ("%s",country_letter);

    printf ("Digite o código da carta A, dentre 01 a 04: %s", country_letter);
        scanf ("%s",code_letter);

    printf ("Digite o nome do Pais: ");
        scanf ("%s",country_name);

    printf ("Digite a população do Pais %s: ", country_name);
        scanf ("%lu", &populat);

    printf ("Digite a área do Pais %s: ", country_name);
        scanf ("%llu", &area);

    printf ("Digite o PIB do Pais %s: ", country_name);
        scanf ("%llu", &PIB);
    
    printf ("Digite os números de pontos turísticos do Pais %s: ", country_name);
        scanf ("%d", &tourist_attractions);

    /* Processamento da carta 1*/

    population_density = populat / area;
    PIB_per_capita = PIB / populat;

    /* Entrada de dados da carta 2. */
   
    printf ("\nCarta 2: \n");

    printf ("\nDigite uma Letra de 'A' a 'H' representando o Pais desejado: ");
    scanf (" %s",country_letter1);

    printf ("Digite o código da carta A, dentre 01 a 04: %s", country_letter1);
    scanf (" %s",code_letter1);

    printf ("Digite o nome do Pais: ");
    scanf ("%s",country_name1);

    printf ("Digite a população do Pais %s: ", country_name1);
    scanf ("%lu", &populat1);

    printf ("Digite a área do Pais %s: ", country_name1);
    scanf ("%llu", &area1);

    printf ("Digite o PIB do Pais %s: ", country_name1);
    scanf ("%llu", &PIB1);
    
    printf ("Digite os números de pontos turísticos do Pais %s: ", country_name1);
    scanf ("%d", &tourist_attractions1);

    /* Processamento da carta 2*/

    population_density1 = populat1 / area1;
    PIB_per_capita1 = PIB1 / populat1;

    /*Abertura do menu interativo escolher ver as informações da cartas ou comparar atributos*/
    printf ("\n---Menu---\n");
    printf ("1. Informações da carta 1.\n");
    printf ("2. Informações da carta 2.\n");
    printf ("3. Comparação de atributos.\n");
    printf ("Escolha uma opção: ");
    scanf ("%d", &opcao);

        switch (opcao) {
        
            case 1:
            printf ("\nCarta 1: \n");

            printf ("\nLetra do Pais: %s \n", country_letter);
            printf ("Código: %s%s \n", country_letter, code_letter);
            printf ("Nome do Pais: %s \n", country_name);
            printf ("População: %lu \n", populat);
            printf ("Área: %llu km² \n", area);
            printf ("PIB: %llu \n", PIB);
            printf ("Números de Pontos Turísticos: %d \n", tourist_attractions);
            printf ("Densidade Populacional: %.2f \n", population_density);
            printf ("PIB por capital: %.2f \n", PIB_per_capita);
            break;

            case 2:
            printf ("\nCarta 2: \n");

            printf ("\nEstado: %s \n", country_letter1);
            printf ("Código: %s%s \n", country_letter1, code_letter1);
            printf ("Nome da Cidade: %s \n", country_name1);
            printf ("População: %lu \n", populat1);
            printf ("Área: %llu km² \n", area1);
            printf ("PIB: %llu \n", PIB1);
            printf ("Números de Pontos Turísticos: %d \n", tourist_attractions1);
            printf ("Densidade Populacional: %.2f \n", population_density1);
            printf ("PIB por capital: %.2f \n", PIB_per_capita1);
            break;

            case 3:
            /*Opção de comparar atributos e já realizar a saída do resultado*/
                    printf ("\n     ---Comparação de atributos---\n");
                    printf ("1. População\n");
                    printf ("2. Área\n");
                    printf ("3. PIB\n");
                    printf ("4. Números de Pontos Turísticos\n");
                    printf ("5. Densidade Populacional\n");
                    printf ("Escolha um dos atributos acima para realizar a comparação: ");
                    scanf ("%d", &comp_cart1);

                switch (comp_cart1) {

                    case 1:
                    if (populat > populat1) {
                        printf ("\n   ---Comparação--- \n");
                        printf ("Carta 1\n");
                        printf ("Pais: %s\n", country_name);
                        printf ("Atributo: População\n");
                        printf ("Valores: %lu\n", populat);
                        
                        printf ("\nCarta 2\n");
                        printf ("Pais: %s\n", country_name1);
                        printf ("Atributo: População\n");
                        printf ("Valores: %lu\n", populat1);
                        printf ("Vencedor: Carta 1: População (%lu Habitantes).\n", populat);

                    }
                    else if (populat == populat1){
                        
                        printf ("\n   ---Comparação--- \n");
                        printf ("Carta 1\n");
                        printf ("Pais: %s\n", country_name);
                        printf ("Atributo: População\n");
                        printf ("Valores: %lu\n", populat);

                        printf ("\nCarta 2\n");
                        printf ("Pais: %s\n", country_name1);
                        printf ("Atributo: População\n");
                        printf ("Valores: %lu\n", populat1);
                        printf ("Vencedor: Empate! Sendo que Carta 1: População com %lu Habitantes e Carta 2: População com %lu Habitantes.\n", populat, populat1);
                    }
                    else {
                        printf ("\n   ---Comparação--- \n");
                        printf ("Carta 1\n");
                        printf ("Pais: %s\n", country_name);
                        printf ("Atributo: População\n");
                        printf ("Valores: %lu\n", populat);
                        
                        printf ("\nCarta 2\n");
                        printf ("Pais: %s\n", country_name1);
                        printf ("Atributo: População\n");
                        printf ("Valores: %lu\n", populat1);
                        printf ("Vencedor: Carta 2: População (%lu Habitantes).\n", populat1);
                        
                    }
                    break;

                    case 2:

                        if (area > area1) {
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: Área\n");
                            printf ("Valores: %llu\n", area);
                            
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: Área\n");
                            printf ("Valores: %llu\n", area1);
                            printf ("Vencedor: Carta 1: Área (%lluKM²).\n", area);
    
                        }
                        else if (area == area1){
                            
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: Área\n");
                            printf ("Valores: %llu\n", area);
    
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: Área\n");
                            printf ("Valores: %llu\n", area1);
                            printf ("Vencedor: Empate! Sendo que Carta 1: Área com %lluKM² e Carta 2: Área com %lluKM².\n", area, area1);
                        }
                        else {
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: Área\n");
                            printf ("Valores: %llu\n", area);
                            
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: Área\n");
                            printf ("Valores: %llu\n", area1);
                            printf ("Vencedor: Carta 2: Área (%lluKM²).\n", area1);
                            
                        }
                    break;

                    case 3:

                        if (PIB > PIB1) {
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: PIB\n");
                            printf ("Valores: %llu\n", PIB);
                            
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: PIB\n");
                            printf ("Valores: %llu\n", PIB1);
                            printf ("Vencedor: Carta 1: PIB (%llu).\n", PIB);
    
                        }
                        else if (PIB == PIB1){
                            
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: PIB\n");
                            printf ("Valores: %llu\n", PIB);
    
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: PIB\n");
                            printf ("Valores: %llu\n", PIB1);
                            printf ("Vencedor: Empate! Sendo que Carta 1: PIB com %llu e Carta 2: PIB com %llu.\n", PIB, PIB1);
                        }
                        else {
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: PIB\n");
                            printf ("Valores: %llu\n", PIB);
                            
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: PIB\n");
                            printf ("Valores: %llu\n", PIB1);
                            printf ("Vencedor: Carta 2: PIB (%llu).\n", PIB1);
                        }
                    break;

                    case 4:

                        if (tourist_attractions > tourist_attractions1) {
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: Pontos Turísticos\n");
                            printf ("Valores: %d\n", tourist_attractions);
                            
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: Pontos Turísticos\n");
                            printf ("Valores: %d\n", tourist_attractions1);
                            printf ("Vencedor: Carta 1: Pontos Turísticos (%d).\n", tourist_attractions);
    
                        }
                        else if (tourist_attractions == tourist_attractions1){
                            
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: Pontos Turísticos\n");
                            printf ("Valores: %d\n", tourist_attractions);
    
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: Pontos Turísticos\n");
                            printf ("Valores: %d\n", tourist_attractions1);
                            printf ("Vencedor: Empate! Sendo que Carta 1: Pontos Turísticos com %d e Carta 2: Pontos Turísticos com %d.\n", tourist_attractions, tourist_attractions1);
                        }
                        else {
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: Pontos Turísticos\n");
                            printf ("Valores: %d\n", tourist_attractions);
                            
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: Pontos Turísticos\n");
                            printf ("Valores: %d\n", tourist_attractions1);
                            printf ("Vencedor: Carta 2: Pontos Turísticos (%d).\n", tourist_attractions1);
                        }
                    break;

                    case 5:

                        if (population_density < population_density1) {
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: Densidade Populacional\n");
                            printf ("Valores: %.2f\n", population_density);
                            
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: Densidade Populacional\n");
                            printf ("Valores: %.2f\n", population_density1);
                            printf ("Vencedor: Carta 1: Densidade Populacional (%.2f).\n", population_density);
    
                        }
                        else if (population_density == population_density1){
                            
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: Densidade Populacional\n");
                            printf ("Valores: %.2f\n", population_density);
    
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: Densidade Populacional\n");
                            printf ("Valores: %.2f\n", population_density1);
                            printf ("Vencedor: Empate! Sendo que Carta 1: Densidade Populacional com %.2f e Carta 2: Densidade Populacional com %.2f.\n", population_density, population_density1);
                        }
                        else {
                            printf ("\n   ---Comparação--- \n");
                            printf ("Carta 1\n");
                            printf ("Pais: %s\n", country_name);
                            printf ("Atributo: Densidade Populacional\n");
                            printf ("Valores: %.2f\n", population_density);
                            
                            printf ("\nCarta 2\n");
                            printf ("Pais: %s\n", country_name1);
                            printf ("Atributo: Densidade Populacional\n");
                            printf ("Valores: %.2f\n", population_density1);
                            printf ("Vencedor: Carta 2: Densidade Populacional (%.2f).\n", population_density1);
                        }
                    break;
                    
                    default:
                        printf ("Opção invalida!");
                    break;
                }
            break;

            default:
                printf ("Opção invalida!");
            break;
        }
    
    return 0;
}
