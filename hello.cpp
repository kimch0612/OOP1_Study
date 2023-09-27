#include <iostream>

using namespace std;

class Point {
private :
	int x,  y;
public :
	Point(int _x=0, int _y=0) : x(_x), y(_y) {}
	Point operator+(const Point& p);
};
Point Point::operator+(const Point& p) {
	Point temp(x+p.x, y+p.y);
	return temp;
}
int main(void) {
	Point p1(1, 2);
	Point p2(2, 3);
}