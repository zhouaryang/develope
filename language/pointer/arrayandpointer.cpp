#include <iostream>

using namespace std;

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p2; //声明一个int型指针；
    p2=a; //给指针赋值，指向a[0] 等价于 p2 = &a[0]

    cout<<a[0]<<" "<<*p2<<endl;
    //使用指针访问数组方法 //int类型可以+-1，sizeof(int）=4
    cout<<*p2<<" "<<*(p2 + 1)<<endl;
    *(p2 +1) = 20;//修改值
    cout<<a[1]<<" "<<*(p2 + 1)<<endl;

    //测试double数组指针访问 都是通过+-1来实现
    double b[2] = {1.1,2.2};
    double *p3 =b;
    cout<<*p3<<" "<< *(p3+1)<<" "<< sizeof(double)<<endl;
    //测试各个类型所占Byte 64bit win10
    cout<<"char:"<<sizeof(char)<<endl; //1
    cout<<"int:"<<sizeof(int)<<endl; //4
    cout<<"long:"<<sizeof(long)<<endl; //4
    cout<<"double:"<<sizeof(double)<<endl;//8
    cout<<"long long:"<<sizeof(long long)<<endl; //8

    //上面是数组的指针，下面来看下指针数组
    int x =1,y=2;
    int* c[2]={&x,&y};
    cout<<*c[0]<<" "<<*c[1]<<endl;

}