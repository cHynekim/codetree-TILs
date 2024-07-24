#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int d, m, y;

    cin >> m;
    cin.get();
    cin >> d;
    cin.get();
    cin >> y;

    char p = '.';
    cout << y << p << m << p << d;
    return 0;
}