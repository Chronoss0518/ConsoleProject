// ここでは繰り返し文と条件分岐の方法を記述します//

/*
条件は次の内容から確認することができます。

//条件として指定した値が0以外の場合
こちらはC言語にboolまたはboolean型(trueやfalse)がないため機能として入れられているものになります。
内容はそのままで、入れた変数の値が0以外の場合は{}の中の処理を行い、0の場合は{}を無視して}の次の行から実行するようになります。

//不等号などの条件式が正しい場合
こちらは様々な言語でもあるように以下の条件式が正しい場合に{}の中の処理を行うことができます。

//// a == b(a と　b の値が等しい場合)
//// a != b(a と　b の値が等しくない場合)
//// a > b(a が　b より大きい場合)
//// a >= b(a が b より大きいまたはa と bが等しい場合)
//// a < b(a が　b より小さい場合)
//// a <= b(a が b より小さいまたはa と bが等しい場合)

また、上記の条件を次のように組み合わせることも可能です

//// 条件1 && 条件2(条件1も条件2も正しい場合)
//// 条件1 || 条件2(条件1と条件2どちらかが正しい場合)

上記の内容を同時に利用する場合は次の例の通りになります。

条件1 && 条件2 || 条件3 = 条件1と条件2が正しい場合、または条件3が正しい場合

また、次の記号で条件式を反転させることも可能です。
!条件1(条件1が正しくない場合に実行します)
*/

int main()
{
    /*
    //if文

    基本的な条件分岐です。

    基本的な構文は以下のようになります。
    if(条件){条件が正しい時の処理}

    if文はそれ以降に次の内容を任意で追加できます。

    //else if(条件)
    else if に一番近い先頭のif文が正しくない場合に(条件)を確認し、正しい場合に処理を実行します。

    //else
    elseに一番近い先頭のifからelse ifですべての条件が正しくない場合に処理を実行します。

    else ifもelseも基本的にはif文の次に記述します。
    また、elseに関してはifと1対1で配置する必要があります。

    例1
    if(条件){}
    else if(条件){}
    else {}

    例2
    if(条件){}
    else{}

    例3
    if(条件){}
    else if(条件){}

    例4
    if(条件){}
    else if(条件){}
    else if(条件){}
    else{}
    */
    if (1)
    {
        // 処理//
    }
    else if (1)
    {
        // 処理//
    }
    else
    {
        // 処理//
    }

    /*
    //switch文

    かなり特殊な条件分岐を行う命令です

    基本的な構文は次の通りです。
    switch(確認する値)
    {

    }

    上記の状態は構文として認識する最低限のswitch文です。
    この状態では条件によっても動くことはありません。

    次の内容は任意で登録する条件にないります。

    //case
    基本的な構文は次の通りです。
    case 値:
        一致した場合の処理

    ここで記述した値が確認する値と一致する場合に一致した場合の処理が走ります。
    同じswitch文内でcaseの値を登録する場合は既に登録されているcaseを利用することができません

    //default
    基本的な構文は次の通りです。
    default:
        処理

    defaultはすべてのcaseの値と確認する値が一致しない場合に処理を行います。
    switch文内ではdefault文は1度しか記述できません。

    基本的にswitch文ではcase内に終了させるときにbreakを設置します。

    設置しない場合の動きは次の例をもとに記述します。

    例1
    switch(1)
    {
        case 1:
            //処理1//
        case 2:
            //処理2//
            break;
        default:
            //処理d//
            break;
    }

    上記のコードを走らせると処理1と処理2が走ります。
    breakを設置する理由はこれ以降の処理を走らせないために設置するのです。
    */
    switch (1)
    {
    case 1:
        // 処理//
        break;
    default:
        // 処理//
        break;
    }

    /*
    //条件式演算子

    この条件分岐は特殊な部類に当たります。
    基本的な構文は次の通りです。

    条件 ? 正しい場合の処理 : 誤りの場合の処理;

    条件の内容が正しい場合は手前の処理を行い、誤っている場合は後の処理を行います。
    */
    int test = 1 ? 100 : 0;

    /*
    //while文

    基本的な繰り返し文の一つです。

    構文は次の通りです。
    while(条件)
    {
        //処理//
    }

    while文は条件が正しい間のみ{}の中の処理を行います。
    */
    while (1)
    {
        break;
    }

    
    /*
    //for文

    基本的な繰り返し文の一つです。

    構文は次の通りです。
    for(変数の初期化;条件式;変数の処理)
    {
        処理
    }

    for文を記述するには次の要素が必要です。
    //変数の初期化//
    繰り返しに利用する変数を初期化します。
    ここでは()の中で変数を定義していますが、あらかじめ定義した変数も利用することができます。

    //条件式//
    ここは{}の処理を続けるための条件を記述します。

    //終了時の変数の処理//
    かなり特殊な場所です

    基本的には++や--を利用します。
    ただし、ここ内容を実行するタイミングが特殊で
    ++変数名や--変数名の場合は{のタイミングでその処理を実行され、
    変数名++や変数名--の場合は}のタイミングでその処理を実行されます。
    */
    for(unsigned long i = 0;i<5;i++)
    {
        //処理//
    }

    /*
    また、繰り返し分を行う際には次の内容を利用することで、より細かい挙動を指定することができます。

    //break
    強制的に}の次の行へ移動します。
    
    //continue
    強制的に}の行へ移動します。(つまり1回繰り返ししたという事象を起こします)
    */

}