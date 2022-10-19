//
//  main.c
//  ch6-7
//
//  Created by Eric Wei on 03/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define size 80
int main(void)
{
    int num,i;
    char word[size];
    printf("Enter a word:");
    scanf("%s",&word);
    num = strlen(word);
    for(i=num;i>=0;i--)
    {
        printf("%c",word[i]);
    }
    printf("\n");
    return 0;
}
