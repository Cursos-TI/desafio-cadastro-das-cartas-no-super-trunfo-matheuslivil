#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char Carta1, Carta2;
    char Estado, Estado2 ;
    char Codigo, Codigo2;
    char Cidade, Cidade2;
    int Populacao, Populacao2;
    float Area, Area2;
    float PIB, PIB2;
    int Turisticos, Turisticos2;

printf("Carta1\n"); //numero da carta para indentificação 
printf("Digite o estado:\n"); //impressão da interação com o usuario para entrada de dados
fgets(Estado, 50, stdin);// foi utilizado o tipo de dados fgets para acrescentar a funcão de espaco na entrada de dados 
     
printf("Codigo da carta:\n");
scanf("%c", &Codigo);
printf("Digite a cidade:\n");
scanf("%s", &Cidade);
printf("Informe a populacao da cidade:\n");
scanf("%i", &Populacao);
printf("Informe a area:\n");
scanf("%f", &Area);
printf("Informe o PIB da cidade:\n");
scanf("%f", &PIB);
printf("Informe a quantidade de pontos turisticos\n");
scanf("%i", &Turisticos);
printf("\n");

/*Impressão dos dados coletados da carta1*/
printf("Carta1\n");
printf("Estado:%s \n",&Estado);
printf("Codigo:%s \n", &Codigo);
printf("Cidade:%s\n", &Cidade);
printf("Populacao:%i\n",&Populacao);
printf("Area:%f\n", &Area);
printf("PIB:%f\n", &PIB);
printf("Pontos Turisticos:%i\n", &Turisticos);

printf("Carta2\n"); //numero da carta para indentificação 
printf("Digite o estado:\n"); //impressão da interação com o usuario para entrada de dados
fgets(Estado2, 50, stdin);// foi utilizado o tipo de dados fgets para acrescentar a funcão de espaco na entrada de dados 
     
printf("Codigo da carta:\n");
scanf("%c", &Codigo2);
printf("Digite a cidade:\n");
scanf("%s", &Cidade2);
printf("Informe a populacao da cidade:\n");
scanf("%i", &Populacao2);
printf("Informe a area:\n");
scanf("%f", &Area2);
printf("Informe o PIB da cidade:\n");
scanf("%f", &PIB2);
printf("Informe a quantidade de pontos turisticos\n");
scanf("%i", &Turisticos2);
printf("\n");

/*Impressão dos dados coletados da carta1*/
printf("Carta1\n");
printf("Estado:%s \n",&Estado2);
printf("Codigo:%s \n", &Codigo2);
printf("Cidade:%s\n", &Cidade2);
printf("Populacao:%i\n",&Populacao2);
printf("Area:%f\n", &Area2);
printf("PIB:%f\n", &PIB2);
printf("Pontos Turisticos:%i\n", &Turisticos2);

    return 0;
}
