#include <iostream>
class LetDebug
{
public:
	void printNum()
	{
		/*
		short s1 = 32767;
		short s2 = 1;
		short s3 = (short)s1 + s2;
		*/
		unsigned short s1 = 32767;
		uint16_t s2 = 1;
		unsigned short s3 = s1 + s2;

		std::cout << s3 << std::endl;
	}
};


int main()
{
	LetDebug* ld = new LetDebug;
	ld->printNum();

	std::cout << "201850247" << std::endl;
	return 0;
}