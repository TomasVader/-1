#include<iostream>
using namespace std;

int missingNumber(int*nums,int numberSize) {
	int x = 0;
	
	//�ȸ���Ȼ�����
	for (int i = 1; i <= numberSize; ++i) {
		x=x^ i;
	}

	//�ٸ������е�ÿ�������
	for (int i = 0; i <numberSize; ++i) {
		x=x^ *(nums+i);
	}


	return x;
}

