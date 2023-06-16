#include<bits/stdc++.h>
using namespace std;

int solve(string s) {
	bool check = true;
	int pos;
	while(check) {
		check = false;
		pos = s.find("AB");
		if(pos != -1) {
			s.erase(pos, 2);
			check = true;
		}
		pos = s.find("CD");
		if(pos != -1) {
			s.erase(pos, 2);
			check = true;
		}
	}
	return s.length();	
}

int main() {
	string s;
	cin >> s;
	cout << solve(s);
}
