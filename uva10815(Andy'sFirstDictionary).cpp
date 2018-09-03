#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("str.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	char str[1000], took[1000];
	vector <string> tasnim;
	int i, j, len;

	while (cin.getline(str, sizeof(str))){
		for(i=0;str[i];i++)
            str[i]=tolower(str[i]);

		j = 0;
		len = strlen(str);

		for (i = 0; i <= len; ++i){
			if (str[i] >= 'a' && str[i] <= 'z'){
				took[j++] = str[i];
			}
			else{
				took[j] = '\0';
				j = 0;
				if (strlen(took) == 0)
					continue;
				string st(took);
				tasnim.push_back(st);
			}
		}
	}

	sort (tasnim.begin(), tasnim.end());

	len = tasnim.size();
	cout << tasnim[0] << endl;
	for (int i = 1; i < len; ++i){
		if (tasnim[i] == tasnim[i-1]) continue;
		cout << tasnim[i] << endl;
	}
	return 0;
}
