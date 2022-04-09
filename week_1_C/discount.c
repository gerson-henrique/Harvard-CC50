#include <cs50.h>
#include <stdio.h>
float discont(float price, int percent);

int main(void) {
  float regular = get_float("Regular Price: ");
  int percent_off = get_int("Percent Off: ");
  float sale = discont(regular, percent_off);
  printf("sale price : %.2f \n", sale);
}

float discont(float price, int percent) {
  return price * (100 - percent) /100;
}