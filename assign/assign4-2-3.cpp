// 예제 4-12
#include <iostream>
using namespace std;
int main(){
    int score;
    cout << "정수를 입력하세요(0~100): " << endl;
    cin >> score;

    if (0 >= score || score >= 100)
        cout << "정수를 잘못 입력하셨습니다" << endl;
    else {
        cout << endl << "학생의 점수는 " << score << "이므로 ";
        switch (score / 10){
            case 9: case 10: cout << "A"; break;
            case 8: cout << "B"; break;
            case 7: cout << "C"; break;
            case 6: cout << "D"; break;
            default: cout << "F";
        }
        cout << "학점 입니다." << endl;
    }
}