#include <cs50.h>
#include <stdio.h>

    int main(void)
    { 
        int score1 = get_int("Qual sua primeira nota? ");
        int score2 = get_int("Qual sua segunda nota? ");
        int score3 = get_int("Qual sua terceira nota? ");
        printf("sua média é %f ", (score1 + score2 + score3)/3.0);

    }