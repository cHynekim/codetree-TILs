#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    cin >> a >> b >> c;

    if(a > b){
        if(c > a) // c > a > b
            cout << a;
        else if(b > c)// a > b / c
            cout << b;
        else
            cout << c;
    }
    else{ 
        if(b < c) // c > b > a
            cout << b;
        else if(a < c)// b > a / c
            cout << c;
        else
            cout << a;
    }

    return 0;
}