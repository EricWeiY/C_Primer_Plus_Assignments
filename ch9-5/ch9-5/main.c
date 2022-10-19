//
//  main.c
//  ch9-5
//
//  Created by Eric Wei on 13/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

void large_of(double * a,double * b);

int main(void)
{
    double m,n;
    printf("Enter two decimal numbers:\n");
    scanf("%lf %lf",&m,&n);
    printf("Two numbers are %lf and %lf.\n",m,n);
    large_of(&m,&n);
    printf("Now the value is %lf and %lf.\n",m,n);
    return 0;
}

void large_of(double * a,double * b)
{
    if(* a > * b)
        * b = * a;
    else
        * a = * b;
}
