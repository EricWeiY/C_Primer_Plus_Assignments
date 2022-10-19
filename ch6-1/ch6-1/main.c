//
//  main.c
//  ch6-1
//
//  Created by Eric Wei on 02/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//


#include<stdio.h>
#define size 26
int main(void)
{
    char letter[size];
    int i;
    char ch;
    for(i=1,ch='A';i<=26;ch++,i++)
    {
        letter[i] = ch;
        printf("%c\n",letter[i]);
    }
    return 0;

}


/*
//Second version
#include <stdio.h>
#define size 26
int main(void)
{
    char letter[26];
    int index;
    for (char ch='a',index=1; index<=26; ch++,index++)
    {
        letter[index]=ch;
    }
    for (index=26; index>=0;index--)
    {
        printf("%c\n",letter[index]);
    }
    return 0;
}
*/

