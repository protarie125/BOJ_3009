#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x4{ 0 }, y4{ 0 };

    int x1, y1;
    cin >> x1 >> y1;
    x4 += x1;
    y4 += y1;

    int x2, y2;
    cin >> x2 >> y2;
    if (x2 == x4) {
        x4 = 0;
    }
    else {
        x4 += x2;
    }

    if (y2 == y4) {
        y4 = 0;
    }
    else {
        y4 += y2;
    }

    int x3, y3;
    cin >> x3 >> y3;
    if (0 == x4) {
        x4 = x3;
    }
    else {
        x4 -= x3;
    }

    if (0 == y4) {
        y4 = y3;
    }
    else {
        y4 -= y3;
    }

    cout << x4 << ' ' << y4;

    return 0;
}