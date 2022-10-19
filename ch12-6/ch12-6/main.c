//
//  main.c
//  ch12-6
//
//  Created by Eric Wei on 01/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i,ran,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,ten=0;
    srand((unsigned int)time(0));
       
    for(i=0;i<100;i++)
    {
        ran = (rand()%10+1);
        
        if(ran==1)
            one++;
        if(ran==2)
            two++;
        if(ran==3)
            three++;
        if(ran==4)
            four++;
        if(ran==5)
            five++;
        if(ran==6)
            six++;
        if(ran==7)
            seven++;
        if(ran==8)
            eight++;
        if(ran==9)
            nine++;
        if(ran==10)
            ten++;
    }
    printf("There are %d one\n",one);
    printf("There are %d two\n",two);
    printf("There are %d three\n",three);
    printf("There are %d four\n",four);
    printf("There are %d five\n",five);
    printf("There are %d six\n",six);
    printf("There are %d seven\n",seven);
    printf("There are %d eight\n",eight);
    printf("There are %d nine\n",nine);
    printf("There are %d ten\n",ten);
    
}
