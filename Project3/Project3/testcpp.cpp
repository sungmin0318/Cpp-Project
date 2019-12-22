#include "iostream"
#include "MechanicalCalc.h"

int main()
{
	double prefix=0, postfix=0;
	double result_pointer = 0;
	double result_reference = 0;
	char   param;
	bool   bRet=true;
	MechanicalCalc calc;

	std::cout << "사용가능 기호 +,-,*,/,^(제곱),r(루트),s(사인),c(코사인),t(탄젠트)" << std::endl;
	while (true)
	{
		std::cout << "첫번째 숫자를 입력하시오 : ";
		std::cin >> prefix;
		std::cout << "기호를 입력하시오 : ";
		std::cin >> param;
		if (param == '+' || param == '-' || param == '*' || param == '/' || param =='^')
		{
			std::cout << "두번째 숫자를 입력하시오 : ";
			std::cin >> postfix;
		}

		if (prefix == 0 && param == '0' && postfix == 0)
		{
			std::cout << "종료한다" << std::endl;
			break;
		}

		bRet = calc.calcptr(prefix, postfix, &result_pointer, param);

		if (bRet)
		{
			printf("Pointer 계산 결과 : 결과 값은 %3.3lf 입니다.\n", result_pointer);
		}
		else
		{
			printf("Pointer 계산 결과 : 입력값이 올바르지 않습니다.\n");
		}

		bRet = calc.calcref(prefix, postfix, result_reference, param);

		if (bRet)
		{
			printf("reference 계산 결과 : 결과 값은 %3.3lf 입니다.\n", result_reference);
		}
		else
		{
			printf("reference 계산 결과 : 입력값이 올바르지 않습니다.\n");
		}
	}
}


//class Base {
//
//public:
//	Base() { std::cout << "기반 클래스" << std::endl; }
//
//	void what() { std::cout << "기반 클래스의 what()" << std::endl; }//여기 virtual을 붙였다 뗐다 해서 실행해봄
//};
//class Derived : public Base {
//
//public:
//	Derived() { std::cout << "파생 클래스" << std::endl; }
//
//	void what() { std::cout << "파생 클래스의 what()" << std::endl; }
//};
//int main() {
//	Base p;
//	Derived c;
//
//	Base* p_c = &c;
//	Base* p_p = &p;
//
//	std::cout << " == 실제 객체는 Base == " << std::endl;
//	p_p->what();
//	p.what();
//
//	std::cout << " == 실제 객체는 Derived == " << std::endl;
//	p_c->what();
//	c.what();
//	return 0;
//}