#include <stdio.h>

int main() {

// Dentro de uma quantidade x de números, calcula quais deles são múltiplos de 2, 3, 4 e 5

int multiplos2, multiplos3, multiplos4, multiplos5, i, num, x;

multiplos2 = 0;
multiplos3 = 0;
multiplos4 = 0;
multiplos5 = 0;

scanf("%d", &x);

for(i=0; i < x; i++){
  scanf("%d", &num);
  if(num % 2 == 0){
    multiplos2++;
  }
  if(num % 3 == 0){
    multiplos3++;
  }
  if(num % 4 == 0){
  multiplos4++;
}
  if(num % 5 == 0){
    multiplos5++;
  }
}

printf("%d Multiplo(s) de 2\n", multiplos2);
printf("%d Multiplo(s) de 3\n", multiplos3);
printf("%d Multiplo(s) de 4\n", multiplos4);
printf("%d Multiplo(s) de 5\n", multiplos5);

  return 0;
}