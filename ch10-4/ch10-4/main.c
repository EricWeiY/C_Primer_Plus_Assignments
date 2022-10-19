//
//  main.c
//  ch10-4
//
//  Created by Eric Wei on 18/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define SIZE 8
void arr_max(int arr[],int num);

int main(int argc, const char * argv[])
{
    int arr[SIZE];
    int i;
    printf("please input %d integers: \n", SIZE);

    for(i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
    
    arr_max(arr, SIZE);
    return 0;
}


void arr_max(int arr[],int num)
{
    int i,max,flag;
    max=0;
    
    for(i=0;i<num;i++)
    {
        if(max<arr[i])
            max=arr[i];
        flag=i;
    }
    printf("the max number flag is %d\n",i);
}
