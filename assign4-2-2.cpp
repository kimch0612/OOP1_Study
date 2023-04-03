// 예제 4-6
#include <iostream>
using namespace std;
int main(){
    int a, b, c;

    cout << "3개의 수를 입력하세요!!" << endl; 
    cin >> a >> b >> c;

    cout << "\n제일 큰 값은" << endl;
    if (a > b){
        if (a > c){
            cout << a << endl;
        }
        else cout << c << endl;
    }
    else {
        if (c > b){
            cout << c << endl;
        }
        else cout << b << endl;
    }
}