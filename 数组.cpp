////数组特点，数据元素都是相同的类型，数组名是一个常量指针，
//// 数组元素在内存中是连续存储的，可以通过下标访问数组元素。
//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	/*定义方法1*/
//
//	int score[5];
//	//利用循环给数组元素赋值
//	//for(int i = 0; i < 5; i++)
//	//{
//	//	cout << "请输入第" << i+1 << "个成绩: ";
//	//	cin >> score[i];//等价于score[i] = i+1
//	//}
//
//
//	//定义方法2
//	int score2[5] = { 90, 80, 70, 60, 50 };
//
//	//定义方法3
//	int score3[] = { 90, 80 };//剩余元素默认初始化为0
//
//
//	cout << sizeof(score) << endl;//输出数组占用的字节数
//	cout << sizeof(score[0]) << endl;//输出数组元素占用的字节数
//	cout << sizeof(score) / sizeof(score[0]) << endl;//输出数组元素的个数	
//	cout << (int)score << endl;//16转10进制地址
//	cout << (int) & score[0] << endl;//&取值符,首地址
//
//
//	system("pause");
//	return 0;
//}