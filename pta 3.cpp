// 2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

int main()
{
	int input;
	cin >> input;
	int output = 0;
	for (int n = 3; n > 0; n--)
	{
		output = 10 * (input % 10 + output);
		input /= 10;
	}
	cout << output / 10 << endl;

	return 0;
}