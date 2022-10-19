//
//  main.c
//  ch11-7
//
//  Created by Eric Wei on 26/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char * mystrncpy(char * s1, char * s2, int n);

int main(void)
{
    char s1[100];
    char s2[100];
    int n;
    printf("Enter the target string:");
    fgets(s1,100,stdin);
    printf("Enter the copying length:");
    scanf("%d",&n);
    getchar();
    mystrncpy(s1, s2, n);
    printf("Now the string is:\n");
    puts(s1);
    return 0;
}

char * mystrncpy(char * s1, char * s2, int n)
{
    int i,len;
    len = strlen(s1);
    printf("Enter the string:");
    for(i=0;i<n+1;i++)
    {
        s2[i]=getchar();
        s1[len+i]=s2[i];
    }
    return s1;
}
