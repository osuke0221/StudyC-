#include<iostream>
#include<vector>

// 掛け算を行う関数オブジェクト構造体


int main()
{
	//vectorを使った整数のコンテナ
	//int型の複数の情報を持つコンテナとして宣言
	std::vector<int> nums;

	//情報を追加する
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);

	//[2]が入っている位置に[5]を追加したい
	{


		std::vector<int>::iterator pos = nums.begin();
		pos += 1;

		nums.insert(pos, 5);
	}

	//指定の位置の削除方法
	{
		// [1,5,2,3] の[2]を削除したい
		std::vector<int>::iterator pos = nums.begin();
		pos += 2;
		nums.erase(pos);
	}

	for (std::vector<int>::iterator it = nums.begin();
		it != nums.end();
		it++) {
		nums.erase(it);
	}

	//イテレーター
	for (std::vector<int>::iterator it = nums.begin();
		it != nums.end();
		it++) {

		//イテレーターを使って内容を取得する
		int i1 = *it;
		
		//イテレーターを使って内容を更新する
		*it = 100;
	}

	// (1)番目に[1]
	// (2)番目に[2]
	// (3)番目に[3]
	//四番目は不正アクセス

	//情報を表示する
	int i1 = nums[0];
	int i2 = nums[1];
	int i3 = nums[2];
	//int i4 = nums[3]; 要素数が3つしかないので、4番目は不正アクセスになる。

	//ループで情報を取得
	for(int i = 0; i < nums.size(); i++)
	{
		int ii = nums[i];
	}

	//メンバ関数呼び出しで取得
	int j1 = nums.at(0); // int i1 = nums[0]と同じことをしている

	std::cout << "nums[0] = " << i1 << std::endl;
	std::cout << "nums[1] = " << i2 << std::endl;
	std::cout << "nums[2] = " << i3 << std::endl;

	//更新方法
	{

		//添え字で更新
		nums[0] = 40;
		//メンバ関数の戻り値が参照なので、=で代入して更新可能
		nums.at(0) = 100;
	}
	//削除
	{
		// 末尾を削除
		nums.pop_back();
		//全部削除
		nums.clear();
	}

	
}