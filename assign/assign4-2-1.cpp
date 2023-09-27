// 예제 4-5
#include <iostream>
using namespace std;
int main(){
    int num;
    int a = 0;
    cout << "Else if 실습";
    num = 13 / 2;
    if (num == 6) cout << "13 / 2 = 6" << endl;
    else cout << "13 / 2 = " + num << endl;
    cout << "\n블록 Else if 실습" << endl;
    if (a == 0) {
        cout << "a는 0이므로" << endl;
        cout << "이 블록을 통과한다" << endl;}
    else {
        cout << "a는 0이 아니다." << endl;
    }
}