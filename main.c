//
//  main.c
//  11_P4
//
//  Created by ok sojoung on 2023/11/16.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int grade[5];
    int sum=0;
    
    for(i=0; i<5; i++)
    {
        printf("input value[%i] = ",i);
        scanf("%d", &grade[i]);
    }
    
    for(i=0; i<5; i++)
    {
        printf("grade[%i] = %i\n", i, *(grade+i));
        sum = sum + *(grade+i);
    }
    
    printf("average = %i\n", sum/5);
    
    return 0;
}
