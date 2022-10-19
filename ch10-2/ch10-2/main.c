//
//  main.c
//  ch10-2
//
//  Created by Eric Wei on 17/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void copy_arr(double target1[], double source[], int num);
void copy_ptr(double * target2, double * source, int num);
void copy_ptrs(double * target3, double * source, int * num);

int main(void)
{
    double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    double target1[5];
    double target2[5];
    double target3[5];
    int i;
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source+5);
    printf("target1:");
        for (i = 0; i < 5; i++)
        {
            printf(" %.2lf", target1[i]);
        }
    printf("\n");

    printf("target2:");
        for (i = 0; i < 5; i++)
        {
            printf(" %.2lf", target2[i]);
        }
    printf("\n");

    printf("target3:");
        for (i = 0; i < 5; i++)
        {
            printf(" %.2lf", target3[i]);
        }
    printf("\n");
    return 0;
}



void copy_arr(double target1[], double source[], int num)
{
    int i;
    for(i=0;i<num;i++)
        target1[i]=source[i];
}

void copy_ptr(double * target2, double * source, int num)
{
    int j;
    for(j=0;j<num;j++)
        *(target2+j)=*(source+j);
}

void copy_ptrs(double * target3, double * source, int * num)
{
    while(source<num)
        *target3++=*source++;
}
