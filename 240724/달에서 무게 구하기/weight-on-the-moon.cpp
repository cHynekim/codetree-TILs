#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int weight = 13;
    cout << weight << " * ";
    double ratio = 0.165, sum = weight * ratio;
    cout << fixed;
    cout.precision(6);
    cout << ratio << " = " << sum;
    return 0;
}