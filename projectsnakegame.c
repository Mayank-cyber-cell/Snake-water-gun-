#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int snake, water, gun, user, over;
    srand(time(0));
    
    snake = 1;
    water = 2;
    gun = 3;
    over = 4;
    while (1)
    {
        int a = rand() % 3 + 1;
        printf("enter your choice 1 for snake 2 for gun  3 for water and 4 for exit ");
        scanf("%d", &user);
        if (user == 4)
        {
            printf("game is over now ");
            break;
        }
        else if (a == 1)
        {
            if (user == a)
            {
                printf("tie \n");
            }
            else if (user == 2)
            {
                printf("you win 7 crore !!!!   \n");
            }
            else
            {
                printf("you loose !! better luck next time \n");
            }
        }
        else if (a == 2)
        {
            if (user == a)
            {
                printf("tie\n");
            }
            else if (user == 2)
            {
                printf("you win  !! 7 crore  \n");
            }
            else
            {
                printf("you loose !! better luck next time \n");
            }
        }
        else if (a == 3)
        {
            if (user == a)
            {
                printf("tie\n ");
            }
            else if (user == 1)
            {
                printf("you win  7 crore !!\n");
            }
            else
            {
                printf("you loose better luck next time \n");
            }           
        }        
    }
    return 0;
}   