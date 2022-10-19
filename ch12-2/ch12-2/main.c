//
//  main.c
//  ch12-2
//
//  Created by Eric Wei on 01/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void set_mode(int mode);
void get_info(void);
void show_info(void);
int main(void)
{
    int mode ;
 
    printf("Enter 0 for metric mode, 1 for US mode:");
    scanf("%d" , &mode) ;
    while (mode >= 0)
    {
        set_mode(mode) ;
        get_info();
        show_info();
        printf("Enter 0 for metric mode , 1 for US mode:");
        scanf("%d" , &mode);
    }
    printf("Done.\n");
 
    return 0 ;
}

static int m;
static int distance;
static double fuel;

void set_mode(int mode)
{
    if(mode == 1)
        m = mode;
    else
        if(mode == 0)
            m = mode;
    else
        printf("Invalid value, please enter the value again.");
}

void get_info(void)
{
    if(m == 0)
    {
        printf("Enter distance travelled in kilometers:");
        scanf("%d",&distance);
        getchar();
        printf("Enter fuel consumed in liters:");
        scanf("%lf",&fuel);
        getchar();
    }
    if(m == 1)
    {
        printf("Enter the distance travelled in miles:");
        scanf("%d",&distance);
        getchar();
        printf("Enter fuel consumed in gallons:");
        scanf("%lf",&fuel);
        getchar();
    }
}

void show_info(void)
{
    if(m == 0)
        printf("Fuel consumption is %.1lf liters per 100km.\n",(fuel*100)/distance);
    
    if(m == 1)
        printf("Fule consumption is %.1lf miles per gallon.\n",distance/fuel);
    
}
