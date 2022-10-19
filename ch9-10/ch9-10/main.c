//
//  main.c
//  ch9-10
//
//  Created by Eric Wei on 14/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void to_base_n(int n, int p);

int main(void)
{
    int num,rad;
    printf("Please enter an integer and a radix(q to quit).\n");
    while (scanf("%d %d",&num, &rad)==2)
    {
        if (rad < 2 || rad>10)
            printf("The radix must be between 2 and 10");
        else
        {
            printf("Conversion result: ");
            to_base_n(num, rad);
            putchar('\n');
        }
        printf("Enter an integer and a radix.(q to quit)\n");
    }
    printf("bye\n");
    return 0;
}


void to_base_n(int n, int p)
{
    int r;
    r = n % p;
    if (n >= p)
        to_base_n(n / p, p);
    printf("%d", r);
}
