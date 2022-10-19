//
//  main.c
//  ch12-3
//
//  Created by Eric Wei on 01/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void set_mode(int mode);
void get_info_1(void);
void get_info_2(void);
void show_info_1(int distance,double fuel);
void show_info_2(int distance,double fuel);

int main(void)
{
   int mode ;
    
       printf("Enter 0 for metric mode, 1 for US mode:");
       scanf("%d" , &mode) ;
       while (mode >= 0)
       {
           set_mode(mode) ;
           printf("Enter 0 for metric mode , 1 for US mode:");
           scanf("%d" , &mode);
       }
       printf("Done.\n");
    
       return 0 ;
}

void set_mode(int mode)
{
    if(mode == 0)
        get_info_1();
    else
        if(mode == 1)
            get_info_2();
    else
        printf("Invalid value, please enter the value again.");
}

void get_info_1(void)
{
    int distance;
    double fuel;
    printf("Enter distance travelled in kilometers:");
    scanf("%d",&distance);
    getchar();
    printf("Enter fuel consumed in liters:");
    scanf("%lf",&fuel);
    getchar();
    show_info_1(distance,fuel);
}


void get_info_2(void)
{
    int distance;
    double fuel;
    printf("Enter the distance travelled in miles:");
    scanf("%d",&distance);
    getchar();
    printf("Enter fuel consumed in gallons:");
    scanf("%lf",&fuel);
    getchar();
    show_info_2(distance,fuel);
}



void show_info_1(int distance,double fuel)
{
        printf("Fuel consumption is %.1lf liters per 100km.\n",(fuel*100)/distance);
}

void show_info_2(int distance,double fuel)
{
        printf("Fule consumption is %.1lf miles per gallon.\n",distance/fuel);
}
