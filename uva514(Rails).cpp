#include<bits/stdc++.h>
using namespace std;
int arr[1003];
int main()
{
    int n, i;
    while(1){
		scanf("%d", &n);
		if(!n)break;
		while (1) {
			scanf("%d", &arr[0]);
			if(!arr[0]){
				printf("\n");
				break;
			}
			for (i=1;i<n;i++) {
				scanf("%d", &arr[i]);
			}

			int current = 1, idx = 0;
			stack<int> st;
			while(current<=n){
				st.push(current);

				while(!st.empty() && st.top() == arr[idx]){
					st.pop();
					idx++;
					if(idx>=n) break;
				}

				current++;
			}

			if(st.empty()) printf("Yes\n");
			else printf("No\n");
		}
	}

	return 0;
}
