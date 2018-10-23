#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > vc;

int main()
{
	int i, j, n, c, k=0;
	scanf("%d", &c);
	while(c--){
		vc.clear();
		cin>>n;
		getchar();
		stringstream temp;
		temp.clear();

		for(int i=0; i<n; i++){
			int cnt=0;
			string str;
			str.clear();
			getline(cin,str);
			temp.clear();
			temp << str;

			while(temp >> j)
				cnt++;

			vc.push_back(make_pair(cnt,i+1));
		}

		sort(vc.begin(), vc.end());
		int minima=vc[0].first;
		cout<<vc[0].second;
		for(int i=1; i<n; i++){
			if(vc[i].first==minima)
				cout<<" "<<vc[i].second;
			else
				break;
		}
		printf("\n");
	}
	return 0;
}

