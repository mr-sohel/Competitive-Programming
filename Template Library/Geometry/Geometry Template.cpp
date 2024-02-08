#include <bits/stdc++.h>

using namespace std;

typedef long double T;
typedef complex <T> point;

#define x real()
#define y imag()

namespace std {
bool operator < (const point &A, const point &B) {
    return A.x == B.x ? A.y < B.y : A.x < B.x;
}
}

T dot (point A, point B) { return (conj(A) * B).x; }
T cross (point A, point B) { return (conj(A) * B).y; }
point unit (point P) { return P / abs(P); }

T projectionLength (point A, point B) {
    return dot(A, B) / abs(A);
}

T triangleArea (point A, point B, point C) {
    return cross(B - A, C - A) / 2;
}

int whichSide (point A, point B, point C) {
    T det = cross(B - A, C - A);
    if (det == 0) return 0;
    return det < 0 ? -1 : 1;
}

T pointToSegment (point P, point A, point B) {
    if (dot(B - A, P - A) < 0) return abs(P - A);
    if (dot(A - B, P - B) < 0) return abs(P - B);
    return abs(cross(B - A, P - A)) / abs(B - A);
}

point lineIntersection (point A, point C, point B, point D) {
    point dA = C - A, dB = D - B;
    T det = cross(dA, dB);
    if (det == 0) return point(-123456789, -123456789);
    T s = cross(B - A, dB) / det;
    return A + dA * s;
}

void getPoint (point &P) {
    T _x, _y;
    cin >> _x >> _y;
    P = point(_x, _y);
}

int main() {
    point P(1, 2), Q(3, 9);
    cout << P << '\n';
    cout << unit(P) << '\n';
    cout << P + Q << '\n';
    cout << P - Q << '\n';
    cout << P.x << " " << P.y << '\n';
    point A, B, C;
    getPoint(A), getPoint(B), getPoint(C);
    cout << triangleArea(A, B, C) << '\n';
    return 0;
}

