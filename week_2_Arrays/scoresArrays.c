#include <cs50.h>
#include <stdio.h>

    int main(void)
    { 

          int n = get_int("how many scores ? ");
      int scores[n];
    
        for (int i = 0; i <n; i++){
          scores[i] = get_int("Qual sua nota? ");
        }
        printf("sua média é %f ", (scores[0] + scores[1] + scores[2])/3.0);

    }