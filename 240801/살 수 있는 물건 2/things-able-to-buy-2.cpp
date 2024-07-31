#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int bal;
    cin >> bal;

    int book = 3000, mask = 1000, pen = 500;

    if(bal >= book){
        cout << "book";
    }
    else if(bal >= 1000){
        cout << "mask";
    }
    else if(bal >= pen){
        cout << "pen";
    }
    else cout << "no";

    return 0;
}