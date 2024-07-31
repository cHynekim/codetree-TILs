#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int bal;
    cin >> bal;

    int book = 3000;
    int mask = 1000;

    if(bal >= book){
        cout << "book";
    }
    else if(bal >= mask & bal < book){
        cout << "mask";
    }
    else cout << "no";
    
    return 0;
}