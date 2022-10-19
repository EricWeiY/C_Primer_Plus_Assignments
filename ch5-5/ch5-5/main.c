//
//  main.c
//  ch5-5
//
//  Created by Eric Wei on 31/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int count,sum;
    int day;
    count=0;
    sum=0;
    printf("enter days:");
    scanf("%d",&day);
    while(count++<day)
        sum=sum+count;
    printf("sum=%d\n",sum);
    return 0;
}
