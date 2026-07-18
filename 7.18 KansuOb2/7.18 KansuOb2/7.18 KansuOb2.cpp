#include<iostream>
#include<functional>

char A() {
	return'A';
}

char B()
{
	return 'B';
}


//関数を引数で受け取り、中で呼び出す
void function(std::function<char()> f) {
	
	char c = f();
	
	
	std::cout << "結果" << c << std::endl;
}

int main()
{
	function(A);
}