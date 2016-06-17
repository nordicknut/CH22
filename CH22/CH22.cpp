// CH22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <string>
#include "CH22.h"
using namespace std;
/*
22.1 Implement the following functions that find the max and min elements in a first class container.
*/

template<typename ElementType, typename ContainerType> 
ElementType maxElement(ContainerType& container) 
{
	ElementType temp;
	auto p = container.begin();
	temp = *p;
	for (; p != container.end(); p++)
	{
		temp = temp < *p ? *p : temp;
	}
	return temp;
}

template<typename ElementType, typename ContainerType> 
ElementType minElement(ContainerType& container)
{
	ElementType temp;
	auto p = container.begin();
	temp = *p;
	for (; p != container.end(); p++)
	{
		temp = temp > *p ? *p : temp;
	}
	return temp;
}

int main()
{
	vector<int> intVector;
	intVector.push_back(10);
	intVector.push_back(20);
	intVector.push_back(30);
	intVector.push_back(50);
	intVector.push_back(40);

	int iResultMax = maxElement<int>(intVector);
	int iResultMin = minElement<int>(intVector);

	list<double> sList;
	sList.push_back(1.1);
	sList.push_back(3.9);
	sList.push_back(3.4);
	sList.push_back(1.0);

	double sResultMax = maxElement<double>(sList);
	double sResultMin = minElement<double>(sList);

    return 0;
}


