///Trie Tree Solution. The main Idea is very simple. At first we need to convert all number into 5 digit number. 15 = 000015.
/// And Count will make the array Sorted

#include<stdio.h>
#define M   100000
#define NL  -1

struct node{
    int cnt;
    int next[11];
};

node trie[M];
int nxt, head;

int NewTrie(){
    int i;
    for(i=0; i<10; i++)trie[nxt].next[idx] = NL;
    trie[nxt].cnt = 0;
    return nxt++;
}

void init(){
    nxt = 0;
    head = NewTrie();
    return;
}

void Insert(int num){
    int curr = head, idx;
    int r = 100000;
    while(r){
        idx = ((num/r)%10);
        if(trie[curr].next[idx]==NL)trie[curr].next[idx] = NewTrie();
        curr = trie[curr].next[idx];
        trie[curr].cnt++;
    }
    return;
}

int SearchMinSum(int k){
    int curr = head, idx, r = 100000, i;
    while(r){
        r/=10;
        for(i=0; i<10;i++){
            idx = trie[curr].next[i];
            if(!trie[idx].cnt)continue;
            if(trie[idx].cnt<=k){
                curr = trie[curr].next[i];
                num = (num*10) + i;
                trie[idx].cnt--;
                break;
            }
            else k-= trie[idx].cnt;
        }
    }
    return num;
}
int main()
{
    int n, i, a, x;
    while(scanf("%d", &n)){
        if(!n)break;
        for(i=0;i<n;i++){
            scanf("%d", &a);
            Insert(a);
        }
        for(i=0;i<n-1;i++){
            x = SearchMinSum(1) + SearchMinSum(2);
            insert(x);
        }
        printf("%d\n", x);
    }

}

