//
//  main.c
//  Ch4-6
//
//  Created by Eric Wei on 28/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[40];
    char last[40];
    printf("enter the first name:");
    scanf("%s",&first);
    printf("enter the last name:");
    scanf("%s",last);
    printf("%s %s\n",first,last);
    printf("%-*d %-*d\n",strlen(first),strlen(first),strlen(last),strlen(last));
    return 0;
}
