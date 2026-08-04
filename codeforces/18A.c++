#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
};

int dist(const Point& p1, const Point& p2) {
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;
    return dx * dx + dy * dy;
}

bool is_right_triangle(Point a, Point b, Point c) {
    int cross_product = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
    int d1 = dist(a, b);
    int d2 = dist(b, c);
    int d3 = dist(c, a);
    return (d1 + d2 == d3) || (d1 + d3 == d2) || (d2 + d3 == d1);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Point pts[3];
    for (int i = 0; i < 3; ++i) {
        if (!(cin >> pts[i].x >> pts[i].y)) return 0;
    }
    if (is_right_triangle(pts[0], pts[1], pts[2])) {
        cout << "RIGHT\n";
        return 0;
    }
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    for (int i = 0; i < 3; ++i) {
        for (int d = 0; d < 4; ++d) {
            Point temp[3] = {pts[0], pts[1], pts[2]};
            temp[i].x += dx[d];
            temp[i].y += dy[d];
            if (is_right_triangle(temp[0], temp[1], temp[2])) {
                cout << "ALMOST\n";
                return 0;
            }
        }
    }
    cout << "NEITHER\n";
    return 0;
}