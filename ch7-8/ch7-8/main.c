//
//  main.c
//  ch7-8
//
//  Created by Eric Wei on 07/06/2020.
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
    int x=1,num;
    printf("***************************************************************** \n");
    printf("Enter the number corresponding to the desired pay rate or action: \n");
    printf("1) $8.75/hr           2) $9.33/hr\n3) $10.00/hr          4) $11.20/hr\n5) quit \n");
    printf("***************************************************************** \n");
    scanf("%d",&num);
    while(x)
    {
        switch(num)
        {
            case 1:
                base=8.75;
                x=0;
                break;
            
            case 2:
                base=9.33;
                x=0;
                break;
            
            case 3:
                base=10.00;
                x=0;
                break;
            
            case 4:
                base=11.20;
                x=0;
                break;
            
            case 5:
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
