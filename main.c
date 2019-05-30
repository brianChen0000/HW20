//
//  main.c
//  HW20
//
//  Created by Mac on 2019/5/30.
//  Copyright © 2019年 Mac. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
struct phone
{
    char brand[16],type[10];
    int year,price;
};
int main(void)
{
    int b;
    printf("-------------------------------------------------\n");
    printf("                 phone手機結構體                 \n");
    printf("-------------------------------------------------\n");
    struct phone p[5]={
        
        "APPLE", "X", 2017, 35000,
        
        "Samsung", "S9", 2018, 30000,
        
        "Huawei", "P20 Pro", 2018, 32000,
        
        "OPPO", "R15", 2018, 9000,
        
        "ASUS", "Zenfone 5", 2018, 12000
        
    };
    for (b=0; b<5; b++)
    {
        printf("%s %s %4d %5d\n", p[b].brand, p[b].type, p[b].year, p[b].price);
    }
    system("pause");
    return 0;
}

