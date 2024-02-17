
#include<iostream>
using namespace std;
#include"标头.h"//不加<>方括号

bool mid_search(int a[],int b, int len) {
	int low = 0;
	int high = len - 1;
	while (low<=high) {
		len = len / 2;
		if (b < a[(low + high)/2]) high= (low + high) / 2-1;
		else if (b > a[(low + high) / 2]) low = (low + high) / 2+1;
		else return true;
	}
	return false;
}

int main() {

	int data[4][4] = {
		{1, 2, 8, 9},
		{2, 4, 9, 12},
		{4, 7, 10, 13},
		{6, 8, 11, 15}
	};//二维数组

	int cinn;
	//cout << &data[0][0] << endl;
	cout << "请输入你想要查找的整数：" << endl;
	cin >> cinn;

	bool temp = false;
	for (int i = 0; i <= 3; ++i) {
		temp = mid_search(data[i], cinn, 4);
	}

	if (temp == true) {
		cout << "查找成功！" << endl;
	}
	else {
		cout << "查找失败！" << endl;
	}

	system("pause");
	return 0;
}