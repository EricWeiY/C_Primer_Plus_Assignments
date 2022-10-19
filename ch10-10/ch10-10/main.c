//
//  main.c
//  ch10-10
//
//  Created by Eric Wei on 19/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void add(double target[], double source1[], double source2[],int num);

int main(int argc, const char * argv[])
{
    double source1[4] = { 2, 4, 5, 8 };
    double source2[4] = { 1, 0, 4, 6 };
    double target[4];

    add(target, source1, source2, 4);
}


void add(double target[], double source1[], double source2[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        target[i] = source1[i] + source2[i];
        printf("%lf ", source1[i]);
        printf("%lf ", source2[i]);
        printf("The sum is %lf ", target[i]);
        printf("\n");
    }
}
