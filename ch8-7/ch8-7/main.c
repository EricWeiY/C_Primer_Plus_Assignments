//
//  main.c
//  ch8-8
//
//  Created by Eric Wei on 10/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define extra_work 40
#define extra_time 1.5
#define first 300
#define second 150
#define tax1 0.15
#define tax2 0.20
#define tax3 0.25
int main(void)
{
    float time,salary,money,tax,base;
    int x=1;
    char num;
    
    printf("Enter the number corresponding to the desired pay rate or action: \n");
    printf("a) $8.75/hr           b) $9.33/hr\nc) $10.00/hr          d) $11.20/hr\nq) quit \n");
   
    scanf("%c",&num);
    while(x)
    {
        switch(num)
        {
            case 'a':
                base=8.75;
                x=0;
                break;
            
            case 'b':
                base=9.33;
                x=0;
                break;
            
            case 'c':
                base=10.00;
                x=0;
                break;
            
            case 'd':
                base=11.20;
                x=0;
                break;
            
            case 'q':
                return 0;
            
            default:
                printf("Please input a number in 1-5");
                scanf("%d",&num);
        }
    }
    printf("Please enter the time you worked:");
    scanf("%f",&time);
    
    if(time<=extra_work)
        salary = time * base;
    else
        salary = extra_work * base + (time-extra_work)*extra_time*base;
    
    if(salary<=first)
        tax=salary*tax1;
    else
        if(salary<=450)
            tax=first*tax1+(salary-first)*tax2;
        else
            tax=first*tax1+second*tax2+(salary-450)*tax3;
    money=salary - tax;
    printf("The salary is %f\n",salary);
    printf("The tax is %f\n",tax);
    printf("The money is %f\n",money);
    return 0;
}
