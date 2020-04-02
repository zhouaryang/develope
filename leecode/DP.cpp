#include <iostream>
#include <unordered_map>

using namespace std;
unordered_map<int,int> map;
unordered_map<int,int>::iterator it;

int feibo(int n){

    
    // if(n <1){
    //     return 0;
    // }else if(n ==1 || n==2){
    //     return n;
    // }
    // else{
    //     if((it = map.find(n)) != map.end()){
    //         return map[n];
    //     }
    //     else{
    //         return feibo(n-1)+feibo(n-2);
    //     }
        
    // }
    // return 0;

     if(n<0){
        return 0;
    }
    if(n == 1 || n==2){
        return n;
    }
    int f1 =0, f2 = 1, sum = 0;
    for(int i =1;i <= n;i++){
        sum = f1 + f2;
        f1 = f2;
        f2 = sum;
    }
    return sum;
}

int main(){
    cout<<feibo(4)<<endl;
    return 0;
}