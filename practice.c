#include <stdio.h>
#include <stdlib.h>
#include "change_num.h"

typedef struct value{

  int noDecimal;
  float Decimal;


}value;

void vermenigvuldigen(value *voorbeeld){

  // float result;

  // result = voorbeeld.noDecimal * voorbeeld.Decimal;

  // printf(" Result = %.2f\n", result);

  (*voorbeeld).noDecimal = 7;
  voorbeeld->Decimal = 25.00;


}

void main(){

  int numberOne = 1;
  int result = 0;

  printf("numberOne before function  = %d\n", numberOne);

  addition(&numberOne);

  printf("numberOne after funtion = %d\n", numberOne);


  value examplenumbers = {5, 12.50};

  vermenigvuldigen(&examplenumbers);

  printf("integer value = %d\n", examplenumbers.noDecimal);
  printf("float value = %.2f\n", examplenumbers.Decimal);

  // return 0;

}
