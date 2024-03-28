#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *lc,*rc;
};
class BST{
    node *root;
    public:
    BST(){
        root=0;
    }
    void create(int ele);
    void inorder(node *r);
    void preorder(node *r);
    void postorder(node *r);
    void order();
    void del(int ele);
    void del_node();
};
void BST::create(int ele){
    node *temp,*p,*par;
    temp=new node;
    temp->data=ele;
    temp->lc=0;
    temp->rc=0;
    if(root==0){
        root=temp;
    }
    else{
        p=root;
        par=0;
        while(p!=0){
            par=p;
            if(p->data>ele)
            p=p->lc;
            else
            p=p->rc;
        }
        if(par->data>ele)
        par->lc=temp;
        else
        par->rc=temp;
    }
}
void BST::order(){
    node *p;
    p=root;
    inorder(p);
    cout<<"\n";
    p=root;
    preorder(p);
    cout<<"\n";
    p=root;
    postorder(p);
    cout<<"\n";
}
 void BST::inorder(node *r){
      if(r!=0){
          inorder(r->lc);
          cout<<r->data<<"->";
          inorder(r->rc);
      }
  }  
void BST::preorder(node *r){
    if(r!=0){
        cout<<r->data<<"->";
        preorder(r->lc);
        preorder(r->rc);
    }
}
void BST::postorder(node *r){
    if(r!=0){
        postorder(r->lc);
        postorder(r->rc);
        cout<<r->data<<"->";
    }
}
void BST::del(int ele){
    node *par,*p,*q,*par1;
    par=new node;
    p=root;
    par->lc=p;
    par->rc=0;
    while((p!=0)&&(p->data!=ele)){
        if(p->data>ele){
            par=p;
            p=p->lc;
        }
        else{
            par=p;
            p=p->rc;
        }
    }
    //no child//
    if((p->lc==0)&&(p->rc==0))
    {
        if(par->lc==p){
            par->lc=0;
            cout<<p->data<<"\n";
            delete(p);
        }
        else{
            par->rc=0;
            cout<<p->data<<"\n";
            delete(p);
        }
    }
    //single child//
    else if((p->lc==0)&&(p->rc!=0)){
        if(par->rc==p){
            par->rc=p->rc;
            cout<<p->data<<"\n";
            delete(p);
        }
        else{
            par->lc=p->rc;
            cout<<p->data<<"\n";
            delete(p);
        }
    }
    else if((p->lc!=0)&&(p->rc==0)){
        if(par->lc==p){
            par->lc=p->lc;
            cout<<p->data<<"\n";
            delete(p);
        }
        else{
            par->rc=p->lc;
            cout<<p->data<<"\n";
            delete(p);
        }
    }
    //two children//
    else if((p->lc!=0)&&(p->rc!=0))
    {
        if(par->lc==p)
        {
            par->lc=p->rc;
            q=p->rc;
            while(q->lc!=0)
            {
                q=q->lc;
            }
            q->lc=p->lc;
            cout<<p->data;
            delete(p);
        }
        else if(par->rc=p)
        {
            par->rc=p->rc;
            p=p->rc;
            while(q->lc!=0)
            {
                q=q->lc;
            }
            q->lc=p->lc;
            cout<<p->data;
            delete(p);
        }
        /*else if(p==root)
        {
            par1->lc=p->rc;
            q=p->rc;
            while(q->lc!=0)
            {
                q=q->lc;
            }
            q->lc=p->lc;
            root=par1->lc;
            cout<<p->data;
            delete(p);
        }*/
    }
    
};
int main(){
    BST o;
    o.create(5);
    o.create(4);
    o.create(8);
    o.create(1);
    o.create(9);
    o.create(7);
    o.create(6);
    o.create(2);
    o.create(12);
    o.create(11);
    o.create(10);
    o.create(3);
    cout<<"\n";
    o.order();
    cout<<"\n";
    o.del(4);
    cout<<"\n";
    o.order();
    return 0;
}
