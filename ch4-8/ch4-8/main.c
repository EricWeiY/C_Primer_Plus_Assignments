//
//  main.c
//  ch4-8
//
//  Created by Eric Wei on 28/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define l (3.785)
#define km (1.609)
int main(void)
{
    float g;
    float mile;
    float rate;
    float rate2;
    
    rate=mile/g;
    rate2=(mile*km)/(l*g);
    
    printf("enter the distance travelled:\n");
    scanf("%f",&mile);
    
    printf("enter the fuel used:\n");
    scanf("%f",&g);
    
    printf("rate is %f\n",rate);
    printf("rate for europe is %.1f\n",rate2);
    return 0;
}
