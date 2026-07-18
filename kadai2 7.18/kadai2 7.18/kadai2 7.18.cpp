#include <iostream>
#include <map>

// キャラクター基礎
class CharacterBase
{
public:
    // コンストラクタ
    CharacterBase() = default;
    // デストラクタ
    virtual ~CharacterBase() = default;

public:
    std::string name_ = {};
};


// プレイヤー
class Player : public CharacterBase
{
public:
    // コンストラクタ
    Player() = default;
    // デストラクタ
    virtual ~Player() = default;

public:
    const char* type() ？ {
        return "味方です";
    }
};

// 敵
class Enemy : public CharacterBase
{
public:
    // コンストラクタ
    Enemy() = default;
    // デストラクタ
    virtual ~Enemy() = default;

public:
    const char* type() const {
        return "敵です";
    }
};


// エントリー関数
int main()
{
    // コンテナを埋める
    std::map<int, CharacterBase*> map;
    map.emplace(0, ？);
    map.emplace(1, ？);
    map.emplace(2, ？);
    map.emplace(3, ？);
    map.emplace(4, ？);

    // 種類を表示する
    for (std::map<int, CharacterBase*>::iterator it = map.begin(); it != map.end(); ++it)
    {
        std::cout << it->first << " は " << it->second->type() << std::endl;
    }

    // コンテナ中身のインスタンス削除も忘れずにする
    map.end();

        // コンテナをすべて破棄する
        map.clear();
}