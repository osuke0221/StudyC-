#pragma once

#include "Input.h"
#include "Random.h"
#include"Result.h"
class Judge
{
public:
	//ランダム値と入力値の情報を受け取って	、比較して、結果を教える
	Result compare(const Number& rand, const Input& input);

	
	
	                                      /* そのまま書いた
	                                       void getRandom(const Random& rand);
	                                       void getInput(const Input& rand);

	                                        Reault　compare();
	                                      */
    
private:
	int count_;// 比較する回数
};
