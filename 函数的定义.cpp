/*返回值的类型 函数名(参数列表) {
	//函数体
	return 返回值;
}
*/
#include<iostream>
using namespace std;

int add(int a, int b)
{
	int sum = a + b;
	cout << "result = " << sum << endl;
	return sum;
};

int main()
{
	int num1 = 10;
	int num2 = 20;
	add(num1, num2);
	
	return 0;
}