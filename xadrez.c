#include <stdio.h>

int main() {
  //Torre = linha reta = 5 casas para direita
  printf("Movimento da Torre\n");
  for(int t = 1; t <= 5; t++) {
    printf("Torre: 1 casa para a direita\n");
  }

  //Bispo = diagonal = 5 casas para cima e à direita
  printf("\nMovimento do Bispo\n");
  int b = 1;
  while(b <= 5) {
    printf("Bispo: 1 casa cima e à direita\n");
    b++;
  }

  //Rainha = todas direções = 8 casa para esquerda
  printf("\nMovimento da Rainha\n");
  int r = 1;
  do {
    printf("Rainha: 1 casa para a esquerda\n");
    r++;
  } while (r <= 8);

  //Cavalo move em "L" = 2 casas para baixo e 1 para a esquerda
  printf("\nMovimento do Cavalo\n");
  int y = 1, x;
  
  for(x = 1; x <= 1; x++) {
    while(y <= 2) {
      printf("Cavalo: 1 casa para baixo\n");
      y++;
    }
    printf("Cavalo: 1 casa para a esquerda\n");
  }
  return 0;
}