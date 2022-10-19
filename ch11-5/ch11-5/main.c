//
//  main.c
//  ch11-5
//
//  Created by Eric Wei on 25/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define size 100
char * find_find(char str[], char find);

int main(void)
{
    char str[size];
    char find;
//  int i;
//  int n;
    char * ret_num;
//    printf("Enter the length of string:");
//    scanf("%d",&n);
    printf("Enter a string:");
    
    fgets(str,size,stdin);
    /*
    for(i=0;i<n+1;i++)
    {
        str[i]=getchar();
    }
    while(getchar()=='\n')
        break;
    */
    
    printf("Enter the finding word: ");
    scanf("%c",&find);
    
    ret_num = find_find(str,find);
    
    if(ret_num == NULL)
        printf("Cannot find the word.");
    else
    {
        printf("The word is:");
        putchar(find);
        printf("\n");
        printf("The address of the word is %p\n",ret_num);
    }
    return 0;
}


char * find_find(char str[], char find)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==find)
            return &str[i];
        i++;
    }
    return NULL;
}

