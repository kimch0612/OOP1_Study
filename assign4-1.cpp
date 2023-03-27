// 예제 4-2
#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "정수를 입력하세요 : ";
    cin >> number;
    if (number % 2 == 0)
        cout << "입력한" << number << "는(은) 짝수입니다.\n";
    if (number % 2 != 0)
        cout << "입력한" << number << "는(은) 홀수입니다.\n";
}