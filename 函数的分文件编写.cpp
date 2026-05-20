////创建.h的头文件，
//// 在创建.cpp文件，
//// 在头文件写函数声明，
//// 源文件写函数定义
#include<iostream>
#include "swap.h"
using namespace std;
//
////void swap(int a, int b);
//
//
////void swap(int a, int b) {
////	int temp = b;
////
////		b = a;
////
////		a = temp;
////
////
////		cout << "a= " << a << endl;
////
////		cout << "b= " << b << endl;
//
//}
//
//
int main() {
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");

	return 0;


}