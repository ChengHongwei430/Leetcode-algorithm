#include<iostream>
using namespace std;
#include"标头.h"//不加<>方括号

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

	int i = 0;
	int j = 3;

	while(i<=3&&j>=0){
			if (cinn == data[i][j]) {
				cout << "第一个该数位于第" <<i+1<<"行，"<< "第" <<j+1<< "列" << endl;
				system("pause");
				return 0;
			}
			else if (cinn > data[i][j]) ++i;
			else --j;
	}

	cout << "未找到！" << endl;
	system("pause");
	return 0;
}