#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a = n * n;

    if(n < 5){
        cout << a << endl << "tiny";
    }
    else cout << a;
    return 0;
}