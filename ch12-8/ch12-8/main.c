//
//  main.c
//  ch12-8
//
//  Created by Eric Wei on 02/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
 
int * make_array(int size, int value);
void show_array(const int * str, int size);
int main(void)
{
    int *pa;
    int size;
    int value;
 
    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
        show_array(pa, size);
        free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
    }
 
    printf("Done.\n");
    return 0;
}

int * make_array(int size, int value)
{
    int * pt;
    int i;
    pt = (int *) malloc(size*sizeof(int));
    for(i=0;i<size;i++)
        *(pt+i)=value;
    return pt;
}

void show_array(const int * str, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",*(str+i));
        if(((i + 1) % 8) == 0)
        printf("\n");
    }
    printf("\n");

}
