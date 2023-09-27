// 예제 5-11
#include <iostream>
using namespace std;
void line(){
    for (int i = 0; i < 5; i++)
        cout << "------------";
    cout << endl;
}
int main(){
    int a, b, *ap, *bp;
    ap = &a;
    bp = &b;
    cout << "2개의 정수 입력 : "; cin >> a >> b;
    line();
    cout << "a의 주소 => " << &a << "\t a의 값 => " << a << endl;
    cout << "b의 주소 => " << &b << "\t b의 값 => " << b << endl;
    cout << "ap의 값 => " << ap << "\t ap가 가르키는 값 => " << *ap << endl;
    cout << "bp의 값 => " << bp << "\t bp가 가르키는 값 => " << *bp << endl;
}