#include<iostream>
#include<pthread.h>
#include<unordered_map>
using namespace std;

void *say_hello(void *args){
    printf("hello from thread \n");
    pthread_exit((void*)1);
}
int main(){
    pthread_t tid;
    int iRet = pthread_create(&tid,NULL,say_hello,NULL);
    if( iRet){
        printf("pthread_create error:iRet =%d\n",iRet);
        return iRet;
    }
    void *retval;
    iRet=pthread_join(tid,&retval);
    if(!iRet){
        printf("pthread_join error: iRet=%d\n",iRet);
        return iRet;
    }
    printf("retval=%ld\n",(long)retval);
}

int fun DP(int n){
    //上台阶，只能1,2级，上n的算法
    
    // 暴力
    
    if(n <1){
        return 0;
    }else if(n ==1 || n==2){
        return n;
    }
    else{
        //递归
        // return DP.暴力（n-1）+DP.baoli(n)
        return 1;
    }
    
    //优化1
    //使用hashset,存储已经计算过的
}

int feibo(int n){
 
    unordered_map<int,int> map;
    
    if(n <1){
        return 0;
    }else if(n ==1 || n==2){
        return n;
    }
    else{
        if(){

        }
        //递归
        // return DP.暴力（n-1）+DP.baoli(n)
    }

//   优化后 这俩应该定义在函数外，全局变量 定义变量先想一下是全局还是局部
unordered_map<int,int> map;
unordered_map<int,int>::iterator it;
    if(n <1){
        return 0;
    }else if(n ==1 || n==2){
        return n;
    }
    else{
        if((it = map.find(n)) != map.end()){
            return map[n];
        }
        else{
            return feibo(n-1)+feibo(n-2);
        }
        
    }

    // 优化2 使用feibonaqie
    //正向来做，从1-n
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


