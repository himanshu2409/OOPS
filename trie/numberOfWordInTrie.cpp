#include<bits/stdc++.h>
using namespace std;
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
   
// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)
   
// Converts key current character into index
// use only 'a' through 'z' and lower case
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
struct trie{
    struct trie *children[ALPHABET_SIZE];
    bool isEov;
};

struct trie *getNode()
{
    struct trie *pNode=new trie;
    pNode->isEov=false;
    for(int i=0;i<ALPHABET_SIZE;i++)
    {
        pNode->children[i]=NULL;
    }
    return pNode;
}

void insert(trie *root,const char *key)
{
    int length=strlen(key);
    struct trie *pCrawl=root;
    for(int level=0;level<length;level++)
    {
        int index=CHAR_TO_INDEX(key[level]);
        if(!pCrawl->children[index])
            pCrawl->children[index]=getNode();
            pCrawl=pCrawl->children[index];
    }
    pCrawl->isEov=true;
}

int wordCount(struct trie *root)
{
    int result=0;
    if(root->isEov)
    {
        result++;
    }
    for(int i=0;i<ALPHABET_SIZE;i++)
    {
        if(root->children[i])
        {
            result+=wordCount(root->children[i]);
        }
    }
    return result;
}

int main()
{
    char key[][8]={"the", "a", "there", "answer","any", "by", "bye", "their"};
    struct trie *root=getNode();
    for(int i=0;i<ARRAY_SIZE(key);i++)
    {
        insert(root,key[i]);
    }
    cout << wordCount(root);
      
    return 0;
}