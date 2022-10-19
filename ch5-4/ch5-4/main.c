//
//  main.c
//  ch5-4
//
//  Created by Eric Wei on 31/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define c1 0.0328
#define c2 0.0833
int main(void)
{
    float height, inche;
    int feet;
    printf("enter your height in centimeter:");
    scanf("%f",&height);
    while(height>0)
    {
        feet = height * c1;
        inche = (height*c1-feet)/c2;
        printf("%.1f cm = %d feet, %.1f inches\n",height,feet,inche);
        printf("enter your height in centimeter:");
        scanf("%f",&height);
    }
    printf("re-enter a height");
    return 0;
}
