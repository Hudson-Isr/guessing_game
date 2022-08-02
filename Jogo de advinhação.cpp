#include <stdio.h>

int main() {
    
    printf("********************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("********************************\n");

    int numrandom = 42;
    int guess;

    printf("what's your kick?: ");
    scanf("%d", &guess);
    printf("your kick was %d\n", guess);

    if (guess == numrandom) {
        printf("congratulations!!, your guess is correct!");
    }
    else {
        if(guess > numrandom) {
            printf("His guess was bigger than the secret number.");
        }
        else {
            printf("His guess was less than the secret number.");
        }
        printf("You made a mistake, try again! :D");
    }
}

