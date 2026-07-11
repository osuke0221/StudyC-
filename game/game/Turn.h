#pragma once

#include<memory>
#include"Character.h"
//リザルト情報
struct Result
{
	int turnCount_ = 0; //決着までのターン
	int maxPlayerPower_ = 0; //プレイヤーが与えた最大ダメージ
	int maxEnemyPower_ = 0; //敵が与えた最大ダメージ
};
//ターン制御
class Turn
{
public:
	//ターンを実行する
	bool exec(std::shared_ptr<Character> player,
		std::shared_ptr<Character>* enemies, int enemyNum) {
		player->setAttack();

		//ターンの開始に攻撃力を設定する
		for (int i = 0; i < enemyNum; i++)
		{
			enemies[i]->setAttack();
		}

		// プレイヤーが生き残ってる敵を探して攻撃する
		int targetEnemyIndex = 0;
		for (int i = 0; i < enemyNum; i++)
		{
			if (!enemies[i]->isDead())
			{
				targetEnemyIndex = i;
				break;
			}
		}
		int playerPower = player->attack();
		enemies[targetEnemyIndex]->damage(playerPower);
	}

private:
	Result result_; //リザルト情報
};

