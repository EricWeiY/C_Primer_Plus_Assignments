//
//  main.c
//  ch5-9
//
//  Created by Eric Wei on 31/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void temperature(double c);
int main(void)
{
    double n;
    printf("enter a temperature:");
    while(scanf("%lf", &n) == 1)
    {
        temperature(n);
    }
    printf("error\n");
    return 0;
}
void temperature(double c)
{
    float z,y;
    const float x = 273.16;
    y = 5.0 / 9.0 * (c -32.0);
    z=y+x;
    printf("%.2f\n%.2f\n%.2f\n", y, z, c);
}
