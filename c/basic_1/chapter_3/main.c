//
//  main.c
//  chapter_3
//  キーボード入力と表示
//
//  Created by 小松亮太 on 2017/02/10.
//  Copyright © 2017年 小松亮太. All rights reserved.
//

#include <stdio.h>

int main()
{
    //キーボード入力をして押した値を表示させてみる
    int num;
    char a;
    
    //入力した文字を表示させる
    printf("１文字入力してください。:");
    scanf("%c", &a);
    printf("入力した値は%cです。\n", a);
    
    //入力した数字を表示させる
    printf("次は数字を入力してください。:");
    scanf("%d", &num);
    printf("入力した文字は%dです。\n", num);
    
    return 0;
}
