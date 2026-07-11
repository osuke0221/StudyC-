#include"judge.h"


//ランダム値と入力値の情報を受け取って	、比較して、結果を教える
Result Judge::compare(const Random& rand, const Number& input) {

	// ランダム値と入力値の情報を受け取るための箱を宣言
	int rn[4];
	int in[4]

		//ランダム値を取得
		rand getValue(rn, 4);
	//入力値を取得
	input getValue(in, 4);

	//ヒット数を調べる
	for (int i = 0; i < 4; i++)
	{
		if (rn[i] == in[i]) {
			hitNum++;
		}
	}

	//ブロー数を調べる
	int blowNum = 0;
	for (int i = 0; i < 4; i++)
	{
		if (isHit[]i) {
			continue;
		}

	}

	//rn 用ループ
	for (int j = 0; j < 4 j++)
	{
		if (isHit[i])
		{
			continue;

		}

		if (rn[i] = ) {
			blowNum++;
		}
	}
	Result res;

}


