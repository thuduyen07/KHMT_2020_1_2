//#include <iostream>
//
//using namespace std;
//
//class DrawingShape;
//
//class Shape {
//protected:
//	DrawingShape* drawer;
//public:
//	Shape(DrawingShape* ds) {
//		drawer = ds;
//	}
//	virtual void draw() = 0;
//
//};
//
//class DrawingShape {
//public:
//	virtual void draw(Shape* s) = 0;
//};
//
//class DrawingCircle : public DrawingShape {
//public:
//	void draw(Shape* s) {
//		cout << "Draw circle" << endl;
//	}
//};
//
//class DrawingRectangle : public DrawingShape {
//public: 
//	void draw(Shape* s) {
//		cout << "Draw rectangle" << endl;
//	}
//};
//
//class Rectangle: public Shape {
//private:
//	int x;
//	int y;
//	int width;
//	int height;
//
//public:
//	Rectangle(int x, int y, int w, int h, DrawingShape* ds) : Shape(ds) {
//		this->x = x;
//		this->y = y;
//		width = w;
//		height = h;
//	}
//	void draw() {
//		drawer->draw(this);
//	};
//};
//
//class Circle : public Shape {
//private:
//	int x;
//	int y;
//	int radius;
//public:
//	Circle(int x, int y, int radius, DrawingShape* ds) : Shape(ds) {
//		this->x = x;
//		this->y = y;
//		this->radius = radius;
//	}
//	void draw() {
//		drawer->draw(this);
//	}
//};
//
//int main() {
//
//	Shape* shapes;
//
//	DrawingShape* drawRectangle = new DrawingRectangle();
//	Shape* rectangle_1 = new Rectangle(1, 1, 1, 1, drawRectangle);
//	Shape *rectangle_2 = new Rectangle(1, 1, 1, 1, drawRectangle);
//	drawRectangle->draw(rectangle_1);
//	drawRectangle->draw(rectangle_2);
//
//	DrawingShape* drawCircle = new DrawingCircle();
//	Shape* circle = new Circle(1, 1, 3, drawCircle);
//	drawCircle->draw(circle);
//
//	return 0;
//}
//
