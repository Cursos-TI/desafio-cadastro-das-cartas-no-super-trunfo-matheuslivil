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

    char Carta1;
    char Estado [40];
    char Codigo[10];
    char Cidade [50];
    int Populacao;
    float Area;
    float PIB;
    int Turisticos;

printf("Carta1\n"); //numero da carta para indentificação 
printf("Digite o estado:\n"); //impressão da interação com o usuario para entrada de dados
scanf("%s", &Estado);//entrada de dados para imprimir o string de char estado. 
printf("Codigo da carta:\n");
scanf("%s", &Codigo);
printf("Digite a cidade:\n");
scanf("%s",&Cidade);
printf("Informe a populacao da cidade:\n");
scanf("%i", &Populacao);
printf("Informe a area:\n");
scanf("%f", &Area);
printf("Informe o PIB da cidade:\n");
scanf("%f", &PIB);
printf("Informe a quantidade de pontos turisticos\n");
scanf("%i", &Turisticos);


//Impressão dos dados coletados da carta1
printf("Estado:\n %s",&Estado);

    return 0;
}
