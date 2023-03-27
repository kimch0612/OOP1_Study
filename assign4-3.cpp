// 예제 4-22
#include <iostream>
using namespace std;
int main(){
    int i, k;
    cout << "\n\t\t\t 구구단" << endl;
    cout << "\t\t\t ========\n\n" << endl;
    for (i=1; i<=9; i++){
        for (k=1; k<=9; k++){
            cout << k << "*" << i << "="
                << ((i*k) < 10 ? " " : "")
                << (i*k) << " ";
        }
        cout << "\n" << endl;
    }
}