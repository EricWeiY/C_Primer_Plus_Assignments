//
//  main.c
//  ch16-6
//
//  Created by Eric Wei on 18/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
#define SLEN 5

struct name{
    char fname[LEN];
    char lname[LEN];
};

int comp(const void *p1, const void *p2);
void show_names(struct name names[], int n);

int main(void)
{
    struct name names[SLEN] = {
        {"Francy, card"},
        {"Coffee, cancy"},
        {"Stephen, lory"},
        {"Jack, rosery"},
        {"Black, clover"}
    };
    printf("Random arrangment:\n");
    show_names(names, SLEN);
    printf("\n");
    printf("\n");
    printf("After arrangment:\n");
    
    qsort(names, SLEN, sizeof(struct name), comp);
    show_names(names, SLEN);
}

void show_names(struct name names[], int n)
{
    int i = 0;

    while (i < n)
    {
        printf("%s %s\n", names[i].fname, names[i].lname);
        i++;
    }
}

int comp(const void *p1, const void *p2)
{
    const struct name * ps1 = (const struct name *) p1;
    const struct name * ps2 = (const struct name *) p2;
    int i;
    i = strcmp(ps1->fname, ps2->fname);
    return i;
    if(i == 0)
        return strcmp(ps1->lname, ps2->lname);
}
