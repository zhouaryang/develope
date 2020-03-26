#include <iostream>
//判断系统是big endian 还是 little endian
using namespace std;

//定义一个共用体
union TEST{
    short a;
    char b [sizeof(short)];
};
int main(){
    TEST test;
    test.a = 0x0102;//不能引用公用体变量，只能引用公用体变量中的成员
    if (test.b[0]==0x01&&test.b[1]==0x02){
        cout<<"big endian."<<endl;
    }
    else if (test.b[0]==0x02 && test.b[1] == 0x01){
        cout<<"small endian."<<endl;
    }else{
        cout<<"unknown."<<endl;
    }
    return 0;
}
//大端存储是低地址存放高位有效字节，小端存储指高地址存放
//output: 
//small endian.