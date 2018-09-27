#include <stdio.h>
#include <stdlib.h>

int main()
{
    int isplayeralive = 1;
    int currenthp = 5;

    while(isplayeralive == 1)
    {
    //Prompt user if they want to attack
    printf("Attack Player? Y or N:  ");

    //Get user input from console
    char attackoption;
    scanf("%c", &attackoption);
    switch(attackoption)
    {
    case 'Y':
    case 'y':
        currenthp--;
        printf("Player takes 1 damage.\nRemaining HP: %d", currenthp);

    case 'N':
    case 'n':
        printf("You passed! Player takes 0 damage.\nRemaining HP: %d\n", currenthp);
    }
    if(currenthp == 0)
    {
        isplayeralive = 0;
        printf("Player is dead. RIP.");
    }


    }




    return 0;
}
