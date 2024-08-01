#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_mat, a_eng, b_mat, b_eng;
    cin >> a_mat >> a_eng >> b_mat >> b_eng;

    if(a_mat == b_mat){
        if(a_eng > b_eng)
            cout << 'A';
        else
            cout << 'B';
    }
    else if(a_mat > b_mat)
        cout << 'A';
    else
        cout << 'B';
        
    return 0;
}