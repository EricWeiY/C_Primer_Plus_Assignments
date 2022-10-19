//
//  main.c
//  ch12-7
//
//  Created by Eric Wei on 02/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
static int rollem(int sides);
int roll_n_dice(int dice, int sides);


int main(void)
{
    int sets,sides,dice,i,num;
    printf("Enter how many sets:");
    while((scanf("%d",&sets))==1)
    {
        printf("Enter how many sides:");
        scanf("%d",&sides);
        printf("Enter how many dices:");
        scanf("%d",&dice);
        printf("Here are %d sets of %d %d-sided throws.\n",sets,dice,sides);
        for(i=0;i<sets;i++)
        {
            num = roll_n_dice(dice,sides);
            printf("%d\t",num);
        }
        printf("\n");
        while(getchar() != '\n');
        printf("How many sets? ");
    }
}




 static int rollem(int sides)
 {
     int roll;
     roll = rand() % sides + 1;
  
     return roll;
 }
  
 int roll_n_dice(int dice, int sides)
 {
     int total = 0;
     int d = 0;
     if (sides < 2)
     {
         printf("Need at least 2 sides.\n");
         return -2;
     }
     if (dice < 1)
     {
         printf("Need at least 1 dice.\n");
         return -1;
     }
     for ( d = 0; d < dice; d++)
     {
         total += rollem(sides);
     }
  
     return total;
 }

