// 예제 4-18
#include <iostream>
using namespace std;
int main(){
    char choice;
    do {
        cout << "제어/반복문" << endl;
        cout << "1. if" << endl;
        cout << "2. switch" << endl;
        cout << "3. while" << endl;
        cout << "4. do while" << endl;
        cout << "5. for\n" << endl;
        cout << "번호 선택" << endl;
        cin >> choice;
    } while (choice < '1' || choice > '5');
    cout << "\n" << endl;
    switch (choice) {
        case '1':
            cout << "if 문: \n" << endl;
            cout << "if(조건문) 문장1;" << endl;
            cout << "else 문장2;" << endl;
            break;
        case '2':
            cout << "switch문: \n" << endl;
            cout << "switch(조건문) {" << endl;
            cout << "case 상수:" << endl;
            cout << "문장..." << endl;
            cout << "break;" << endl;
            cout << " // ..." << endl;
            cout << "}" << endl;
            break;
        case '3':
            cout << "while문: \n" << endl;
            cout << "while (조건문) 문장;" << endl;
            break;
        case '4':
            cout << "do while문: \n" << endl;
            cout << "do {" << endl;
            cout << "문장들....." << endl;
            cout << "}while (조건문) << endl;" << endl;
            break;
        case '5':
            cout << "for문: \n" << endl;
            cout << "for (초기식;조건식;반복식;)" << endl;
            cout << "문장들......" << endl;
            break;
    }
}