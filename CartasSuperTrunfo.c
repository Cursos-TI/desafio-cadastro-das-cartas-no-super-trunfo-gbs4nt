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
    int opcao1, opcao2;
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
     
        scanf("%d", &opcao1);
        
         printf("Agora escolha qual o segundo atributo numérico deseja comparar:\n 1 - Populacao \n 2 - Area \n 3 - PIB \n 4 - Numero de pontos turisticos \n 5- Densidade demografica\n");
         scanf("%d", &opcao2);

         if(opcao1 == opcao2){
            printf("Nao e permitido comparar um atributo com ele mesmo");
         }

 printf("Entre os paises %s e %s, o veredito e: \n ", estado1, estado2);

  float densidade_p1 = (float) populacao1/area1;
    float densidade_p2 = (float) populacao2/area2;


          
           
         
        switch(opcao1){
            case 1: {
                switch (opcao2)
                { 
                case 2:
                    printf("%s\n", populacao1>area2 ? "Carta 1 venceu": "Carta 2 venceu") ;
                    break;
                case 3:

                    printf("%s \n", populacao1>pib2 ? "Carta 1 venceu": "Carta 2 venceu") ;

                     break;
                case 4:

                    printf("%s \n",populacao1>pontos_turisticos2 ? "Carta 1 venceu": "Carta 2 venceu") ;
                     break;

                case 5:

                    printf("%s \n",populacao1>densidade_p2? "Carta 1 venceu": "Carta 2 venceu") ;
                     break;

                
               default:
                printf("Inválido.\n");
                break;
                }
                break;
            }
                
            
            case 2: {
            switch (opcao2)
            {
                case 1:
                 printf("%s \n",area1>populacao2 ? "Carta 1 venceu": "Carta 2 venceu" );
                 break;

                case 3:
                 printf("%s \n",area1>pib2 ? "Carta 1 venceu": "Carta 2 venceu" );
                 break;

                case 4:
                 printf("%s \n",area1>pontos_turisticos2 ? "Carta 1 venceu": "Carta 2 venceu" );
                 break;
                
                 case 5:
                printf("%s \n",area1>densidade_p2? "Carta 1 venceu": "Carta 2 venceu") ;
                break;

                default:
            printf("Inválido");
                break;
            }
            break;
        }
        case 3 : {

                switch (opcao2)
                {
                case 1:
                printf("%s \n",pib1>populacao2 ? "Carta 1 venceu": "Carta 2 venceu" );
                
                break;

                case 2:
                printf("%s \n",pib1>area2 ? "Carta 1 venceu": "Carta 2 venceu" );
                
                break;

                case 4:
                printf("%s \n", pib1>pontos_turisticos2 ? "Carta 1 venceu": "Carta 2 venceu");
                
                break;

                case 5:
                printf("%s \n",pib1>densidade_p2? "Carta 1 venceu": "Carta 2 venceu");
                
                    break;
                
                default:
                    printf("Inválido");
                    break;
                }
            break;
            
        }

case 4 : {
    switch (opcao2)
    {
    case 1:
    printf("%s \n", pontos_turisticos1>populacao2 ? "Carta 1 venceu": "Carta 2 venceu" );
     
        break;

    case 2:
        printf("%s \n", pontos_turisticos1>area2 ? "Carta 1 venceu": "Carta 2 venceu" );

   
    break;

    case 3:
        printf("%s \n", pontos_turisticos1>pib2 ? "Carta 1 venceu": "Carta 2 venceu" );
         break;

    case 5:
        printf("%s \n",pontos_turisticos1>densidade_p2? "Carta 1 venceu": "Carta 2 venceu" );
         break;


    
    default:
                printf("Inválido");

        break;
    }
     break;
}
case 5 :{
   
    switch (opcao2)
    {
    case 1:
        printf("%s \n",  densidade_p1<populacao2 ? "Carta 1 venceu": "Carta 2 venceu" );

   
        
        break;
        case 2:
            printf("%s \n", densidade_p1<area2 ? "Carta 1 venceu": "Carta 2 venceu");
         break;
        case 3:
        printf("%s \n",  densidade_p1<pib2 ? "Carta 1 venceu": "Carta 2 venceu");
        break;
        case 4:
        printf("%s \n",densidade_p1<pontos_turisticos2 ? "Carta 1 venceu": "Carta 2 venceu");
        break;
    
    default:
        break;
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
