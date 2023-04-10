// 예제 5-3
#include <iostream>
using namespace std;

int MAX(const int, const int);

int main(){
    int first, second, max;
    cout << "첫번째 값을 입력하세요 : ";
    cin >> first;
    cout << "두번째 값을 입력하세요 : ";
    cin >> second;
    max = MAX(first, second);
    cout << "\n 최대값: " << max << endl;
    return 0;
}

int MAX(const int a, const int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}