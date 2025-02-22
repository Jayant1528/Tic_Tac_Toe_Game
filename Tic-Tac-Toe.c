#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

char tic[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void drawboard();

int main()
{
    int player = 1, i, choice;
    char mark;
    do {
        drawboard();
        player = (player % 2)? 1 : 2;
        printf("player %d, enter the choice : ",player);
        scanf("%d",&choice);
        mark = (player == 1) ? 'x' : '0';
        if (choice == 1 && tic[1] == '1')
        {
            tic[1] = mark;
        }
        else if(choice == 2 && tic[2] == '2')
        {
            tic[2] = mark;
        }
        else if(choice == 3 && tic[3] == '3')
        {
            tic[3] = mark;
        }
        else if(choice == 4 && tic[4] == '4')
        {
            tic[4] = mark;
        }
        else if(choice == 5 && tic[5] == '5')
        {
            tic[5] = mark;
        }
        else if(choice == 6 && tic[6] == '6')
        {
            tic[6] = mark;
        }
        else if(choice == 7 && tic[7] == '7')
        {
            tic[7] = mark;
        }
        else if(choice == 8 && tic[8] == '8')
        {
            tic[8] = mark;
        }
        else if(choice == 9 && tic[9] == '9')
        {
            tic[9] = mark;
        }
        else
        {
            printf("Invalid option !");
            player--;
            getch();
        }
        i = checkwin();
        player++;

    }
    while (i == -1);

    if(i == 1)
    {
        printf("==>Player %d won",--player);
    }
    else
    {
        printf("==>Game draw");
    }
    getch();
    return 0;
}

int checkwin()
{
    if(tic[1] == tic[2] && tic[2] == tic[3])
    {
        return 1;
    }
    else if(tic[4] == tic[5] && tic[5] == tic[6])
    {
        return 1;
    }
    else if(tic[7] == tic[8] && tic[8] == tic[9])
    {
        return 1;
    }
    else if(tic[1] == tic[4] && tic[4] == tic[7])
    {
        return 1;
    }
    else if(tic[2] == tic[5] && tic[5] == tic[8])
    {
        return 1;
    }
    else if(tic[3] == tic[6] && tic[6] == tic[9])
    {
        return 1;
    }
    else if(tic[1] == tic[5] && tic[5] == tic[9])
    {
        return 1;
    }
    else if(tic[3] == tic[5] && tic[5] == tic[7])
    {
        return 1;
    }
    else if(tic[1] !='1' && tic[2] !='2' && tic[3] !='3' && tic[4] !='4' && tic[5] !='5' && tic[6] !='6' && tic[7] !='7' && tic[8] !='8' && tic[9] !='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void drawboard()
{
    system("cls");
    printf("\n\n");
    printf("=====Tic Tac Toe=====\n\n");
    printf("Player 1 : (x) - Player 2 : (0)\n\n\n");
    printf(" %c | %c | %c \n",tic[1],tic[2],tic[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n",tic[4],tic[5],tic[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n",tic[7],tic[8],tic[9]);
}