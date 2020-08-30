#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
    int guess,numguessed=1,Random_number;

    srand(time(0));
    Random_number = rand()%100 + 1;

    // printf("The Random No. Generated Is %d",Random_number);

    while(guess!= Random_number){
        printf("\nGuess a number between  1 to 100 : \t");
        scanf("%d",&guess);

        if(guess>Random_number){
            printf("\nThe Number Guessed Is higher Than The number\n");
        }
        else if(guess<Random_number){
            printf("\nThe Number Guessed Is Less Than The number\n");
        }
        else
        {
            printf("Hey Welldone You did it in %d Attempts \n",numguessed);
        }

        numguessed += 1;
        
    }

    return 0;
}