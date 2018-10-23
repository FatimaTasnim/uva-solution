#include<bits/stdc++.h>
using namespace std;

int n;
string str1, str2;

void rec(string path, stack<char>anagram, int next, int inPos, int outPos, int pushes, int pops){
   // cerr << "Debug "<< next << " " << path << " " << inPos << " " << outPos << " "<< pushes << " " << pops << endl;
    if(next){
        pushes++;
        anagram.push(str1[inPos]);
        inPos++;
        path+= 'i';
    }

    else{
        if(anagram.empty())return;
        char ch = anagram.top();
        anagram.pop();
        if(ch!=str2[outPos]){
            while(!anagram.empty())anagram.pop();
            return;
        }
        pops++;
        path+='o';
        outPos++;
    }

    if(path.size()==2*n){
        for(int i=0;path[i];i++){
            if(i)printf(" ");
            printf("%c", path[i]);
        }
        printf("\n");
        return;
    }

    else{
        if(pushes<n)rec(path, anagram, 1, inPos, outPos, pushes, pops);
        if(pops<n)rec(path, anagram, 0, inPos, outPos, pushes, pops);
    }
    return;

}

int main()
{
    string st1, st2;

    while(cin>> str1 >> str2){
        if(str1.size()!=str2.size()){
            printf("[\n]\n");
            continue;
        }

        st1 = str1, st2 = str2;
        sort(st1.begin(), st1.end());
        sort(st2.begin(), st2.end());
        if(st1!= st2){
            printf("[\n]\n");
            continue;
        }

        else{
            n = str1.size();
            stack<char>anagram;
            printf("[\n");
            rec("", anagram, 1, 0, 0, 0, 0);
            printf("]\n");
        }
    }
    return 0;
}
