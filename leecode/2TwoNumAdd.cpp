#include <iostream>
#include <math.h>
using namespace std;

// struct ListNode{
//     ListNode *pre;
//     ListNode *next;
//     int value;
// };

struct ListNode {
      int val;
      ListNode *next;
    //   ListNode():next(NULL){}; //还得来个默认构造函数，否则有含参构造函数之后不会再有默认构造函数 ,后面{}必须有，是已经实现的方法,默认next(NULL)
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         //这种情况没只考虑了三位数加三位数，和不进位，应该考虑到多位数
        int a1 = l1->next->next->val*100 +l1->next->val*10 +l1->val;
        int a2 = l2->next->next->val*100 +l2->next->val*10 +l2->val;
        int a3 = a1 +a2;
        ListNode *l3 = new ListNode(0);
        ListNode *l4 = new ListNode(0);
        ListNode *l5 = new ListNode(0);
        l3->val = a3%10;l3->next = l4;
        l4->val = (a3%100)/10;l4->next = l5;
        l5->val = (a3%1000)/100;
        
        cout<< l3->val<<" "<< l3->next->val<<" "<< l3->next->next->val<<endl;
        return l3;
    }
    ListNode* addTwoNumbers2(ListNode *l1,ListNode *l2){

        //假设未知两个链表的长度
        //存两个链表的长度
        int len1 = 1;int len2 =1; 
        //链表没有存储长度，遍历获取
        ListNode *l3 = new ListNode(0); l3 = l1; 
        ListNode *l4 = new ListNode(0); l4 = l2;
        //l3 l4循环后分别指向两个链表尾部
        while(l3->next != NULL){
            len1++;
            l3 = l3->next;
        }
        while(l4->next != NULL){
            len2 ++;
            l4 = l4->next;
        }
        //比较长度，谁小则在谁的尾部补0
        if(len2 < len1){
            for(int i = 0 ; i < len1-len2;i++){
                ListNode * l5 = new ListNode(0);
                l5->val = 0;
                l4->next = l5;
                l4 = l4->next;
            }
        }else{
            for(int i = 0 ; i < len2-len1;i++){
                ListNode * l6 = new ListNode(0);
                l6->val =0;
                l3->next = l6;
                l3 = l3->next;
            }
        }
        
        //现在处理后两个长度相同了 
        //测试下两个链表的长度和值，均正确
        ListNode *l7 = new ListNode(0); l7 = l1; 
        ListNode *l8 = new ListNode(0); l8 = l2;
        // while(l7->next != NULL){
        //     cout<<l7->val<<endl;
        //     l7 = l7->next;
        // }
        // while(l8->next != NULL){
        //     cout<<l8->val<<endl;
        //     l8 = l8->next;
        // }
        // cout<<"l1 length: "<<len1<<" l2 length: "<<len2<<endl;
        //现在可以实现加法了 长度为len
        int sum1 =0;
        for(int i =0 ; i < max(len1,len2) ;i++){
            sum1 += l7->val *pow(10,i);
            l7 =l7->next;
        }
        int sum2 =0;
        for(int i =0 ; i < max(len1,len2) ;i++){
            sum2 += l8->val *pow(10,i);
            l8 =l8->next;
        }
        cout<< sum1<<" sum2 "<<sum2<<endl;
        // 求和后放到sum1
        sum1 = sum1 + sum2;
        ListNode *l9 = new ListNode(0);
        ListNode *l = new ListNode(0);
        //遍历，可能有进位，需要多添加一位
        for(int i=0 ; i< max(len1,len2);i++){
            ListNode *l10 = new ListNode(0);
            int val = (sum1%((int)pow(10,i+1)))/(pow(10,i)); 
            // cout<<sum1%1<<endl;
            cout<<val<<endl;
            l10->val = val;
            l9 = l10;
            l9 = l9->next;
        }
        // cout<<(int)(sum1/pow(10,max(len1,len2)));
        //在这里考虑有进位的情况
        if((int)(sum1/pow(10,max(len1,len2))) == 1 ){
            ListNode *l10 = new ListNode(0);
            l10->val = 1;
            cout<< l10->val<<endl;
            l9 = l10;
        }
        while( l->next != NULL ){
            cout<<"result:"<<l->val<<endl;
            l = l->next;
        }
        return l;
    }
};


int main(){
    cout<<"hello w"<<endl;
    ListNode * l1 = new ListNode(0);
    ListNode * l2 = new ListNode(0);
    ListNode * l3 = new ListNode(0);
    ListNode * l4 = new ListNode(0);
    ListNode * l5 = new ListNode(0);
    ListNode * l6 = new ListNode(0);

    l1->val = 2 ;
    l3->val =4;l1->next = l3;
    l4->val =3; l3->next = l4;l4->next=NULL;
    l2->val = 5;
    l5->val =6;l2->next =l5;l5->next = NULL;
    l6->val =8;l5->next=l6;l6->next=NULL;
   
    Solution *s ;
    s->addTwoNumbers2(l1,l2);
 
}