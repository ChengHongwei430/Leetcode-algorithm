

# include <iostream>
# include <string>
# include <vector>
# include <unordered_map>
using namespace std;


int main() {

    int fruits[8] = { 1,2,3,3,1,1,1,2 };

    //通过滑动窗口，找最长的子数组
        //子数组中只能含有两种元素
    int len = 8;

    unordered_map<int, int> mymap;
    int maxlen = INT32_MIN;//记录找到的最大长度，初始化为最小值
    int i = 0;
    int sizef = 0;
    for (int j = 0; j < len; ++j) {
        mymap[fruits[j]] = mymap[fruits[j]] + 1;//初始化默认为0
        //将遇到的该种水果数量增加一个
        sizef++;
        while (mymap.size() > 2 && !mymap.empty()) {
            auto it = mymap.find(fruits[i++]);
            ////////找到将要出窗的那个键值对,使用find函数
            it->second--;
            if (it->second == 0) mymap.erase(it);
            sizef--;
        }
        maxlen = sizef > maxlen ? sizef : maxlen;
        for (unordered_map<int, int>::iterator it = mymap.begin(); it != mymap.end(); it++) {//别加const,只有新特性才加
            cout << it->first<<" " << it->second << endl;            
        }
        cout << "篮子中水果数：" << sizef << endl;
        cout << "---------------" << endl;
        
    }

    cout << maxlen << endl;

    system("pause");

};
















