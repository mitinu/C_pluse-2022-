#pragma once
#include<iostream>    
class mFunctor
{
	int a = 0;
public:
	void operator()(int d);
	int getA();
};

