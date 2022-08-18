#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    printf("********************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("********************************\n");
    printf("\n");

    srand(time(NULL));
    int numrandom = rand()%100;
    int guess;
    int attempts = 0;
    int has_won = 0;
    double score = 1000;

    while(has_won == 0){

        printf("attempts %d\n", attempts+1);
        printf("what's your kick?: ");
        scanf("%d", &guess);
        printf("\n");
        printf("your kick was %d\n", guess);
        
        int hit = (guess == numrandom);

        if (guess < 0){
            printf("Negative numbers cannot.\n");
            printf("\n");
            continue;
        }
        if (hit) {
            printf("congratulations!!, your guess is correct!\n");
            printf("\n");
            has_won = 1;
        }
        else {
            if(guess > numrandom) {
                printf("His guess was bigger than the secret number.\n");
                printf("\n");
            }
            else {
                printf("His guess was less than the secret number.\n");
                printf("\n");
            }
        }
        attempts++;
        double score_down = abs(guess - numrandom) / 2.0;
        score = score - score_down;
    }
    printf("You got it right in %d attempts.\n", attempts);
    printf("Total Score: %.2f\n", score);
}