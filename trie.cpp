#include<bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE=26;

struct trienode
{
    struct trienode *children[ALPHABET_SIZE];
    bool isEndOfWord;
};

struct trienode *getNode(void)
{
    struct trienode *pnode=new trienode;
    pnode->isEndOfWord=false;

    for(int i=0;i<ALPHABET_SIZE;++i)
        pnode->children[i]=NULL;
    return pnode;
};

void insertnode(struct trienode *root,string key)
{
    struct trienode *crawl=root;
    for(int i=0;i<key.length();++i)
    {
        int index=key[i]-'a';
        if(!crawl->children[index])
            crawl->children[index]=getNode();
        crawl=crawl->children[index];
    }
    crawl->isEndOfWord=true;
}
bool searchword(struct trienode *root,string key)
{
    struct trienode *crawl=root;
   for(int i=0;i<key.size();++i)
   {
        int index=key[i]-'a';
        if(!crawl->children[index])
            return false;
        crawl=crawl->children[index];
   }
   return (crawl!=NULL && crawl->isEndOfWord);
}


int main()
{
    // Input keys (use only 'a' through 'z'
    // and lower case)
    string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);

    struct trienode *root = getNode();

    // Construct trie
    for (int i = 0; i < n; i++)
        insertnode(root, keys[i]);

    // Search for different keys
    searchword(root, "the")? cout << "Yes\n" :
                         cout << "No\n";
    searchword(root, "these")? cout << "Yes\n" :
                           cout << "No\n";
    return 0;
}



















