//// 函数声明可以有多次，但函数定义只能有一次。函数声明告诉编译器函数的名称、返回类型和参数类型，而函数定义则提供了函数的具体实现。
//#include <iostream>
//using namespace std;
//
//int max(int a, int b) // 函数声明
//{
//	return a > b ? a : b;
//
//}
//
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int result = max(x, y); // 函数调用
//	cout << "The maximum value is: " << result << endl;
//	return 0;
//}
//
//
////可以在函数定义之前进行函数声明，以便在函数调用时编译器能够识别函数的存在。例如：
////可以不写函数体,但声明只能写一次，定义可以多次覆盖
//int max(int a, int b); // 函数声明