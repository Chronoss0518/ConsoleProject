//ここではHello Worldを行うにあたり、行っている内容すべてにコメントを付けてみました。//
//Hello Worldだけでもこれだけ必要になります//

/*
コンパイル時に指定したファイルを展開します。
<>で囲った場合は特定の場所にあるファイルを、
""で囲った場合はこのファイルから相対パスで指定したファイルを展開します。

ここではstdio.hのファイルを展開します。(もっと簡単に言うならコンパイル中の時にコピペするようなもの)
そのためstdio.hに記述されている関数や構造体、ローカル変数を利用することができます。
*/
#include<stdio.h>

/*
//main関数(プログラムが走る関数)
c言語やC++言語は戻り値はエラーがない場合は戻り値に0を、エラーがあった場合は0以外を帰らせます。


//関数
関数は処理をまとめたものを指します。
基本的には戻り値は一つ、関数名は一つ、引数は複数定義することができます。

////プロトタイプ宣言(先にこの関数があることを伝えるために記述します。こちらは複数定義することができます)
戻り値 関数名(引数,[引数,引数...]);

////関数の定義(関数の中身を記述します。こちらは一つしか指定できません)
戻り値 関数名(引数,[引数,引数...])
{
    処理
}

関数を利用する場合は以下の通りになります。

////戻り値を利用しない場合
関数名(引数,[引数,引数...]);

////戻り値を利用する場合
戻り値の変数 = 関数名(引数,[引数,引数...]);

戻り値に値を入れる場合はreturnを宣言します。

////戻り値を利用しない場合
return;

////戻り値を利用する場合
return 戻り値の変数 or 値;
*/
int main()
{
    /*
    //printfという関数を呼びます//
    //標準出力でコンソールに出力するための関数になります。//
    */

    printf("Hello World!\nPrease Input Name:");

    /*
    //文字列を格納する変数を作成//
    */
    char* input;
    input = "";

    /*
    //scanfという関数を呼びます//
    //標準入力でコンソールから入力を行ってうための関数になります。//
    //Enterを入力するまで入力状態を続けます。//
    */
    scanf("%s", &input);

    /*
    printfで再度入力した内容を出力します。
    */
    printf("Welcom To %s", &input);
    /*
    //戻り値に0を返します//
    */
    return 0;
}
