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
    
    //各演算処理の結果を表示させる
    printf("value_1  +   value_2 = %d\n", value_1 + value_2); //和
    printf("value_1  -   value_2 = %d\n", value_1 - value_2); //差
    printf("value_1  *   value_2 = %d\n", value_1 * value_2); //積
    printf("value_1  /   value_2 = %d\n", value_1 / value_2); //商
    printf("value_1  %%  value_2 = %d\n", value_1 % value_2); //剰余
    puts("");
    
    
    //---演算子とオペランド---
    /* 演算の働きを持った記号を演算子(operator)と
     *　呼びます。
     * その演算対象になる値を(operand)と呼びます。 */
    
    //---剰余について---
    /* 商を求める演算は 10 / 2 は 5となります。
     * 剰余は 5 % 3 となった場合まず左辺値で右辺値を割り
     * 余った数が得られます。                          */

    //---剰余を使って1の位を表示させる---
    int num;
    printf("整数を入力してください。:");
    scanf("%d", &num);
    printf("入力した値の1の位は%dです\n", num % 10);
    
    return 0;
}
