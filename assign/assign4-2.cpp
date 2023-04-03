// 예제 4-9
#include <iostream>
using namespace std;
int main(){
    int score;
    cout << "점수를 입력하시오: ";
    cin >> score;

    if (90 <= score && score <= 100)
        cout << score << "점이므로 A학점입니다." << endl;
    else if (80 <= score && score <= 89)
        cout << score << "점이므로 B학점입니다." << endl;
    else if (70 <= score && score <= 79)
        cout << score << "점이므로 C학점입니다." << endl;
    else if (60 <= score && score <= 69)
        cout << score << "점이므로 D학점입니다." << endl;
    else cout << score << "점이므로 F학점입니다." << endl;
}