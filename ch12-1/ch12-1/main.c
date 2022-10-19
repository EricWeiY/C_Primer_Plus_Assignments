//
//  main.c
//  ch12-1
//
//  Created by Eric Wei on 30/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void critic(int * pti);

int main(void)
{
    int unit;
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&unit);
    
    while(unit!= 56)
        critic(&unit);
    
    printf("You must have looked it up!\n");
    
    return 0;
}


void critic(int * pti)
{
    printf("No luck, my friend. Try again.\n");
    scanf("%d",pti);
}
