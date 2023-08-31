#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    int x, y;
    friend void Distance(Point m, Point n);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point si(" << x << "," << y << ")" << endl;
    }
};
void Distance(Point m, Point n)
{
    float dist = sqrt(((n.x - m.x) * (n.x - m.x)) + ((n.y - m.y) * (n.y - m.y)));
    cout << "The distance between two points " << dist << endl;
}

int main()
{
    Point p(1, 1);
    Point q(4, 6);

    p.displayPoint();
    q.displayPoint();

    Distance(p,q);

    return 0;
}