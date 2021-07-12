/**
 * @file snake_water_gun.c
 * @author Sambit Nayak (nayaksambit99@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-07-11
 *
 * @copyright Copyright (c) 2021
 *
 */
#include<stdio.h>
#include<stdlib.h>
int SWG(char you,char comp)
{
        if(you==comp)
        {
            printf("You and Computer chose same item\n");
            printf("GAME DRAW\n");
            return 0;
        }
        if(you=='s' && comp=='w')
        {
            printf("Snake beats Water\n");
            printf("YOU WON\n");
            return 1;
        }
        else if(you=='w' && comp=='s')
        {
            printf("Snake beats Water\n");
            printf("YOU LOSE\n");
            return -1;
        }

        if(you=='w' && comp=='g')
        {
            printf("Water beats Gun\n");
            printf("YOU WON\n");
            return 1;
        }
        else if(you=='g' && comp=='w')
        {
            printf("Water beats Gun\n");
            printf("YOU LOSE\n");
            return -1;
        }
        if(you=='s' && comp=='g')
        {
            printf("Gun beats Snake\n");
            printf("YOU LOSE\n");
            return -1;
        }
        else if(you=='g' && comp=='s')
        {
            printf("Gun beats Snake\n");
            printf("YOU WON\n");
            return 1;
        }

}
void main()
{
    char you,comp;
    int result=0,i=1,count=0,h;
    printf("-----------WELCOME TO GAME-------------\n");
    printf("Enter how many times you want to play: ");
    scanf("%d",&h);
    printf("Enter Choice From 'S=Snake','W=Water' OR 'G=Gun' for %d times\n",h);

    while(i<=h){
            int number=rand()%99+1;
            if(number<33)
            {
                comp='s';
            }
            else if(number>33 && number<66)
            {
                comp='w';
            }
            else
            {
                comp='g';
            }

                printf("\n----------ENTER--------------\n");
                printf("Please choose:\n");
              hello:
                scanf("%c",&you);
               if(you!='s'&&you!='S'&&you!='w'&&you!='W'&&you!='g'&&you!='G'){
                goto hello;
                }
                printf("Computer Chooses:%c\n",comp);
                result = SWG(you,comp);
                count+=result;
                printf("your score is:%d",result);

                printf("\n----------%d time-------------\n",i);
                i++;
    }


          printf("your final score is:%d",count);
}
//Sambit Nayak
