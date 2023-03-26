// 예제 3-12
#include <iostream>
using namespace std;
int main(){
    int value;
    cout << "값을 입력하세요!! : ";
    cin >> value;
    cout << ((value > 0) ? " 양수입니다!!" :
    (value == 0) ? " 0입니다!!" : " 음수입니다!! ");
    cout << endl;
}