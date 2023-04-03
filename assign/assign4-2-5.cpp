// 예제 4-20
#include <iostream>
using namespace std;
int main(){
    int n = 0, sum = 0;
    for (n=0; n<=100; n++)
        sum = sum + n;
    cout << "1에서 100까지 전체 합계 = " << sum << endl;
    sum = 0;
    for (n=0; n<=100; n=n+2)
        sum = sum + n;
    cout << "1에서 100까지의 짝수 합계 = " << sum << endl;
    sum = 0;
    for (n=1; n<=100; n=n+2)
        sum = sum + n;
    cout << "1에서 100까지 홀수 합계 = " << sum << endl;
}