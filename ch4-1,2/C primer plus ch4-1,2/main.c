//
//  main.c
//  C primer plus ch4-1,2
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
    printf("enter your last name:");
    scanf("%s",&last);
    printf("enter your first name:");
    scanf("%s",&first);
    printf("\"%*s %*s\"\n",strlen(first)+3,first,strlen(last)+3,last);
}
