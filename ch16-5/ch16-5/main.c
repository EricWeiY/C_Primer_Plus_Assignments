//
//  main.c
//  ch16-5
//
//  Created by Eric Wei on 18/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define LEN 30

void random_pick(int ar[], int length, int pick);

int main(void)
{
    int i,pick;
    int ar[LEN];
    for(i=0; i<LEN; i++)
    {
        ar[i] = i+1;
    }
    printf("Enter the number that you want pick:");
    scanf("%d",&pick);
    
    random_pick(ar, LEN, pick);
    return 0;
}

void random_pick(int ar[], int length, int pick)
{
    int i,count = 0;
    srand((unsigned int)time(0));
    for(; pick>0; pick--)
    {
        i = rand() % length;
        printf("%d ",ar[i]);
        
        if (++count % 10 == 0)
           {
               putchar('\n');
           }
    }
    
   
    putchar('\n');
}
