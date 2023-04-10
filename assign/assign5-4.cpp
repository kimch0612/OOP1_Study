// 예제 5-19
#include <iostream>
using namespace std;

int func() {
    cout << "func()의 반환값 = 10" << endl;
    return 10;
}
int func(int a, int b) {
    cout << "func(int a, int b) 반환값 = "
        << a + b << endl;
    return a + b;
}
int main(){
    func();
    func(20, 30);
}