#include"factorial.h"
std::recursive_mutex mtx;
int factorial(int a)
{
	mtx.lock(); 
	if (a > 1)
	{
		int d = a * factorial(d = a - 1);
		mtx.unlock();
		return d;
	}
	else
	{
		mtx.unlock();
		return 1;
	}
}