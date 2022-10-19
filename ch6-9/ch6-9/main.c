//
//  main.c
//  ch6-9
//
//  Created by Eric Wei on 03/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <math.h>
float result(float i,float j);

int main(void)
{
    float m,n;
    printf("please enter two decimal numbers:");
    while(scanf("%f %f",&m,&n)==2)
    {
        printf("%f\n",result(m,n));
        printf("please enter two float numbers:");
        scanf("%f,%f",&m,&n);
    }
        return 0;
}

float result(float i,float j)
{
    float result;
    result = (i-j)/(i*j);
    
    return result;
}
