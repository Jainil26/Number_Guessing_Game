#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    srand(time(0));

    
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guessed;
    
    //printf("Random Number between 1 and 100: %d\n", randomNumber);
    do
    {
       printf("Guess the number : ");
       scanf("%d",&guessed);
       if (guessed>randomNumber)
       {
        printf("Lower number please\n");
       }
       else
       {
        printf("Higher number please\n");
       }
       no_of_guesses++;
    } while (guessed!=randomNumber);
    printf("You guessed the number in %d guesses ",no_of_guesses);

    return 0;
}