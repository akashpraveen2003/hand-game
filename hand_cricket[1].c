#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// enter numbers from 1 to 6
int main()
{

    char y;
    int choice,bat1=0,bat2=0;
    int rball=6,ball=1,bowl2=0,bowl1=0,bat2_=0,bat1_=0;
    int upper=6,lower=1;
    printf("WELCOME TO THE FUN GAME\n");
    printf("INFO ABOUT THIS GAME:\n1)it is a superover match\n2)score high to win the game\n");
    printf("ENTER YOUR CHOICE:\n1)BATTING \n2)BOWLING\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("YOU HAVE DECIDED TO BAT FIRST:\n");
        printf("**********************************\n");
        /*   printf("press y to continue:\n");
           scanf("%c",&y);
           y=getchar();
           system("clear");*/

        {
            while(rball!=0)
            {

bat1:
                printf("remaining balls = %d\n",rball);
                printf("%d ball:\n",ball);
                printf("YOU:");
                scanf("%d",&bat1);
                if(bat1<=0 || bat1>6)
                {
                    printf("enter again\n");
                    goto bat1;
                }
                srand(time(NULL));
                bowl2=(rand()%(upper-lower+1))+lower;
                printf("OPPONENT=%d\n",bowl2);

                if(bat1==bowl2)
                {
                    printf("you are OUT!!!!\n");
                    break;
                }
                bat1_=bat1_+bat1;
                printf("your score=%d",bat1_);
                printf("\n--------------------------\n");
                rball--;
                ball++;
            }
            printf("your score is %d\n",bat1_);
            printf("opponent need %d runs to win\n",bat1_+1);
        }


        printf("END OF FIRST INNINGS\n");
        printf("************************************\n");
        printf("YOUR ARE GOING TO BOWL\n");
        rball=6,ball=1;
        while(rball!=0)
        {
bowl1:
            printf("remaining balls = %d\n",rball);
            printf("%d ball:\n",ball);
            srand(time(NULL));
            bat2=(rand()%(upper-lower+1))+lower;
            printf("YOU:");
            scanf("%d",&bowl1);
            if(bowl1<=0 || bowl1>6)
            {
                printf("invalid input\n ENTER AGAIN:\n");
                goto bowl1;

            }
            printf("OPPONENT=%d\n",bat2);
            if(bowl1==bat2)
            {
                printf("BOOYAH!! WICKET!!!!!\n");
                break;
            }
            bat2_=bat2_+bat2;
            printf("opp score=%d\n",bat2_);
            printf("________________________\n");
            if(bat2_>bat1_)
            {
                printf("OPPONENT WON:\n");
                break;
            }
            rball--;
            ball++;

        }
        if(bat2_<bat1_)
        {
            printf("YOU WON THE MATCH BY %d runs:\n",bat1_-bat2_);
        }
        if(bat2_==bat1)
        {
            printf("MATCH IS DRAW\n");
        }
        printf("********END OF THE MATCH***********");
    }
    if(choice==2)
    {
        printf("YOU HAVE DECIDED TO BOWL FIRST:\n");
        printf("**********************************\n");
        {
            while(rball!=0)
            {
bowl2:
                printf("remaining balls = %d\n",rball);
                printf("%d ball:\n",ball);
                srand(time(NULL));
                bat2=(rand()%(upper-lower+1))+lower;
                scanf("%d",&bowl1);
                if(bowl1<=0 || bowl1>6)
                {
                    printf("invalid input\n ENTER AGAIN:\n");
                    goto bowl2;

                }
                printf("OPPONENT=%d\n",bat2);
                if(bowl1==bat2)
                {
                    printf("BOOYAH!! WICKET!!!!!\n");
                    break;
                }
                bat2_=bat2_+bat2;
                printf("opp score=%d\n",bat2_);
                printf("------------------------------------\n");
                rball--;
                ball++;
            }
            printf("you need %d runs to win\n",bat2_+1);
            printf("END OF THE FIRST INNING'S\n");
            printf("************************************");
            printf("YOU ARE GOING TO BAT:\n");
        }
        rball=6,ball=1;
        while(rball!=0)
        {
bat2:
            printf("remaining balls = %d\n",rball);
            printf("%d ball:\n",ball);
            printf("YOU:");
            scanf("%d",&bat1);
            if(bat1<=0 || bat1>6)
            {
                printf("enter again\n");
                goto bat2;
            }
            srand(time(NULL));
            bowl2=(rand()%(upper-lower+1))+lower;
            printf("OPPONENT=%d\n",bowl2);

            if(bat1==bowl2)
            {
                printf("you are OUT!!!!\n");
                break;
            }
            bat1_=bat1_+bat1;
            if(bat1_>bat2_)
            {
                printf("HURRAY!!YOU WON THE MATCH \n");
                break;
            }
            printf("your score=%d",bat1_);
            printf("\n________________________\n");
            rball--;
            ball++;
        }
        if(bat1_<bat2_)
        {
            printf("BETTER LUCK NEXT TIME:\n");
            printf("OPPONENT WON BY %d runs\n",bat2_-bat1_);
        }
        if(bat1_==bat2_)
        {
            printf("MATCH IS DRAW\n");
        }

        printf("END OF THE MATCH\n");
    }
    return 0;
}
