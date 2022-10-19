//
//  main.c
//  ch12-5
//
//  Created by Eric Wei on 01/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

int main(void)
{
    int i,j,m,n;
    char str[size];
    int  temp;
    srand((unsigned int)time(0));
    
    for(i=0;i<100;i++)
    {
        str[i] = (rand()%10+1);
    }
    
    printf("Before re-arrange, the array is:\n");
    for(j=0;j<100;j++)
    {
        printf("%d\t",str[j]);
        if((j+1)%10==0 && j!=0)
            printf("\n");
    }
    
    
    
    for(m=0;m<100;m++)
    {
        for(n=m+1;n<100;n++)
        {
            if(str[m] < str[n])
                {
                    temp = str[m];
                    str[m] = str[n];
                    str[n] = temp;
                }
            
    
        }
    }
    
    printf("\n");
    printf("After re-arrange:\n");
    
    for(i = 0; i < 100; i++)
       {
           printf("%d\t",str[i]);
           if((i+1)%10==0 && i!=0)
               printf("\n");

       }
    printf("\n");
       return 0;

}
