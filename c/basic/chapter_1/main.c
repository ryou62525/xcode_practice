//
//  main.c
//  chapter_1
//
//  Created by 小松亮太 on 2017/02/10.
//  Copyright © 2017年 小松亮太. All rights reserved.
//

#include <stdio.h>

int main() {
    
    //コンソールに「Hello, World!」という文字を表示させる
    // [ \n ]は改行コードで１行改行してくれる下記のように複数回可能
    printf("Hello, World!\n\n");
    
    //10+20の計算結果を表示させる
    printf("10+20=%dです\n\n", 10 + 20);
    
    printf("こんにちは\n\n");
    // "こんにちは" のように一連の文字を二重引用符で囲ったもの -> " "　を
    //文字リテラルと呼ぶ
    
    return 0;
}
