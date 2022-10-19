//
//  main.c
//  ch11-2(2)
//
//  Created by Eric Wei on 16/09/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
char * get_input(char * str, int num);

int main(int argc, const char * argv[])
{
        int num;
        char str[100] ;
        printf("Please enter the length of the string:");
        scanf("%d",&num);
        while(getchar()!='\n')
            continue;
        printf("Please enter the string:");
        char * st = get_input(str,num);
        fputs(st,stdout);
        printf("\n");
        return 0;
}





char * get_input(char * str, int num)
{
    int i = 0;
    while(i<num)
    {
        str[i] = getchar();
        if(str[i] == EOF)
        {
            str[i] = '\0';
            break;
        }
        if(isspace(str[i]))
        {
            str[i] = '\0';
            break;
        }
        
        i++;
    }
    return str;
}
