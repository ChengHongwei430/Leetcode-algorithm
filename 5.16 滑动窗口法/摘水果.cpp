

# include <iostream>
# include <string>
# include <vector>
# include <unordered_map>
using namespace std;


int main() {

    int fruits[8] = { 1,2,3,3,1,1,1,2 };

    //ͨ���������ڣ������������
        //��������ֻ�ܺ�������Ԫ��
    int len = 8;

    unordered_map<int, int> mymap;
    int maxlen = INT32_MIN;//��¼�ҵ�����󳤶ȣ���ʼ��Ϊ��Сֵ
    int i = 0;
    int sizef = 0;
    for (int j = 0; j < len; ++j) {
        mymap[fruits[j]] = mymap[fruits[j]] + 1;//��ʼ��Ĭ��Ϊ0
        //�������ĸ���ˮ����������һ��
        sizef++;
        while (mymap.size() > 2 && !mymap.empty()) {
            auto it = mymap.find(fruits[i++]);
            ////////�ҵ���Ҫ�������Ǹ���ֵ��,ʹ��find����
            it->second--;
            if (it->second == 0) mymap.erase(it);
            sizef--;
        }
        maxlen = sizef > maxlen ? sizef : maxlen;
        for (unordered_map<int, int>::iterator it = mymap.begin(); it != mymap.end(); it++) {//���const,ֻ�������Բż�
            cout << it->first<<" " << it->second << endl;            
        }
        cout << "������ˮ������" << sizef << endl;
        cout << "---------------" << endl;
        
    }

    cout << maxlen << endl;

    system("pause");

};
















