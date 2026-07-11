#include "Character.h"
#include<stdlib.h>
#include<iostream>

//HPを設定する
void Character::setHp()
{
	param_.hp_ = (rand() % 51) + 50;
}

//攻撃する
int Character::attack()
{
	std::cout << "攻撃します" << std::endl;

	return param_.attack_;
}

//ダメージを受ける()攻撃していたキャラの攻撃力を受け取って　HPを減算)
void Character::damage(int power)
{
	std::cout << "ダメージを受けました" << power << std::endl;
	param_.hp_ -= power;
	//HPがゼロ未満になったらゼロにしておく
	if (param_.hp_ < 0) {
		param_.hp_ = 0;
	}
}

//DEAD判定
bool  Character::isDead() const
{
	return param_.hp_ == 0;
	std::cout << "ゲームオーバー" << std::endl;
}

//パラメータを返す(情報を数える)
Parameter Character::getParameter() const
{
	return param_;
}