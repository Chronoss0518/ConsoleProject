//ここでは配列を利用した場合のポインターの利用方法を記述します。//

void main()
{  
    /*
    //配列をポインターに入れる方法

    配列の[]をつけない場合は先頭アドレスになります。
    そのためポインターへ入れる場合は次の通りになります。
    
    ポインター変数 = 配列変数

    また、好きな配列の場所のアドレスを入れることが可能です。

    ポインター変数 = &配列変数[取り出す添え字の番号]
    */
    int* i_pointer = 0;

    int i_array[5];

    i_pointer = i_array;

    i_pointer = &i_array[2];

    /*
    //ポインターのアドレスを変更する方法

    ポインターの見ている場所を+と-でアドレスの位置を移動することができます。
    */
    i_pointer += 1;//i_array[3]の位置を見ている//
    
    i_pointer -= 2;//i_array[1]の位置を見ている//

    /*
    また、ポインター変数のアドレスを変えずに見ているアドレス位置を変更する場合は以下の方法を用いることで対処することができます。

    *(ポインター変数名 記号 移動する数値)
    */
    int value = *(i_pointer + 3);//i_array[4]の位置を見ている//

}