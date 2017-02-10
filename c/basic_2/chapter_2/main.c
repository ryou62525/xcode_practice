//
//  main.c
//  basic_2
//  chapter_2
//  型について
//
//  Created by 小松亮太 on 2017/02/10.
//  Copyright © 2017年 小松亮太. All rights reserved.
//

#include <stdio.h>

int main()
{
 
    //2つの値の平均値を求める
    int value_1;
    int value_2;
    
    puts("2つの整数を入力してください。");
    printf("整数 1:");
    scanf("%d",&value_1);
    
    printf("整数 2:");
    scanf("%d",&value_2);
    
    printf("2つの数の平均は%dです。\n", (value_1 + value_2) / 2);

    //型について
    /* 実行してみるとわかると思いますが、小数点以下が出た場合
     * 小数点以下は切り捨てられてしまいます。
     * これは int型が整数しか扱えない性質だからです。        */
    
    //では小数点以下はどうする？
    /* 小数点を扱いたいってなった時は・・・
     * 小数点を扱うための型(float, double)などがあります。
     * 今回はfloatを使っていきます。                     */
    
    float val_1;
    float val_2;
    float val_3;
    
    //表示してみる
    val_1 = 10.250f;
    printf("val_1の値は%fです。\n", val_1);
    
    //2つの値の平均値を表示してみる。
    puts("2つの値を入力してください");
    printf("値 1:");
    scanf("%f", &val_2);
    printf("値 2:");
    scanf("%f", &val_3);
    
    printf("2つの値の平均は%fです\n", (val_2 + val_3) / 2);
    
    return 0;
}
