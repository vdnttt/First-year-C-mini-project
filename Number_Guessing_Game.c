// number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
   
    srand(time(NULL));
    int num = (rand() % 100) + 1;
    int guess = 0;
    int attempts = 0;
    int diff;
   
    printf("===NUMBER GUESSING GAME===\n");
    printf("You have to guess within 10 attempts.\n");
    printf("\nHINT SYSTEM\n");
    printf("very hot --> very close\n");
    printf("warm --> somewhat close\n");
    printf("cold --> far away\n");
    printf("Let's begin!\n");

    do {
        if (attempts >= 10) 
        {
            printf("\nYou lose! The number was %d\n", num);
            break;
        }

        printf("\nEnter a guess (between 1 to 100): ");
        scanf("%d", &guess);

        attempts++;  

        diff = abs(num - guess);

        if (guess != num) 
        {
            if (diff < 5) printf("very hot!\n");
            else if (diff < 15) printf("warm!\n");
            else printf("cold!\n");
        }

        if (guess < num) 
        {
            printf("guess higher!\n");
        }
        else if (guess > num) 
        {
            printf("guess lower!\n");
        }
        else 
        {
            printf("You got it in %d attempts!\n", attempts);
        }

    } 
    
    while (guess != num);

    return 0;
}