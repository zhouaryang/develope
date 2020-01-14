#include <iostream>

using  namespace std;
//以下两个方法用于测试函数重载，方法体不同
//方法覆盖（重写）用于在继承时重写方法内部逻辑，方法体相同
int min(int a, int b , int c){ 
    if (a > b ) a = b;
    if (a > c ) a = c ;
    return a;
}
long long min (long long a, long long b , long long c){
    if (a > b ) a = b;
    if (a > c ) a = c ;
    return a;
}
double min(double a, double b){
    if (a-b > (1e-5)) a = b;
    return a;
}
int main(){
    int a=1,b=2,c=3;
    cout<<min(1,2,3)<<endl;
    long long a1 = 100 , b1 = 200 ,c1 = 300;
    cout<<min(a1,b1,c1) << endl;
    double a2 = 1.1 , b2 = 2.2;
    cout<<min(a2,b2)<<endl;
}