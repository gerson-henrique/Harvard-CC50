#include <cs50.h>
#include <stdio.h>

int string_length(string word);

int main(void){
 string s = get_string("string: ");
 int length = string_length(s);
 printf("%i",length);

}

int string_length(string word)
{

int i = 0;

  while (word[i] != '/0' )
{
  i++;
}

return i;

}