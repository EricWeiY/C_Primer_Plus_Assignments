//
//  main.c
//  ch9-6
//
//  Created by Eric Wei on 13/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void three(double * a, double * b, double * c);
void exchange(double * x, double * y);
int main(int argc, const char * argv[])
{
    double a, b, c;
     
        printf("Please enter three decimal numbers.\n");
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("Originally a= %.3f b= %.3f c=%.3f\n", a, b, c);
        three(&a, &b, &c);
        printf("Now a= %.3f b=%.3f c=%.3f\n", a, b, c);
     
        return 0;

}

void three(double *a, double *b, double *c)
{
    if(*a>*b)
        exchange(a,b);
    if(*b>*c)
        exchange(b,c);
    if(*a>*b)
        exchange(a,b);
}


void exchange(double * x, double * y)
{
    double temp;
    temp = * x;
    * x = * y;
    *y = temp;
}
