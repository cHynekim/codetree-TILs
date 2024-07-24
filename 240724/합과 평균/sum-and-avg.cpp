#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    a += b;
    cout.precision(1);
    cout << a << ' ' << fixed << (double)a / 2;
    return 0;
}