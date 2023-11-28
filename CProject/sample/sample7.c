//ここではC言語特有のポインターに関して記述します。//

/*
ポインターとは

パソコンにはすぐに操作可能なメモリとすぐにアクセスはしないけど情報として保存するためのメモリがあります。
//RAM(Random Access Memory)
レジスタに次ぐ一時的に利用するすぐに操作可能なメモリです。
よく言われるメモリ番地はこちらを指します。

//ROM(Read Only Memory)
HDD(Hard Disk Drive)やSSD(Solid State Drive)など長期にかけて情報を保持する際にるようするメモリです。
よく言われるメモリーカードはこちらを指します。

ポインターはこのメモリ番地の位置を保存するための変数を指します。

これらを利用するのは3つあります。

//関数での操作を保持するため//
基本的に関数ではグローバル変数を除いてすべての変数を作り直すように動きます。
具体的に作成される内容は次の通りです。

////引数
////関数内で定義されたローカル変数

つまり、情報は残っていても関数に入る前に利用していた変数は利用することができません。
また、引数は値渡し(新しい変数を作成して引数として指定した値を保持させること)を行っているため、関数を抜けると変更した値も消えてしまいます。
そこで値そのものを渡すのではなく、値を確認できる場所を渡そうと考えたためポインターを利用するようになりました。

//関数で利用する引数の容量を下げるため//

こちらも関数に関してではあります。
構造体を思い浮かべていただけるとわかる通り、メモリ(RAM)をすごい量利用する場合があります。
そのため構造体の場所を保持するポインターを利用することで構造体で利用するメモリをまるまる用意せずに、
4byte(場合によっては8byte)分のみに抑えられるポインターを利用して処理を少し早めようとしました。
(実際中ではメモリ上の場所を確保する場合は、利用するメモリ分空いている場所を必要とするためです。)

//配列や文字列を可変長にするため//
こちらは関数と少し違う形になります。

ポインターを利用した場合は配列のサイズや文字列のサイズを指定せずに作成することができます。
なぜこうなるのかといいますと以下の内容になります。

////配列を作成する場合ははじめにその個数を必要とするため
配列を利用する場合は配列分のメモリ確保が必要なため先にその個数を指定する必要があります。
ポインターを利用してallocなどの関数を用いることであとからサイズを指定した配列を取得することができます。

////文字列はchar型の配列であるため
文字列はC言語ではstring型がなく、char型の配列を用意する必要があります。
上記のように配列を作成する場合は先に必要個数のメモリを確保する必要があり、一度作ると配列のサイズを変更できません。
そこで、char* test = ""のように記述すると作成した文字列の先頭アドレス(メモリ番地)を保持することで可変長のように見せることが可能になります。
この時用意された値はポインターとして保持しない限りスコープから抜けると解放されるので注意が必要です。
*/

typedef struct TestStruct
{
    int num;
}TestStruct;

int main()
{
/*
//ポインターの作成方法//
値型または構造体に対して*をつけるだけです。
基本的にはNULL または 0で初期化します。
*/

int* test = 0;
TestStruct* testStruct = 0;

/*
//ポインターをセットする方法//
ポインターには本体となる変数をセットする必要があります。
セットする方法は次の通りです。
ポインター変数名 = &同じ型の変数;
*/
int val = 0;
test = &val;

TestStruct structVal;
testStruct = &structVal;

/*
//TOPIC

'(クォーテーション)で囲むと1文字を表し、
"(ダブルクォーテーション)で囲むと文字列になります。文字列を表す場合は最後に\0(数値の0)が入ります。
*/
char charactor = 'a';
char* str = "aaaaaaa";
/*
//値型ポインターの値を格納および取得する方法//
アドレス番地を見ているだけでは利用できないため、次のようにする必要があります。

//値の取得
同じ型の変数名 = *ポインター変数名;

//値の格納
*ポインター変数名 = 同じ型の値;
*/

int val2 = *test;
TestStruct structVal2 = *testStruct;

*test = 20;
*testStruct = structVal2;

/*
//構造体ポインターのメンバー変数の格納および取得する方法//
構造体ポインターも値型と同じようにアドレス番地のままでは利用できないため、次のようにする必要があります。

//値の取得
同じ型の変数名 = *ポインター変数名->メンバー変数;

//値の格納
*ポインター変数名->メンバー変数 = 同じ型の値;
*/

val2 = testStruct->num;

testStruct->num = val2;

}