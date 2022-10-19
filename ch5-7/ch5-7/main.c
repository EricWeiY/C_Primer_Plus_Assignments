//
//  main.c
//  ch5-7
//
//  Created by Eric Wei on 31/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void pound(double n);
int main(void)
{
    double x;
    printf("enter a number:");
    scanf("%lf",&x);
    pound(x);
       
    return 0;
}


void pound(double n)
{
       printf("%lf", n * n * n);
}
