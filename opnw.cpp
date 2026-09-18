// #include<iostream>
// using namespace std;
// class point{
// private:
// int x,y;
// public:
// point():x{0},y{0}{
//     cout<<"default constracutor";

// }
// point(int p,int q):x{p},y{q}{
//     cout<<"parameterized constractor"<<endl;
// }
// int add(point q){
//    return r;
// }
// void show(){
//     cout<<x<<endl;
//     cout<<y<<endl;
// }


// };

// int main(){
// point p,q(20,50);
// point p(5,10),q(20,50);
// p.show();
// q.show();
// point r=p.add(q);
// return 0;
// }


#include<iostream>
using namespace std;

class point{
private:
    int x,y;

public:
    point():x(0),y(0){
        cout<<"Default constructor"<<endl;
    }

    point(int p,int q):x(p),y(q){
        cout<<"Parameterized constructor"<<endl;
    }

    point add(point q){
        point r;
        r.x = x + q.x;
        r.y = y + q.y;
        return r;
    }

    void show(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
};

int main(){

    point p(5,10), q(20,50);

    p.show();
    q.show();

    point r = p.add(q);

    r.show();

    return 0;
}