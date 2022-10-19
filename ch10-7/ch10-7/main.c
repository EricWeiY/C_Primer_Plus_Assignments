//
//  main.c
//  ch10-7
//
//  Created by Eric Wei on 18/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define col 4
#define row 3
void copy(double c[][col], double arr[][col], int num);

int main(void)
{
    double target[row][col];
    double source[row][col] =
    {
        {1.1, 2.2, 3.3, 4.4},
        {2.2, 3.3, 4.4, 5.5},
        {3.3, 4.4, 5.5, 6.6}
    };

    copy(target, source, row);
    return 0;
}



void copy(double c[][col], double arr[][col], int num)
{
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=arr[i][j];
            printf("target[%d][%d] = %.1lf ", i, j, c[i][j]);
        }
        printf("\n");
    }
}

/*
void copy(double (*c)[col], double (*arr)[col], int num)
{
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<col;j++)
        {
            *(*(c+i)+j)=*(*(arr+i)+j);
            printf("target[%d][%d] = %.1lf ", i, j, *(*(c+i)+j));
        }
        printf("\n");
    }
}
*/
