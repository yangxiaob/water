#include <stdio.h>

void toRod(int diskSize, char arod, char brod, char crod);
void toRod(int diskSize, char arod,char brod, char crod){
  if(diskSize > 0){
    toRod(diskSize-1, arod, crod, brod);
    printf("\n%c to %c", arod, brod);
    toRod(diskSize-1, crod, brod, arod );
  }
  return;
}

int main(){
  int diskSize;
  printf("Enter the size of disk:");
  scanf("%d", &diskSize);
  char arod = 'A', brod =  'B', crod = 'C';
  toRod(diskSize, arod, brod, crod);
  return 0;
}
