//
//  main.c
//  ch8-3
//
//  Created by Eric Wei on 09/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch = 0;
    int n_upper = 0;
    int n_lower = 0;

    printf("enter a sentence:");
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            n_lower++;
        }
        else if (isupper(ch))
        {
            n_upper++;
        }
    }

    printf("There are %d upper character and %d lower charecter.\n", n_upper, n_lower);

    return 0;
}
