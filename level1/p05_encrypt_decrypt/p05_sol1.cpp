//
// Created by Emerson on 2024/9/23.
//
#include <iostream>
#include<string>
using namespace std;

string yuanma;
string mima;
int target;

void mimahanshu(string& yuanma, int& target) {
    for (int i = 0; i < yuanma.size(); ++i) {
        mima = mima + yuanma[(i + target) % yuanma.size()];
    }
}

string jiemahanshu(string& mima, int& target,string &jiema) {
    for (int i = 0; i < mima.size(); ++i) {
        jiema = jiema + mima[(i + mima.size() - target) % mima.size()];
    }

    return jiema;
}
int main() {
    cout <<"������Դ��:";
    cin >> yuanma;
    cout <<"������ı�λ��:";
    cin >> target;
    mimahanshu(yuanma, target);
    cout <<"����Ϊ" << mima << endl;
    string jiema;
    jiema = jiemahanshu(mima, target, jiema);
    cout << "����Ϊ" << jiema << endl;

}