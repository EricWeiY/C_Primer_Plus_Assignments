//
//  main.c
//  ch7-9
//
//  Created by Eric Wei on 07/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int div,num,div1,flag=1;
    printf("Enter a positive number:");
    while((scanf("%d",&num)==1&&num>0))
    {
        for(div=2;div<=num;div++)
        {
            for(div1=2;div1<=div;div1++)
            {
                if(div%div1==0 && div1!=div)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
               printf("%d\t",div);
            }
            flag = 1;
        }
        printf("\n");
        printf("Enter a positive number:");
    }
    return 0;
}
