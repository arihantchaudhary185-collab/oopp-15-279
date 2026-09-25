// define a class point with two private parameter show them by help of const
#include<iostream>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point(int x,int y){
        this->x=x;
        this->y=y;
    }




   void show(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main(){
    point p(3,5);
    p.show();
}