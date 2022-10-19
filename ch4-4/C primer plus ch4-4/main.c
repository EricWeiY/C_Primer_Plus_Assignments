//
//  main.c
//  C primer plus ch4-4
//
//  Created by Eric Wei on 28/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    float feet;
    char name[40];
    printf("Enter the height:");
    scanf("%f",&feet);
    printf("enter the name:");
    scanf("%s",name);
    printf("%s,you are %f feet tall\n",name,feet);
    return 0;
    
}
