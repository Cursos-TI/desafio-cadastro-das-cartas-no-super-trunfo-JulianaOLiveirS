/* Desafio Super Trunfo - Países
 Tema 1 - Cadastro das Cartas
 Sugestão: Defina variáveis separadas para cada atributo da cidade.
 Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.*/
 #include <stdio.h>
 int main(){
 char estado;
 char codigo_carta1[20];
 char nome_cidade[20];
 int populacao;
 float area;
 float pib;
 int pontos_turisticos;
 
 char estado_2;
 char nome_cidade_2[20];
 int populacao_2;
 float area_2;
 float pib_2;
 int pontos_turisticos_2;
 char codigo_carta2[20];

 //entrada de dados
 
 printf("Digite o código da carta: ");
 scanf("%s", codigo_carta1);

 printf("Digite o estado da cidade(letra de 'A' a 'H'): ");
 scanf(" %c", &estado);

 
 printf("Digite o nome da cidade: ");
 scanf("%s", nome_cidade);
 
 printf("Digite a população da cidade: ");
 scanf("%d", &populacao);
 
 printf("Digite a área da cidade: ");
 scanf("%f", &area);
 
 printf("Digite o PIB da cidade: ");
 scanf("%f", &pib);
 
 printf("Digite os pontos turisticos da cidade: ");
 scanf("%d", &pontos_turisticos);

 //entrada de dados - segunda cidade
 printf("Digite o código da segunda cidade: ");
 scanf("%s", codigo_carta2);

 printf("Digite o estado da segunda carta: ");
 scanf(" %c", &estado_2);

 
 printf("Digite o nome da segunda cidade: ");
 scanf("%s", nome_cidade_2);

 printf("Digite a população da segunda cidade: ");
 scanf("%d", &populacao_2);
 
 printf("Digite a área da segunda cidade: ");
 scanf("%f", &area_2);
 
 printf("Digite o PIB da segunda cidade: ");
 scanf("%f", &pib_2);
 
 printf("Digite os pontos turisticos da segunda cidade: ");
 scanf("%d", &pontos_turisticos_2);


 //Saida de dados
 printf("\nDetalhes da carta 1: %s\n", codigo_carta1);
 printf("Estado: %c\n", estado);
 printf("Nome da cidade: %s\n", nome_cidade);
 printf("População: %d\n", populacao);
 printf("Área: %.2f km²\n", area);
 printf("PIB: %.2f bilhões\n", pib);
 printf("Pontos turisticos: %d\n", pontos_turisticos);

 //saida de dados - segunda cidade
 printf("\nDetalhes da carta 2: %s\n",codigo_carta2);
 printf("Estado: %c\n", estado_2);
 printf("Nome da cidade:%s\n", nome_cidade_2);
 printf("População: %d\n", populacao_2);
 printf("Área: %.2f km²\n", area_2);
 printf("PIB: %.2f bilhões\n", pib_2);
 printf("Pontos turisticos: %d\n", pontos_turisticos_2);

 //comparação de cartas (PIB)
 if(pib > pib_2){
     printf("A carta 1 ganhou!");
 }else if(pib_2 == pib)
 {
     printf("Empate nas cartas.");
 }else{
     printf("Carta 2 ganhou!");
 }
 
 return 0;
}
