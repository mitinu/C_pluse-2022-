#include "mFunctor.h"
void mFunctor::operator()(int d)
{
	a += d;
	std::cout << "�������� ������� " << a << std::endl;
}
int mFunctor::getA()
{
	return a;
}