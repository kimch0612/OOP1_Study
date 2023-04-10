// 예제 5-31
#include <iostream>
using namespace std;

#define add1(a, b) a+b

inline int add2(int a, int b) { return a+b; }
int add3(int a, int b) { return a+b; }
void line() { cout << "------------" << endl; }

int main(){
    int sum;
    sum = 5 * add1(10, 10);
    cout << "매크로 함수 = " << sum << endl;
    sum = 5 * add2(10, 10);
    cout << "인라인 함수 = " << sum << endl;
    sum = 5 * add3(10, 10);
    cout << "일반 함수 = " << sum << endl;
    line();
}