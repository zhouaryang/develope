#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode():next(NULL){};
      ListNode(int x) : val(x), next(NULL) {}
};

ListNode* tailk(ListNode *head ,int k){
    //前后指针
    ListNode* quick =head;
    ListNode* low =head;
     while (quick != NULL) {
            quick = quick->next;
            if (k == 0) 
                low = low->next;
            else 
                k--;
        }
        return low;
}
int main(){
    ListNode * l1 =new ListNode(0) ;
    ListNode * l2 =new ListNode(0) ;
    ListNode * l3 =new ListNode(0) ;
    ListNode *l4=new ListNode(0) ;
    l3->val = 8;l3->next =NULL;
    l2->val = 6;l2->next =l3;
    l1->val = 4;l1->next =l2;
    l4 = tailk(l1,2);
    cout<<l4->val<<endl;

}

