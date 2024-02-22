/*
Rules:
-two dies roll.
-compute the sum.
-if you get 7 or 11 at the first row you win.
-if you get 2,3,12 you lose the game.
-if you roll and get 4,5,6,8,9,10 you got this point  
and you should roll that number that you got to win the game but if you get 7 
before you got that number you will lose.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    printf("Welcome To The Craps Game.\n\n");

    int die1, die2, sum, point;
    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;
    sum = die1 + die2;

    if(sum == 7 || sum == 11) {
        printf("You have won the game.\n");
        printf("Because you have rolled %d\n", sum);
        exit(0);
    }

    if(sum == 2 || sum == 3 || sum == 12) {
        printf("You have lost the game.\n");
        printf("Because you have rolled %d\n", sum);
        exit(0);
    }

    if(sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10) {
        point = sum;
        printf("Your point is %d\n", point);
        
        while(1) {
            die1 = (rand() % 6) + 1;
            die2 = (rand() % 6) + 1;
            sum = die1 + die2;
            
            if(sum == point) {
                printf("You have won the game.\n");
                printf("Because you have rolled %d\n", sum);
                break;    
            } 
			else if(sum == 7) {
                printf("You have lost the game.\n");
                printf("Because you have rolled %d\n", sum);
                break;
            }
        }
    }

    return 0;
}
