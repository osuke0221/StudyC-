#include<iostream>
#include<vector>
#include<algorithm>

//二つの値を受ける取って第一引数のほうが大きい場合
bool leftGreater(int i, int r) {
	return i > r;
}

int main()
{
	std::vector<int> vec = { 10,8,4,9,2,3,5 };
	
	
	std::sort(vec.begin(), vec.end(), leftGreater);
	
	for (std::vector<int>::iterator it = vec.begin();
		it != vec.end();
		it++) {

		std::cout << *it << "";
	}
}