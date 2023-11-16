//
//  main.c
//  11_P3
//
//  Created by ok sojoung on 2023/11/16.
//

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 3;
    int b = 5;
    swap(&a,&b);
    printf("a:%i, b:%i\n", a, b);
    
    return 0;
}
