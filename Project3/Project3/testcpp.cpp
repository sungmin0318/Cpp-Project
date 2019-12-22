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

	std::cout << "��밡�� ��ȣ +,-,*,/,^(����),r(��Ʈ),s(����),c(�ڻ���),t(ź��Ʈ)" << std::endl;
	while (true)
	{
		std::cout << "ù��° ���ڸ� �Է��Ͻÿ� : ";
		std::cin >> prefix;
		std::cout << "��ȣ�� �Է��Ͻÿ� : ";
		std::cin >> param;
		if (param == '+' || param == '-' || param == '*' || param == '/' || param =='^')
		{
			std::cout << "�ι�° ���ڸ� �Է��Ͻÿ� : ";
			std::cin >> postfix;
		}

		if (prefix == 0 && param == '0' && postfix == 0)
		{
			std::cout << "�����Ѵ�" << std::endl;
			break;
		}

		bRet = calc.calcptr(prefix, postfix, &result_pointer, param);

		if (bRet)
		{
			printf("Pointer ��� ��� : ��� ���� %3.3lf �Դϴ�.\n", result_pointer);
		}
		else
		{
			printf("Pointer ��� ��� : �Է°��� �ùٸ��� �ʽ��ϴ�.\n");
		}

		bRet = calc.calcref(prefix, postfix, result_reference, param);

		if (bRet)
		{
			printf("reference ��� ��� : ��� ���� %3.3lf �Դϴ�.\n", result_reference);
		}
		else
		{
			printf("reference ��� ��� : �Է°��� �ùٸ��� �ʽ��ϴ�.\n");
		}
	}
}


//class Base {
//
//public:
//	Base() { std::cout << "��� Ŭ����" << std::endl; }
//
//	void what() { std::cout << "��� Ŭ������ what()" << std::endl; }//���� virtual�� �ٿ��� �ô� �ؼ� �����غ�
//};
//class Derived : public Base {
//
//public:
//	Derived() { std::cout << "�Ļ� Ŭ����" << std::endl; }
//
//	void what() { std::cout << "�Ļ� Ŭ������ what()" << std::endl; }
//};
//int main() {
//	Base p;
//	Derived c;
//
//	Base* p_c = &c;
//	Base* p_p = &p;
//
//	std::cout << " == ���� ��ü�� Base == " << std::endl;
//	p_p->what();
//	p.what();
//
//	std::cout << " == ���� ��ü�� Derived == " << std::endl;
//	p_c->what();
//	c.what();
//	return 0;
//}