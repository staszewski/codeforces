//
// Created by Kamil Staszewski on 22/07/2023.
//
#include <iostream>

void processData(int a, int b, int c) {
    if (a + b >= 10 || b + c >= 10 || a + c >= 10) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    int n;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int a, b, c;
        std::cin >> a >> b >> c;
        processData(a, b, c);
    }

    return 0;
}
