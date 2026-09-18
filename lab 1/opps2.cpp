#include<iostream>
using namespace std;
void swapbyvalue(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;
}
void swapbyreference(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b<<endl;
}
void swapbyadress(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    cout << *a << " " << *b<<endl;
}

int main(){
    int a,b;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;

swapbyvalue(a,b);
swapbyreference(a,b);
swapbyadress(&a,&b);


}