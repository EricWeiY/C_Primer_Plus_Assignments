//
//  main.c
//  ch10-8
//
//  Created by Eric Wei on 18/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define size 7
#define size1 3
void copy(double arr[],double a[],int num);

int main(void)
{
    int i;
    double source[size];
    double target[size1];
    printf("Please input %d double numbers:\n", size);
    for(i = 0; i < size; i++)
        scanf("%lf", &source[i]);
        copy(target, source, size);
       
}


void copy(double *arr,double *a,int num)
{
    int i,j;
    for(i=2,j=0;i<5;i++,j++)
    {
        *(arr+j)=*(a+i);
        printf("target[%d] = %.2lf\n", j, *(arr+j));
    }
}
