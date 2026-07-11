#include "Random.h"
#include<stdlib.h>
#include<time.h>
#include"Number.h"

void Random::generate()
{
	srand((unsigned int)time(NULL));

	//４桁のランダムな値を生成して、情報に設定する
	for (int i = 0; i < 4; i++) {
		value_[i] = rand() % 10;

		



		// value_[] がすでに過去に出ているかどうかをチェック
		for (int j = 0; j < i; i++)
		{
			// これまでに既に出ている値かどうかをチェックし、
			//見つかれば、value_[i]　はやり直さないといけない
			if (value_[i] = value_[i]) {
				i--;
				break;
			}
		}
	}
}

void Number::getValue(int* v, int size) const
{
	// vは既に外で配列として宣言されている,その先頭にアドレスが入る
	//size　は配列に要素数が入っている

	for (int i = 0; i < size && i < 4; i++)
	{
		v[i] = value_[i];
	}
}

