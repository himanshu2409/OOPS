#include<bits/stdc++.h>
using namespace std;

struct trie{
    map<char,trie*>children;
    bool isEndOfWord;
    map<char,int>num;
};

struct trie *root;
struct trie *getNewNode()
{
    struct trie *pNode=new trie;
    pNode->isEndOfWord=false;
    return pNode;
}
void insertNode(string word)
{
    struct trie *current=root;
    char s;
    for(int i=0;i<word.length();i++)
    {
        s=word[i];
        if(current->children.find(s)==current->children.end())
        {
            struct trie *p=getNewNode();
            (current->children)[s]=p;
            (current->num)[s] = 1;
        }
        else
        {
            (current->num)[s] += 1;
        }
        current=(current->children)[s];
    }
    current->isEndOfWord=true;
}

int countWords(vector<string>&words,string prefix)
{
    root=getNewNode();
    int n=words.size();
    for(int i=0;i<n;i++)
    {
        insertNode(words[i]);
    }
    struct trie *current=root;
    char s;
    int wordCount=0;
    for(int i=0;i<prefix[i];i++)
    {
        s=prefix[i];
         if(current->children.find(s)==current->children.end())
        {
            wordCount=0;
            break;
        }
        wordCount=(current->num)[s];
        current = (current->children)[s];
    }
    return wordCount;
}

int main()
{
    vector<string> words;
    words = { "apk", "app", "apple",
              "arp", "array" };
 
    // Given prefix to find
    string prefix = "ay";
 
    // Print the number of words with
    // given prefix
    cout << countWords(words, prefix);
    return 0;
}