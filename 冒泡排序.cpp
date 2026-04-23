#include<iostream>

using namespace std;

int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,9,3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	

	for (int j = 0; j < len - 1; j++)
	{
	for (int i = 0; i < len-1-j; i++)
		{
		int fore = arr[i];
		if (fore > arr[i+1])
			{
			
			arr[i] = arr[i + 1];
			arr[i + 1] = fore;
			


			}
		}
}


	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	return 0;

}