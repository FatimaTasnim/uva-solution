#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[1000];
	int n, time = 0, ans;
	int hour, min, sec, speed=0, newSpeed;
	double distance=0;

	while (gets(str)){
		n = sscanf(str, "%d:%d:%d %d", &hour, &min, &sec, &newSpeed);
		ans = hour * 3600 + min * 60 + sec;

		distance += (ans - time) * speed;
		time = ans;

		if (n == 3)
			printf("%02d:%02d:%02d %.2lf km\n", hour, min, sec, distance/3600);
		else if (n == 4)
			speed = newSpeed;
	}

	return 0;
}
