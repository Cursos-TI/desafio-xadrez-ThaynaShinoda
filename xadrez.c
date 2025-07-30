#include <stdio.h>

void moverTorre(int casas) {
  if(casas > 0) {
    printf("Torre: 1 casa para a direita\n");
    moverTorre(casas - 1);
  }
}

void moverBispo(int casas) {
  if(casas > 0) {
    // Loops aninhados
    int movimento, passo;
    for(movimento = 1; movimento <= 1; movimento++) {
      for(passo = 1; passo <= 10; passo++) {
        if(passo == 1) {
          printf("Bispo: 1 casa cima e à direita\n");
          break;
        }
        continue;
      }
    }
    moverBispo(casas - 1); // Chamada recursiva
  }
}

void moverRainha(int casas) {
  if(casas > 0) {
    printf("Rainha: 1 casa para a esquerda\n");
    moverRainha(casas - 1);
  }
}

int main() {
  //Torre = linha reta = 5 casas para direita
  printf("Movimento da Torre\n");
  moverTorre(5);

  //Bispo = diagonal = 5 casas para cima e à direita
  printf("\nMovimento do Bispo\n");
  moverBispo(5);

  //Rainha = todas direções = 8 casa para esquerda
  printf("\nMovimento da Rainha\n");
  moverRainha(8);

  //Cavalo move em "L" = 2 casas para cima e 1 para a direita
  printf("\nMovimento do Cavalo\n");
  int movimentos = 1, etapa, passo;
  
  for(movimentos = 1; movimentos <= 1; movimentos++) { //Executa 1 vez controlando quantos movimentos em "L" o cavalo fará
    
    for(etapa = 1; etapa <= 2; etapa++) { // Loop externo: executa 2 casas para cima
      for(passo = 1; passo <= 10; passo++) { //Loop interno: dá um passo pra cima e break
        if(passo == 1) {
          printf("Cavalo: 1 casa para cima\n");
          break;
        }
        continue;
      }
    }
    
    
    for(etapa = 1; etapa <= 1; etapa++) {// Loop externo: executa 1 casa para a direita
      for(passo = 1; passo <= 10; passo++) { //Loop interno: dá um passo para direita e break
        if(passo == 1) {
          printf("Cavalo: 1 casa para a direita\n");
          break;
        }
        continue;
      }
    }
  }
  return 0;
}