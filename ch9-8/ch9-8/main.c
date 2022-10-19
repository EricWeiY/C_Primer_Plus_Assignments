//
//  main.c
//  ch9-8
//
//  Created by Eric Wei on 13/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
double power(double m,int n);

int main(void)
{
    double x,xpow;
    int p;
    printf("Enter a number and a power:");
    while((scanf("%lf %d",&x,&p))==2)
    {
        if(x==0 && p==0)
        {
            printf("0 to the power of 0 is undefined,processed as 1\n");
        }
        else
        {
            xpow=power(x,p);
            printf("%lf to the power %d is %lf\n", x,p,xpow);
        }
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("bye\n");
    return 0;
}

    



double power(double m,int n)
{
    double pow=1;
    int num;
    if(m==0)
        return 0;
    if(n==0)
        return 1;
    else
        if(n<0)
            for(num=1;num<=-n;num++)
            {
                pow*=(1/m);
            }
        else
            for(num=1;num<=n;num++)
            {
                pow*=m;
            }
    return pow;
}
