#include<iostream>
#include<vector>
#include<algorithm>
//チェック用の関数
bool check(int v) {
	//+1　すると、１０になる場合はtrueを返す
	return(v + 1) == 10;
}

int main()
{
	std::vector<int>Num = { 10,2,4,9,6,5 };

	Num.push_back(10);
	Num.push_back(2);
	Num.push_back(4);
	Num.push_back(9);
	Num.push_back(6);
	Num.push_back(5);

	//vec の中に５があるかどうか
	bool find = false;
	for (std::vector<int>::iterator it = Num.begin();
		it != Num.end();
		it++) {

		if (*it != 5) {
			continue;
		}
		find = true;
		break;
	}

	if (find) { std::cout << "あった" << std::endl; }
	else { std::cout << "ない" << std::endl; }

	//stlの探索アルゴリズム関数を利用して５を探す
	std::vector<int>::iterator it = std::find(Num.begin(), Num.end(), 5);

	if (it != Num.end()) {
		int index = std::distance(Num.begin(), it);
	}
	else
	{
		std::cout << "ない" << std::endl;
	}
}

	