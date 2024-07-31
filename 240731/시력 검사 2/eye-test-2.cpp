#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float vis;
    cin >> vis;

    if(vis >= 1.0){
        cout << "High";
    }
    else if(vis >= 0.5 & vis < 1.0){
        cout << "Middle";
    }
    else cout << "Low";

    return 0;
}