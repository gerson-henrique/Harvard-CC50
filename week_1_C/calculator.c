#include <cs50.h>
#include <stdio.h>

int main(void)
{
  long first_number = get_long("X: ");
  long second_number = get_long("Y: ");
  long sum = first_number + first_number;
  long subtraction = first_number - first_number;
  printf("%i \n", sum );
  printf("%i \n", subtraction );

}