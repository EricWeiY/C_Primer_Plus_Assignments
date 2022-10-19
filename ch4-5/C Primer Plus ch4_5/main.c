//
//  main.c
//  C Primer Plus ch4_5
//
//  Created by Eric Wei on 28/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    float size;
    float speed;
    float time;
    time = size/speed;
    printf("enter the size:");
    scanf("%f",&size);
    printf("enter the speed:");
    scanf("%f",&speed);
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n",speed,size,time);
    return 0;
}
