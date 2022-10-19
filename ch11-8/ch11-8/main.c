//
//  main.c
//  ch11-8
//
//  Created by Eric Wei on 26/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define size 100
char * find(char * s1, char * s2);

int main(void)
{
    char s1[size];
    char s2[size];
    char * s3;
    printf("Enter the first string:");
    fgets(s1,size,stdin);
    printf("Enter the second string:");
    fgets(s2,size,stdin);
    s3 = find(s1,s2);
    if(s3==NULL)
        printf("Not found.");
    else
    {
        printf("The word is %s",s2);
        printf("Address is %p\n",s3);
    }
    
    
}


char * find(char * s1, char * s2)
{
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        while(s1[i]==s2[j])
        {
            i++;
            j++;
            if(s2[j]=='\0')
            {
                return &s1[i];
            }
        }
        i++;
    }
    return NULL;
}
