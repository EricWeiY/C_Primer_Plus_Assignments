//
//  main.c
//  ch5-8
//
//  Created by Eric Wei on 31/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("This program computes moduli.\n");
    printf("Enter a integer to serve as the second operand:");
    scanf("%d",&b);
    printf("Now enter the first operand:");
    scanf("%d",&a);
    while(a>0)
    {
        c=a%b;
        printf("%d %% %d is %d\n",a,b,c);
        printf("Enter next number for first operand:");
        scanf("%d",&a);
    }
    printf("Done");
    return 0;
}
