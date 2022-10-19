//
//  main.c
//  ch9-4
//
//  Created by Eric Wei on 13/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

double average(double i, double j);

int main(void)
{
    double i,j,aver;
    printf("enter two numbers:");
    while((scanf("%lf %lf",&i,&j))==2)
    {
        aver = average(i,j);
        printf("the average is %lf\n",aver);
        printf("enter two numbers:");
    }
    return 0;
}

double average(double i, double j)
{
    double ave,aver;
    ave=((1/i)+(1/j))/2;
    aver=1/ave;
    return aver;
}
