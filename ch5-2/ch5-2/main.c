//
//  main.c
//  ch5-2
//
//  Created by Eric Wei on 30/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    printf("please enter a integer:");
    scanf("%d",&a);
    b=a+11;
    while(a<b)
    {
        printf("%d\t",a++);
    }
    return 0;
    
}
