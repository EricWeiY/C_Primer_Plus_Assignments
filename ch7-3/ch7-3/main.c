//
//  main.c
//  ch7-3
//
//  Created by Eric Wei on 07/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num,even = 0,odd = 0,sum_even=0,sum_odd=0;
    printf("enter a integar:");
    while(scanf("%d",&num)==1)
    {
        if(num==0)
            break;
        
        else
            if(num%2==0)
            {
                even++;
                sum_even+=num;
            }
            else
            {
                odd++;
                sum_odd+=num;
            }
    }
    printf("%d even number and %d odd number.\n",even,odd);
    printf("%d is average of odd number and %d is average of even number.",sum_odd/odd,sum_even/even);
    return 0;
}
