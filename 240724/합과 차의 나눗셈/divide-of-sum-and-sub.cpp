#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int sum, dif;
    sum = a + b;
    dif = a - b;

    cout.precision(2);
    cout << fixed << (float)sum / dif;
    return 0;
}