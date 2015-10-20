//
//  main.c
//  ZOJ1001
//
//  Created by frank on 15-10-20.
//  Copyright (c) 2015年 frank. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 输入两个数字，输出他们之和（不考虑大数）
    int A,B;
    //如何设置了断点的话，在xcode中点击continue programme execution
    while(scanf("%d %d",&A,&B)!=EOF)//循环输入
    printf("%d\n",A+B);//换行符。。
    return 0;
}
