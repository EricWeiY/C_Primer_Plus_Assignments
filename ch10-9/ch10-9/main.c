//
//  main.c
//  ch10-9
//
//  Created by Eric Wei on 18/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define col 5
#define row 3
void copy_arr_2d(double target[][5], double source[][5], int rows);
void print_arr_2d(double source[][5], int rows);

int main(void)
{
    double source[3][5] =
    {
        {12.3, 32.1, 31.2, 677.6, 325.6},
        {23.1, 568.2, 23.5, 32.4, 88.67},
        {235.8, 64.5, 645.23, 2.3, 23.5}
    };
    double target[3][5];
    copy_arr_2d(target, source, 3);
    print_arr_2d(source, 3);
    print_arr_2d(target, 3);
}


void copy_arr_2d(double target[][5], double source[][5], int rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < 5; j++)
            target[i][j] = source[i][j];
    }
}


void print_arr_2d(double source[][5], int rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < 5; j++)
            printf("%.2lf ", source[i][j]);
    }
    printf("\n");
}
