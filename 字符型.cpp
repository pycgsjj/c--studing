//#include<iostream>
//
//using namespace std;
//
////字符型要求占用一个字节,因为它的底层是ascll码,每个字符对应一个ascll码,每个ascll码占用一个字节
//
////创建字符时,必须使用单引号,如果使用双引号,编译器会认为是字符串,而不是字符
//
////单引号内只能有一个字符,如果有多个字符,编译器会报错
//
////字符型可以直接输出,也可以转换成整数输出,输出的整数就是字符对应的ascll码，比如'A'对应的ascll码是65,所以输出'A'时,输出的是65
//
////int(a)转换，a_97,A_65
//int main()
//{
//	char a = 'A';
//	cout << "char:" << sizeof(a) << endl;
//
//	cout << "char:" << int(a) << endl;
//	return 0;
//}