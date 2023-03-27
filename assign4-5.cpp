// 예제 4-28
#include <iostream>
using namespace std;
int main(){
    int i;
    i = 15;

    cout << "시작!" << endl;
    while (true) {
        i--;
        if (i > 10) continue;
        if (i == 0) break;
        cout << i << endl;
    }
}