#include<iostream>
#include<map>

int main()
{
    // キーがchar、値が float を扱う map を宣言する
    std::map<char, float> map;

    // 追加方法の例
    {
        // 'a' をキーに値 1.5f を追加する
        map['a'] = 1.5f;

        // emplace 関数 を利用する
        // 'c' をキーに値 3.1f を追加する
        map.emplace('c', 3.1f);

        // std::pair と insert 関数を利用する
        // 'b' をキーに値 2.4f を追加する
        map.insert(std::make_pair('b', 2.4f));
    }

    // 取得方法の例
    {
        // [] でキーを指定して値を取得する
        float f1 = map['a'];
        std::cout << f1 << std::endl;

        // at 関数でキーを指定して値を取得する
        float f2 = map.at('c');
        std::cout << f2 << std::endl;
    }

    //更新方法
    {
        //メンバ関数を使って更新
        map.at('c') = 0.3f;

        // [] で更新
        map['a'] = 100.5f;
    }

    //削除方法
    {
        map.erase('c');

        map.clear();
    }
}