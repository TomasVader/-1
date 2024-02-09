#include<iostream>
using namespace std;

int missingNumber(int*nums,int numberSize) {
	int x = 0;
	
	//先跟自然数异或
	for (int i = 1; i <= numberSize; ++i) {
		x=x^ i;
	}

	//再跟数组中的每个数异或
	for (int i = 0; i <numberSize; ++i) {
		x=x^ *(nums+i);
	}


	return x;
}

