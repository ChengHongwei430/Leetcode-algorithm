
//请记住，main函数的返回类型一定是int
// 
//iostream，就提供了输入和输出的功能
// 
//当使用C++标准库的功能时，需要使用命名空间限定符来指明你要使用的内容位于哪个命名空间中。
//通常，会使用 std:: 的前缀，表示正在使用C++标准库中的内容。
//标准库定义的所有名字都在命名空间std中，
//如果我们要使用cin的话，就要先找到命名空间，然后再使用cin，即：std::cin\
//统一申明使用命名空间 std
//using namespace std

//while(std::cin >> a >> b) 表示持续输入a 和 b


#include<iostream>
using namespace std;

int main() {

    int a, b;

    while (cin >> a >> b) {///////cin后面不能写endl

        int result = a + b;
        cout << result << endl;

    }
    system("pause");

    return 0;
}