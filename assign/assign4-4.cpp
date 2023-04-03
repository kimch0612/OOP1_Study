// 예제 4-25
#include <iostream>
using namespace std;
int main(){
    int i = 0;

    cout << "while 루프 진입!!" << endl;
    while (i<10){
        if (i==4){
            cout << "\nwhile 루프 탈출!!" << endl;
            break;
        }
        cout << i;
        i++;
    }
    cout << "\ndo while 루프 진입!!" << endl;
    i = 0;
    do {
        if (i == 4){
            cout << "\ndo while 루프 탈출!!" << endl;
            break;
        }
        cout << i;
        i++;
    } while (i<10);
    cout << endl;
}