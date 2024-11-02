#include<iostream>

using namespace std;

int main() {


	int arr[10]{ 10,20,30,40,60,100,900000 };

	int sherch = 30;
	for (int i = 0; i <= 10; i++)
	{
		cout << " we are in iteration" << i + 1 << endl;


		if (sherch == arr[i])
		{
			cout << endl << sherch << "  :  found a position" << i << endl << endl;
			break;
		}


	}















	return 0;
}

