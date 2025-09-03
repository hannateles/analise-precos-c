/* INCLUSAO BIBLIOTECAS*/
#include <stdio.h>    
#include <stdlib.h>   
#include <string.h> 
#include <stdbool.h>

/* INCLUSAO VARIAVEIS*/
float precoAnterior=0, 
      precoAtual=0, 
      variacao = 0;
char nomeProduto[20] ="",
     situacao[20] = "";
bool variacao10 = false;
/*START*/
int main(void) {
  printf("\033[1;35mPrograma para calcular a variação de preço de produtos\n\n\033[0m");
  
  for (int i = 0; i < 3; i++) //loop para repetir a entrada de dados 3 vezes
    {
      printf("Nome do produto: ");
      scanf("%s", nomeProduto);
      printf("\t Preço Anterior: R$");
      scanf("%f", &precoAnterior);
      printf("\t Preço Atual: R$");
      scanf("%f", &precoAtual);
      
      //calculo da variação
      variacao = (precoAtual - precoAnterior) / precoAnterior * 100;
      printf("\t Variação: %.2f%%\n", variacao);
     //condicionais para definir a situação 
    if (variacao == 0){
      strcpy(situacao, "ESTÁVEL");
    }
    else if (variacao >0){
      strcpy(situacao, "AUMENTO");
      if (variacao>=10){
        strcpy(situacao, "ABUSO DE PREÇO");
      }
    }
    else if (variacao <0){
      strcpy(situacao, "QUEDA");
    }
    else {
      printf("ERRO DE ENTRADA, TENTE NOVAMENTE\n ");
    }
      printf("\t Situação: %s\n", situacao);
      printf("--------------------------------------------------\n\n");
  }

  printf("\033[1;35mFIM DO PROGRAMA\033[0m\n");
  
  return 0;
}

/*END*/