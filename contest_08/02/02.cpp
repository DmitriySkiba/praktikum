class Vector; 
class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    void move(const Vector& v);
};

class Vector {
public:
    int x, y;

    Vector(const Point& start, const Point& end)
        : x(end.x - start.x), y(end.y - start.y) {}
};

void Point::move(const Vector& v) {
    x += v.x;
    y += v.y;
}