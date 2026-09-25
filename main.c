#include <stdio.h>

int main (){

    int guess;
    int secret = 26;


        printf("Gussing Number Game (challenge for You Nigga )\n");
    
    while(guess != secret)
        {
            printf("\nEnter Your Gussing Number :");
            scanf("%d", &guess);
    if (guess == secret)
    {
        printf("\nCorrect Guess");
    }
    else if (guess > secret)
    {
        printf("\nLower than this (Gay)");
    }
    else {
        printf("\nHigher than this (Nigga)");
    }
}
    return 0;
}