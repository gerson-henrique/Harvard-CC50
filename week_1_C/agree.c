#include <cs50.h>
#include <sdtio.h>

int main(void) {
  char agreement = get_char(" Do you agree? ");
  if (c == 'y' || c =='Y'){
      printf("agreed!");
  } else if (c == 'n' || c =='N'){
      printf("not agreed!");
  }

}