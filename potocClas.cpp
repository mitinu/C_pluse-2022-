#include "potocClas.h"
void potocClas::PCfuncia()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(10000));
	std::cout << "���" << std::endl;
}
void potocClas::PCfuncia2(int a)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(10000));
	std::cout << "���" << a << std::endl;
}
