//
// Created by Kamil Staszewski on 22/07/2023.
//
#include <iostream>

int processData(int a, int b, int c) {
    if (a + b + c > 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    int result = 0;
    std::cout << std::noshowpos;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int a, b, c;
        std::cin >> a >> b >> c;
        result += processData(a, b, c);
    }

    std::cout << result << std::endl;

    return 0;
}
