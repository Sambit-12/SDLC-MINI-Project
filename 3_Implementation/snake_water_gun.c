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

