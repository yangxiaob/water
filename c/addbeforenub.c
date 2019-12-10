#include <stdio.h>

int main(void){
  int num, result = 0, i;
  
  printf("please enter a number: ");
  scanf("%d", &num);

  for(i = 1; i < num; i++){
    result += i;
  }
  printf("the sum of adding (1...num) is : %d\n", result);
  return 0;

}
