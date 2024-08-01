#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요. 1 3 5 7 / 8 10 12
    int m;
    cin >> m;

    if(m <= 7){
        if(m % 2)
            cout << 31;
        else if(m == 2)
            cout << 28;
        else
            cout << 30;
    }
    else{
        if(m % 2)
            cout << 30;
        else
            cout << 31;
    }

    return 0;
}