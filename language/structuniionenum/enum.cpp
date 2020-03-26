#include <iostream>

using namespace std;

int main(){
    enum weather {sunny,cloudy,rainy,windy};
    //其中sunny=0,cloudy =1 ,依次是2,3,默认第一个是0
    enum fruits{apple=3,orange,banana=7,bear};
    //orange4 bear 8,也可以显示赋值，接下来的枚举都会在前一个的基础上加1
    enum ongline_city{beijing=1,shenzhen =3,guangzhou=1,shanghai=2};
    //枚举中取值可以重复
}