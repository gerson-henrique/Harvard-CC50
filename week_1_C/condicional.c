#include <cs50.h>
#include <stdio.h>

int main(void) {
  const int PROFESSORPOINTS = 2;
  int points = get_int("how many points you have lost? ");
  if (points < PROFESSORPOINTS) {
    printf("you lost fewer points than professor \n");
  } else if (points > PROFESSORPOINTS) {
    printf("you lost more points than the professor \n");
  } else {
    printf("you and the professor lost same amount of points \n");
  }

}