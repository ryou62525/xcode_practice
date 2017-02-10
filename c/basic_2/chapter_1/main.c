//
//  main.c
//  basic_2
//  cahapter_1
//  四則演算
//
//  Created by 小松亮太 on 2017/02/10.
//  Copyright © 2017年 小松亮太. All rights reserved.
//

#include <stdio.h>

int main()
{
    int value_1;
    int value_2;
    
    puts("２つの整数を入力してください。");
    printf("整数 1:");
    scanf("%d", &value_1);
    
    printf("整数 2:");
    scanf("%d", &value_2);
    
    printf("value_1  +   value_2 = %d\n", value_1 + value_2); //和
    printf("value_1  -   value_2 = %d\n", value_1 - value_2); //差
    printf("value_1  *   value_2 = %d\n", value_1 * value_2); //積
    printf("value_1  /   value_2 = %d\n", value_1 / value_2); //商
    printf("value_1  %%  value_2 = %d\n", value_1 % value_2); //剰余
    puts("");
    return 0;
}
