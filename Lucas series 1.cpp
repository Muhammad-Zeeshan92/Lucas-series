#include<iostream>
using namespace std;

int main() {
    int num = 1;
    int sum = 1;
    while (sum < 16) {
        cout << "\t" << num;
        if (sum % 2 != 0) {
            num = num - 1;
        }
        else {
            num = num + 2;
        }
        sum++;
    }
}
