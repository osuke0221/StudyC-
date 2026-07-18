#include <iostream>
//　pulsとgreater を利用する
#include <functional>

//掛け算を行う関数オブジェクト
char A()
{
    return 'a';
}
template<class T>
struct Mul {
    //演算子オーバーロード
 //処理の中身は掛け算
    T operator()(const T a, const T b) const {
        return a* b;

    
    }
};


// エントリー関数
int main()
{
    Mul<float> fMul;
    Mul<int>   iMul;

    float fm = fMul(1.2f,2.4f);
    int in = iMul(2, 4);

    // float 同士の足し算を行う関数オブジェクト
    std::plus<float>    fPlus;
    // int 同士の大きさ比較を行う関数オブジェクト
    std::greater<int>   iGreater;

    // 変数だが関数の様に利用できる

    // fには合計が入る
    float   f = fPlus(2.3f, 4.1f);
    // 第一引数が第二引数より大きければ true 
    bool    i = iGreater(2, 4);
}