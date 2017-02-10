//
//  main.c
//  chapter_2
//  変数を使って表示
//
//  Created by 小松亮太 on 2017/02/10.
//  Copyright © 2017年 小松亮太. All rights reserved.
//

#include <stdio.h>

int main()
{
    
    printf("Hello, World!\n");
    
    //変数とは数値など様々な値を格納するための箱です。
    
    //---まずは宣言---
    int a;
    int b;
    
    /*
        intは型、aは変数名。
        変数名は自分で好きな名前をつけられる。
        今回は a という名前だが b や abc という名前でもつけられる。
                                                            */

    //---実際に使ってみる---
    
    //代入
    a = 10;         //aに10を代入
    b = 20;         //bに20を代入
    
    //注：ここでの「=」は、数学のようにaと10が等しいということではないので注意。
    
    //---用意した変数を使って実際に表示させる---
    printf("aの変数の値は%dです。\n", a);
    printf("bの変数の値は%dです。\n", b);
    printf("aの値とbの値の和は%dです。\n", a+b);
    
    return 0;
}
