// #include<bits/stdc++.h>
// using namespace std;

// class LRUCache{
//     public:
//     class node{
//         public:
//         int key;
//         int val;
//         node *next;
//         node *prev;
//         node(int _key,int _val)
//         {
//             key=_key;
//             val=_val;
//         }
//     };
// void show()
// {
//     node *n= head;
    
//     while(n->next!=NULL)
//     {   
//         cout<<"("<<n->key<<" , "<<n->val<<")"<<endl;
//         n=n->next;
//     }
//        // cout<<"("<<n->key<<" , "<<n->val<<")";
//         cout<<endl;
// }
// node *head=new node(-1,-1);
// node *tail=new node(-1,-1);

// int cap;
// unordered_map<int,node*>mp;
// LRUCache(int capacity)
// {
//     cap=capacity;
//     head->next=tail;
//     tail->prev=head;
// }
// void addnode(node *newnode)
// {
//     node *temp=head->next;
//     newnode->next=temp;
//     newnode->prev=head;
//     head->next=newnode;
// }
// void deletenode(node *delnode)
// {
//     node *delprev=delnode->prev;
//     node *delnext=delnode->next;
//     delprev->next=delnext;
//     delnext->prev=delprev;
// }
// int get(int key_)
// {
//     if(mp.find(key_)!=mp.end())
//     {
//         node *resnode=mp[key_];
//         int res=resnode->val;
//         mp.erase(key_);
//         deletenode(resnode);
//         addnode(resnode);
//         mp[key_]=head->next;
//         return res;
//     }
//     return -1;
// }
// void put(int key_,int value)
// {
//     if(mp.find(key_)!=mp.end())
//     {
//         node *existingnode=mp[key_];
//         mp.erase(key_);
//         deletenode(existingnode);
//     }
//     if(mp.size()==cap)
//     {
//         mp.erase(tail->prev->key);
//         deletenode(tail->prev);
//     }
//     addnode(new node(key_,value));
//     mp[key_]=head->next;
// }
// };

// int main()
// {
//     LRUCache* obj = new LRUCache(3);
//     int param_1 = obj->get(1);
//     obj->put(1,1);
//     obj->put(2,2);
//     obj->put(3,3);
//     obj->put(4,4);
//     obj->get(3);
//     obj->show();
//     return 0;
// }


#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class lru{
	list<int> el;//Doubly linked list to store the elements
	unordered_map<int, list<int>::iterator> ref;//hashtable for storing the reference address
	int n;//hashtable for storing the refernce address
	public:
	/*Constructor to initialize the capacity of cache*/
		lru(int cap){
			n=cap;
		}
		void insert(int);
		void print();
};
/*add a value to the list if new or move the value to the front if already present*/
void lru::insert(int val){
	if(ref.find(val)==ref.end()){// if the value is not found in the list
		if(ref.size()==n){//if the cache size is equal to the capacity
			int x=el.back();
			el.pop_back();//removing the last element from the queue
            ref.erase(x); //erasing the key value pair from the hash table
		}
	}
	else{
		el.erase(ref.find(val)->second);//if present erasing it 
	}
	el.push_front(val);//adding the value to the front
	ref[val]=el.begin();//storing the address in the hashtable
}
/*Iterating through the entire list and printing the elements*/
void lru::print(){
	for(auto it=el.begin();it!=el.end();it++)
	cout<<*it<<" ";
	cout<<endl;
}
int main(){
lru cache(3); //to specify the capacity
/*Refer explanation*/
cache.insert(1);//1
cache.insert(2);//2
cache.insert(3);//3
cache.insert(2);//4
cache.insert(4);//5
cache.insert(2);//6
cache.insert(5);//7
cache.print();
return 0;
}        
