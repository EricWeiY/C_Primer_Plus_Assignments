//
//  main.c
//  ch10-5
//
//  Created by Eric Wei on 18/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define SIZE 8
void arr_di(int arr[],int num);

int main(int argc, const char * argv[])
{
    int arr[SIZE];
    int i;
    printf("please input %d integers: \n", SIZE);

    for(i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
    
    arr_di(arr, SIZE);
    return 0;
}


void arr_di(int arr[],int num)
{
    int i,max,min,di;
    max=0;
    
    for(i=0;i<num;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    
    min=max;

    for(i=0;i<num;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    di=max-min;
    printf("the difference is %d\n",di);
}
