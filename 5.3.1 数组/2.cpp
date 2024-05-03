
//do while循环会先去执行循环体内的代码块，然后再检查条件判断，
// 如果条件判断为真，则继续执行下一次循环迭代

//在while(条件判断)循环中，条件判断通常是一个布尔值，
// 即true表示真，false表示假，但是假设我们给定的是一个整数类型的值，
// 编译器会帮助我们进行数据类型转换，将之转换成布尔值，
// 如果整数的值为0，则条件的值为false, 其他非0的数都会转换成true。



#include<iostream>
using namespace std;

int main() {
    int N, a, b;
    while (cin >> N) {
        for (int i = 1; i <= N; ++i) {//for循环使用分号隔开
            cin >> a >> b;
            int result = a + b;
            cout << result << endl;
        }
    }
    return 0;
}