//
//  main.c
//  ch10-6
//
//  Created by Eric Wei on 18/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void change(double arr[],int num);

int main(int argc, const char * argv[])
{
    int i;
    int num;
    double arr[] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
    num = sizeof(arr) / sizeof(arr[0]);
    
    for (i = 0;i < num;i++)
        printf("arr[%d] = %lf\n", i, arr[i]);
    
    change(arr, num);
    
    printf("交换后：\n");
    for (i = 0;i < num;i++)
        printf("arr[%d] = %lf\n", i, arr[i]);
    return 0;
}


void change(double arr[],int num)
{
    int i;
    double temp;
    for(i=0;i<num/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[num-1-i];
        arr[num-1-i]=temp;
    }
}
