#include <iostream>
#include <vector>
#include <string>

using namespace std;

void three_numbers(int num1, int num2, int num3);

int main() {
    string length;
    cin >> length;
    for(int i = 0; i < stoi(length); ++i) {
        string num1, num2, num3;
        cin >> num1;
        cin >> num2;
        cin >> num3;
        int a = stoi(num1), b = stoi(num2), c = stoi(num3);
        three_numbers(a, b, c);
    }
    return 0;
}

void three_numbers(int num1, int num2, int num3) {
    vector<int> cur{num1, num2, num3};
    sort(cur.begin(), cur.end());
    while(cur[0] + cur[1] < cur[2]) {
        cur[2] = cur[0] + cur[1];
        sort(cur.begin(), cur.end());
    }
    cout << cur[2] - cur[0] << '\n';
}