#include <iostream>
#include <string>

using namespace std;

int main(){
    //以下三种，其实都是从string常量转为char*
    char str[] = "I am a programer.";
    char * str1 = "abc";
    char * str2[] = {"hello world","goodbey"};
    string str3 = "I am a programer too.";

    cout<< "str:"<< str<<endl;
    cout<<"str1:"<< str1<<endl;
    cout<<"str2[0]:"<<str2[0]<<endl;
    cout<<"str3:"<<str3<<endl;
    return 0;
}