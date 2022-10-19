//
//  main.c
//  C primer plus Ch4-3
//
//  Created by Eric Wei on 28/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    float num;
    printf("enter 21.3:");
    scanf("%f",&num);
    printf("float is %3.1f and e is %.1e\n",num,num);
    printf("float is %7.3f and e is %.3e\n",num,num);
    return 0;

}
