#pragma once
#define interface class
//�������̽�
interface ICalc
{
public:
	virtual ~ICalc() {};
	//�� �������̽������� cpp������ ���� �ִ°� �ƴϱ� ������ �޼ҵ忡 LNK2001����(�����ϴ� �ڵ尡����)�� �߻���
	//������ �� �޼ҵ尡 �ƹ����̳� return�� �ϴ��� ������ =0���� ���־�� �Ѵ�.
	//�̸� ���� �����Լ���� �Ѵ�. �ݵ�� �������̵带 �ؾߵ�
	virtual bool calcptr(double prefix, double postfix, double * result, char param) = 0; //�����ͷ� ������� ����
	virtual bool calcref(double prefix, double postfix, double & result, char param) = 0; //�����ڷ� ������� ����
};
