//
//  main.c
//  ch11-9
//
//  Created by Eric Wei on 27/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void reverse(char * s1, int num);

int main(void)
{
    int num;
    char s2[100];
    char s1[100];
    int i,j,k,l;
    printf("Please enter the length of sting:");
    scanf("%d",&num);
    getchar();
    printf("Please enter a string:");
    
    for(i=0;i<num;i++)
    {
        s1[i]=getchar();
    }
    
    for(k=0,j=num-1;j>=0;k++,j--)
    {
        s2[k]=s1[j];
    }
    
    for(l=0;l<=num;l++)
    {
        putchar(s2[l]);
    }
    printf("\n");
    return 0;
}

/*
void reverse(char * s1, int num)
{
    char * s2;
    int i,j,k,l,len_s1,len_s2;
    printf("Please enter a string:");
    for(i=0;i<num;i++)
    {
        s1[i]=getchar();
    }
    len_s1 = strlen(s1);
    for(k=0,j=len_s1;j>=0;k++,j--)
    {
        s2[k]=s1[j];
    }
    len_s2 = strlen(s2);
    for(l=0;l<len_s2;l++)
    {
        putchar(s2[l]);
    }
    
}
*/
