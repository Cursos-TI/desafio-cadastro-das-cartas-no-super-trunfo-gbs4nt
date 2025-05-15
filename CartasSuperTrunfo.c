#include <stdio.h>
#include <locale.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char estado1[20],estado2[20], codigo_carta1[5],codigo_carta2[5], nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2,pontos_turisticos1,pontos_turisticos2;
    float area1, pib1,area2, pib2;
    int opcao;
    setlocale(LC_ALL, "Portuguese");
   
    

    printf("---------Carta 1-------\n");
    
    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade1);

    printf("Diga a populacao: \n");
    scanf("%i", &populacao1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turisticos: \n");
    scanf("%i", &pontos_turisticos1);

    
   printf("-------Carta2---------\n");
    
    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", estado2);
    
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Diga a populacao: \n");
    scanf("%i", &populacao2);
    
    printf("Digite a area: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Qual a quantidade de pontos turisticos: \n");
    scanf("%i", &pontos_turisticos2);

    printf("Agora escolha qual o atributo numérico deseja comparar:\n 1 - Populacao \n 2 - Area \n 3 - PIB \n 4 - Numero de pontos turisticos \n 5- Densidade demografica\n");
     
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1: {
            
            printf("Entre os paises %s e %s, no quesito populacao o veredito e: ", &estado1, &estado2);
                if (populacao1>populacao2){
        printf("População: Carta 1 venceu \n");
    }else if(populacao1==populacao2){
        printf("Empate! Ambas cartas tem a mesma populacao");
    }else{
        printf("População: Carta 2 venceu \n" );
        }
        break;
    
    }
 case 2: {
        int comparativo_area= area1>area2;
         printf("Entre os paises %s e %s, no quesito area o veredito e: ", &estado1, &estado2);
    if (comparativo_area==1){
        printf("Área: Carta 1 venceu (%d)\n", comparativo_area);
    }else if(area1==area2){
        printf("Empate! Ambas cartas tem a mesma area");
    }else{
        printf("Área: Carta 2 venceu (%d)\n", comparativo_area);
        
    }
     break;
}
            
            case 3 : {
            int comparativo_pib= pib1>pib2;
             printf("Entre os paises %s e %s, no quesito PIB o veredito e: ", &estado1, &estado2);
    if (comparativo_pib==1){
        printf("PIB: Carta 1 venceu (%d)\n", comparativo_pib);
    }else if(pib1==pib2){
        printf("Empate! Ambas cartas tem o mesmo pib");
    }else{
        printf("PIB: Carta 2 venceu (%d)\n", comparativo_pib);
    
        
    }
     break;
}

case 4 : {
    int comparativo_turi= pontos_turisticos1>pontos_turisticos2;
     printf("Entre os paises %s e %s, no quesito pontos turisticos o veredito e: ", &estado1, &estado2);
    if (comparativo_turi==1){
        printf("Pontos turísticos: Carta 1 venceu (%d)\n", comparativo_turi);
    }else if(pontos_turisticos1==pontos_turisticos2){
        printf("Empate! Ambas cartas tem a quantidade de pontos turísticos");
    }else{
        printf("Pontos turísticos: Carta 2 venceu (%d)\n", comparativo_turi);
        
    }
     break;
}
case 5 :{
    float densidade_p1 = (float) populacao1/area1;
    float densidade_p2 = (float) populacao2/area2;
    int comparativo_den= densidade_p1>densidade_p2;
     printf("Entre os paises %s e %s, no quesito densidade demografica o veredito e: ", &estado1, &estado2);
    if (comparativo_den==1){
        printf("Densidade demográfica: Carta 2 venceu (%d)\n", comparativo_den);
    }else if(densidade_p1==densidade_p2){
        printf("Empate! Ambas cartas tem a mesma densidade demografica");
    }else{
        printf("Densidade demográfica: Carta 1 venceu (%d)\n", comparativo_den);

    }
     break;
}
 }
    
    
    
    
    //float pib_percap1 = (float) pib1/populacao1;
  
    //float inverso_densidade1 = 1.0/densidade_p1;
    //float super_poder1 = (float) (populacao1+pib1+area1+pontos_turisticos1+pib_percap1+inverso_densidade1);

    
     
    //float pib_percap2 = (float) pib2/populacao2;
    
    //float inverso_densidade2 = 1.0/densidade_p2;
   // float super_poder2 = (float) (populacao2+pib2+area2+pontos_turisticos2+pib_percap2+inverso_densidade2);

    

    
    
    
    
   

    //int comparativo_ppc= pib_percap1>pib_percap2;
   // if (comparativo_ppc==1){
    //    printf("PIB per Capta: Carta 1 venceu (%d)\n", comparativo_ppc);
   // }else{
       // printf("PIB per Capta: Carta 2 venceu (%d)\n", comparativo_ppc);
        
   // }
   //int comparativo_poder= super_poder1>super_poder2;
   // if (comparativo_poder==1){
  //  }else{
     //   printf("Super Poder: Carta 2 venceu (%d)\n", comparativo_poder);}
    
    



  
   

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
