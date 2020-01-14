#include <iostream>

using namespace std;

int main(){
    int p1=1;
    int *p2; //声明一个int型指针；
    p2=&p1; //给指针赋值，指向p1，即取地址p1赋值给p2

    cout<<p1<<" "<<*p2<<endl;
    p1 = 2;//修改p1的值，从而观察*p2
    cout<<p1<<" "<<*p2<<endl;
    *p2 = 3;//修改指針指向的值，观察p1
    cout<<p1<<" "<<*p2<<endl;
}