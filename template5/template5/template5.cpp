#include<iostream>
#include "template.h"

template<class T>
void disp(T x, T y)
{
	T res = x + y;
	std::cout << res << std::endl;
}
template<class T>
void disp1(T x, T y)
{
	T res1 = x - y;
	std::cout << res1 << std::endl;
}
template<class T>
void disp2(T x, T y)
{
	T res2 = x * y;
	std::cout << res2 << std::endl;
}

template<class T>
void disp3(T x, T y)
{
	T res3 = x % y;
	std::cout << res3 << std::endl;
}

template void disp<int>(int x, int y);