#include<iostream>
#include"Input.h"
#include"Judge.h"
#include"DispResult.h"
#include"Result.h"

int main()
{
	Random random;
	Input input;
	Judge judge;
	DispResult dispresult;

	random generate();

	while (true)
	{
		//入力値設定
		input set();

		Result = judge compare(random, input);

		DispResult disp(res);

		if (res idClear_)
		{
			break;
		}
	}
}


