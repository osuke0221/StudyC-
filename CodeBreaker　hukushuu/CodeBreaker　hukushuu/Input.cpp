#include"Input.h"

#include<iostream>

void Input::set() {

	std::cout << "入力開始--------------------------------------------------------------" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << i << "番目の数値を入力 :";
		std::cin >> value_[i];
	}
}
void Input::getValue(int* v, int size)
{
	// vは既に外で配列として宣言されている,その先頭にアドレスが入る
	//size　は配列に要素数が入っている

	for (int i = 0; i < size && i < 4; i++)
	{
		v[i] = value_[i];
	}