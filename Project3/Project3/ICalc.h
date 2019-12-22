#pragma once
#define interface class
//인터페이스
interface ICalc
{
public:
	virtual ~ICalc() {};
	//이 인터페이스에서는 cpp파일이 따로 있는게 아니기 때문에 메소드에 LNK2001에러(참조하는 코드가없다)가 발생함
	//때문에 각 메소드가 아무값이나 return을 하던지 내용을 =0으로 해주어야 한다.
	//이를 순수 가상함수라고 한다. 반드시 오버라이드를 해야됨
	virtual bool calcptr(double prefix, double postfix, double * result, char param) = 0; //포인터로 결과값을 대입
	virtual bool calcref(double prefix, double postfix, double & result, char param) = 0; //참조자로 결과값을 대입
};
