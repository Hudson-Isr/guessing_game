#include <stdio.h>

int main() {
    
    printf("********************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("********************************\n");

    int numrandom = 42;
    int guess;
    int attempts = 0;
    int has_won = 0;
    int score = 1000;

    while(has_won == 0){

        printf("attempts %d\n", attempts+1);
        printf("what's your kick?: \n");
        scanf("%d", &guess);
        printf("your kick was %d\n", guess);
        
        int hit = (guess == numrandom);

        if (guess < 0){
            printf("Negative numbers cannot.\n");
            continue;
        }
        if (hit) {
            printf("congratulations!!, your guess is correct!\n");
            has_won = 1;
        }
        else {
            if(guess > numrandom) {
                printf("His guess was bigger than the secret number.\n");
            }
            else {
                printf("His guess was less than the secret number.\n");
            }
        }
        attempts++;
        int score_down = (guess - numrandom) / 2;
        score = score - score_down;
    }
    printf("You got it right in %d attempts.\n", attempts);
    printf("Total Score: %d\n", score);
}