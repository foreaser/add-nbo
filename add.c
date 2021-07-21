//add.c
#include "main.h"

void add(uint32_t num1, uint32_t num2){
  uint32_t result = num1 + num2;
  printf("%d(%#x) + %d(%#x) = %d(%#x)",num1,num1,num2,num2,result,result);

}
