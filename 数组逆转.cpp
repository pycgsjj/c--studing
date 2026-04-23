//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	int arr1[5];
//	int j = 0;
//
//	//我的做法
//	/*for (int i= sizeof(arr) / sizeof(arr[0])-1;i>=0;i=i-1)
//	{
//
//		arr1[i] = arr[j];
//
//		j++;
//	}*/
//
//
//
//	//老师的做法
//
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//
//
//
//	}
//
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//	system("pause");
//
//
//	return 0;
//
//}
