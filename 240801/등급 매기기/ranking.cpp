#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int scr;
    cin >> scr;

    if(scr >= 90){
        cout << 'A';
    }
    else if(scr < 90 & scr >= 80){
        cout << 'B';
    }
    else if(scr < 80 & scr >= 70){
        cout << 'C';
    }
    else if(scr < 70 & scr >= 60){
        cout << 'D';
    }
    else cout << 'F';

    return 0;
}