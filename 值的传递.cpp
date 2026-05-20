//#include<iostream>
//
//using namespace std;
////如果函数不需要返回值，声明时写void
//void swap(int a, int b)
//{
//
//
//	cout << "Before swap: x = " << a << ", y = " << b << endl;
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "After swap: x = " << a << ", y = " << b << endl;
//}
////值传递：函数调用时，实参的值会被复制给形参，在函数内部对形参的修改不会影响实参的值
//int main()
//{
//	int x = 10;
//	int y = 20;
//	cout << " x = " << x << ", y = " << y << endl;
//	swap(x, y);
//	cout << " x = " << x << ", y = " << y << endl;
//
//	system("pause");
//	return 0;
//}