//OPERATOR OVERLOADING USING FRIEND FUNCTION
// #include <iostream>
// using namespace std;

// class comp {
//     int real, img;

// public:
//     comp(int r = 0, int i = 0) {
//         real = r;
//         img = i;
//     }

//     void show() {
//         cout << real << " + " << img << "i" << endl;
//     }

//     comp operator+(comp c) {
//         int r = real + c.real;
//         int i = img + c.img;
//         comp temp(r,i);
//         return temp;
        
//     }
// };

// int main() {
//     comp c1(5, 10), c2;

//     c1.show();
//     c2.show();

//     comp c3 = c1 + c2;
//     c3.show();

//     return 0;
// }
#include <iostream>
using namespace std;

class comp {
    int real, img;

public:
    comp(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    void show() {
        cout << real << " + " << img << "i" << endl;
    }

    friend comp operator+(comp c1, comp c2);
};

comp operator+(comp c1, comp c2) {
    int r = c1.real + c2.real;
    int i = c1.img + c2.img;
    comp t(r, i);
    return t;
}

int main() {
    comp c1(5, 10), c2(15, 9);

    c1.show();
    c2.show();

    comp c3 = c1 + c2;
    c3.show();

    return 0;
}


