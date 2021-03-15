//
// Created by 10528 on 2021/3/10.
//
# include <iostream>

using namespace std;

int main() {
    string in;
    cin >> in;
    int len = in.length(), result = 0, countP = 0, countT = 0;
    for (int i = 0; i < len; i++) {
        if (in[i] == 'T')
            countT++;
    }
    for (int i = 0; i < len; ++i) {
        if (in[i] == 'P') countP++;
        if (in[i] == 'T') countT--;
        if (in[i] == 'A') result = result + (countP * countT);
    }
    cout << result;
}