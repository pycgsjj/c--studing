/*
1，单精度 float 4字节，精度7位
2,双精度 double 8字节，精度15位

*/

#include<iostream>
using namespace std;
int main()
{
	float a = 3.1415926f;
	double b = 3.1415926;
	cout << "float:" << sizeof(a) << endl;
	cout << "double:" << sizeof(b) << endl;
	system("pause");
	return 0;
}