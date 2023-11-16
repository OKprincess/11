//
//  main.c
//  11_P5
//
//  Created by ok sojoung on 2023/11/16.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc;
    int *pi;
    double *pd;
    
    pc = (char*)10000;
    pi = (int*)10000;
    pd = (double*)10000;
    
    printf("증가 전: pc=%p, pi=%p, pd=%p\n",pc,pi,pd);
    pc++;   // 기본단위 1
    pi++;   // 기본단위 4
    pd++;   // 기본단위 8
    printf("증가 후: pc=%p, pi=%p, pd=%p\n",pc,pi,pd);
    
    return 0;
}
