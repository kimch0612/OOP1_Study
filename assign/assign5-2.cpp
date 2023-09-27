// 예제 5-8
#include <iostream>
using namespace std;
void func(int, int);
void line(){ cout << "------------------------" << endl; }

int main(){
    int a, b;
    cout << "2개의 정수를 입력: "; cin >> a >> b;
    line();
    cout << "func()함수 호출 전 a = " << a << "b = " << b << endl;
    func(a, b);
    cout << "func()함수 호출 후 a = " << a << "b = " << b << endl;
    line();
    return 0;
}

void func(int a, int b){
    a = a * 2;
    b = b * 2;
    cout << "func() 함수 내 연산 후 a = " << a << "b = " << b << endl;
}