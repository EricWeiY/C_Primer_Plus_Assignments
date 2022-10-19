//
//  main.c
//  ch11-2
//
//  Created by Eric Wei on 25/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
char * get_input(char * str, int num);
//void get_input(char * str, int num);

int main(int argc, const char * argv[])
{
        int num;
        char str[100] ;
        printf("Please enter the length of the string:");
        scanf("%d",&num);
        while(getchar()!='\n')
            continue;
        char * st = get_input(str,num);
        fputs(st,stdout);
        printf("\n");
        return 0;
}


char * get_input(char str[], int num)
{

    int i;
    printf("Please enter the string:");
    for(i=0;i<num;i++)
    {
        str[i]=getchar();
        if(isspace(str[i]))
        {
            str[i]='\0';
            break;
        }
    }
    char * st = str;
    return st;
}


//char * get_input(char * str, int num)
//{
//    char * st;
//    st = str;
//    printf("Please enter the string:");
//    if(fgets(str,num+1,stdin))
//    {
//       while(*str)
//       {
//           if(isspace(*str))
//           {
//               *str = '\0';
//               break;
//           }
//           str++;
//       }
//    }
//    return st;
//}
