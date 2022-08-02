#include <stdio.h>

int main() {
    
    printf("********************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("********************************\n");

    int numrandom = 42;
    int guess;
    int attempts;

    printf("Enter the number of tries you can hit the secret number: ");
    scanf("%d", &attempts);
    
    for (int i = 1; i <= attempts; i++) {
        
        int possibility = attempts - 1;

        printf("what's your kick?: ");
        scanf("%d", &guess);
        printf("your kick was %d\n", guess);

        int hit = (guess == numrandom);

        if (guess < 0){
            printf("Negative numbers cannot, you still have %d tries.\n", possibility);
            i--;
            continue;
        }
        if (hit) {
            printf("congratulations!!, your guess is correct!\n");
            break;
        }
        else {
            if(guess > numrandom) {
                printf("His guess was bigger than the secret number.\n");
            }
            else {
                printf("His guess was less than the secret number.\n");
            }
            printf("You failed, but you can still go on.\n");
        }
    }
}

        //Same game but repeat in "WHILE"

int main() {
    
    printf("********************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("********************************\n");

    int numrandom = 42;
    int guess;
    int attempts = 0;
    int has_won = 0;
    
    while(has_won == 0){

        printf("attempts %d\n", attempts+1);
        printf("what's your kick?: ");
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
    }
    printf("You got it right in %d attempts.", attempts);
}