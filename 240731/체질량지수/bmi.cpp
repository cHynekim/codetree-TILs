#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h, w;
    cin >> h >> w;

    int b = (10000 * w) / (h * h);

    if(b >= 25){
        cout << b << endl << "Obesity";
    }
    else cout << b;
    return 0;
}