//
//  main.c
//  ch16-4
//
//  Created by Eric Wei on 18/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <time.h>

void time_delay(float second);

int main(void)
{
    float n;
    printf("Enter a time period:");
    scanf("%f",&n);
    time_delay(n);
    printf("\n");
    return 0;
}

void time_delay(float second)
{
    clock_t start;
    clock_t end;
    start = clock();
    end = clock();
    while(((double)(end - start) / CLOCKS_PER_SEC) < second)
    {
       end = clock();
    }
    printf("时间延迟了%g秒\n", (double)(end - start) / CLOCKS_PER_SEC);
}
