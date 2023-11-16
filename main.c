//
//  main.c
//  11_P2
//
//  Created by ok sojoung on 2023/11/16.
//

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 300;
    
    int* pi = &i;
    char* pc = &i;
    
    printf("%i, %i, %i\n",i,*pi,*pc);
    return 0;
}
