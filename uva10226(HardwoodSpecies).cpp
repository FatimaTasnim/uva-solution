#include<bits/stdc++.h>
using namespace std;
template<class T>
inline bool fs(T &x)
{
    int c=getchar();
    int sgn=1;
    while(~c&&c<'0'||c>'9')
    {
        if(c=='-')sgn=-1;
        c=getchar();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getchar())
        x=x*10+c-'0';
    x*=sgn;
    return ~c;
}
int main()
{
    map<string, float> Tree;
    vector <string> counter;
    float average;
    string tree_name;
    int test_case;
    scanf("%d\n\n", &test_case);
    while(test_case--)
    {
        int number_of_trees=0;
        while(getline(cin,tree_name))
        {
            if (tree_name.size() == 0)
				break;
            if(Tree.count(tree_name)==0)
            {
                Tree[tree_name]=1.0;
                counter.push_back(tree_name);
            }
            else
                Tree[tree_name]+=1.0;
            number_of_trees++;
        }
        sort(counter.begin(),counter.end());
        for(int i=0;i<counter.size();i++)
        {
            average=(Tree[counter[i]]*100.0)/number_of_trees;
            cout<< counter[i]<< " " ;
            printf("%.4f\n",average);
        }
        if (test_case > 0){
			printf("\n");
		}
        Tree.clear();
        counter.clear();
    }
}
