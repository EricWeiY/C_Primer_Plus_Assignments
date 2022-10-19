//
//  main.c
//  ch11-6
//
//  Created by Eric Wei on 26/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define size 100
int is_within(char * str, char st);

int main(void)
{
    char str[size];
    char st;
    int i;
    printf("Enter a string:");
    fgets(str,size,stdin);
    printf("Enter the finding letter: ");
    scanf("%c",&st);
    i=is_within(str, st);
    if(i==0)
        printf("Not found.\n");
    else
        printf("Found it, the letter is %c\n",st);
    return 0;
    
}

int is_within(char * str, char st)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i] == st)
            return 10;
        i++;
    }
    return 0;
}
