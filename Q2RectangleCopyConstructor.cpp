#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l = 0, int w = 0) : length(l), width(w) {}

    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
        cout << "Copy constructor called!" << endl;
    }

    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);
    rect1.display();

    Rectangle rect2 = rect1;
    rect2.display();

    return 0;
}
