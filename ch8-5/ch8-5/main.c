//
//  main.c
//  ch8-5
//
//  Created by Eric Wei on 10/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    int guess=50;
    int max=100;
    int min=0;
    char ch;
    printf("Is %d right?\n",guess);
    
    while((ch=getchar())!='y')
    {
        if(ch == 'u')
        {
            printf("It is too high.\n");
            max=guess;
        }
        else
            if(ch == 'l')
        {
            printf("It is too low.\n");
            min=guess;
        }
        else
        {
            printf("Re-enter.\n");
            getchar();
            continue;
        }
        printf("I Guess %d\n",(max+min)/2);
        guess = (max + min) / 2;
        getchar();
    }
    printf("I Get Real Result %d.\n",guess);
    return 0;
}
