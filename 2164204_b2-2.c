/*入力された1以上10以下の整数から30までの和を求めるプログラム*/
#include <stdio.h>

int main()
{
/*変数を定義*/
    int num,i,sum;
    sum = 0;
    
    /*入力された整数が1以上10以下になるまで繰り返す*/
    while (num < 1 || num > 10){
    
    /*キーボードで入力を施すメッセージを記述*/
    printf("キーボード1以上10以下の任意の整数を入力してください：");
    
    /*scanf()を使って、入力した数字を変数に格納する*/
    scanf("%d", &num);
    
    /*入力した数字を表示する*/
    printf("入力された整数は %d　です\n",num);
    
    /*1以上10以下の整数でない場合の処理*/
    if (num < 1 || num > 10){
    printf("この整数は1以上10以下ではありません\n");
    }
    /*while()の終了*/
    }
    
    /*入力された整数から30までの整数の和を求める*/
    for(i = num;i <= 30;i=i+1){
        sum = sum + i;
    }
    
    /*求めた和を表示する*/
    printf(" %d から30までの整数の和は %d です\n",num,sum);
    /*最後にプログラムの正常終了をシステムに通知する*/
    return 0;
}
