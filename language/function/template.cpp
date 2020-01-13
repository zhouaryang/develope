#include <iostream>

using namespace std;

template <typename T> //这是模板，
T min (T a , T b, T c){
    if (a > b) a = b;
    if (a > c) a = c ;
    return a;
}

int main(){
    int a=1, b=2,c =3;
    cout<<min(a,b,c)<<endl;
    double d =1.2 , e = 3.1 , f = 9.2;
    cout<<min(d,e,f) << endl;
    return 0;
}