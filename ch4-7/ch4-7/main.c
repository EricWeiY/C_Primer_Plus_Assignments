//
//  main.c
//  ch4-7
//
//  Created by Eric Wei on 28/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <float.h>
int main(int argc, const char * argv[])
{
    float f;
    double d;
    f=1.0/3.0;
    d=1.0/3.0;
    printf("%.6f,%.12f,%.16f\n",f,f,f);
    printf("%.6f,%.12f,%.16f\n",d,d,d);
    printf("FLT_DIG:%d\n",FLT_DIG);
    printf("DBL_DIG:%d\n",DBL_DIG);
    return 0;
}
