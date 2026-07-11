#pragma once

//数値を保持するクラス
class Number
{

public:
	//持っている情報を他に教える
	void getValue(int* v, int size) const;

protected:
	int value_[4];//0～9までの４つの値(継承先でも使えるように)
};

