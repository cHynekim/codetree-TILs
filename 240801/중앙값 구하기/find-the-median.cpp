#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    cin >> a >> b >> c;

    if(a > b){ // 1 3
        if(c > a) // 5 1
            cout << a;
        else
            cout << b;
    }
    else{ 
        if(b < c)
            cout << b;
        else
            cout << c;
    }
    
    return 0;
}