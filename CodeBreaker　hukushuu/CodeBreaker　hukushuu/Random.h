#pragma once
class Random
{
public: 
	//ƒ‰ƒ“ƒ_ƒ€‚È’l‚ğ¶¬‚·‚é
	void generate();

	//‚Á‚Ä‚¢‚éî•ñ‚ğ‘¼‚É‹³‚¦‚é
	void getValue(int* v, int size) const;


private:
	int value_[4];//0`‚X‚Ü‚Å‚Ì‚S‚Â‚Ì’l
};

