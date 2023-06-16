#include<bits/stdc++.h>
using namespace std;
vector<string> s;
vector<string> sorted;
map<string, vector<int>> mp;

string sort(vector<string> v) {
	sort(v.begin(), v.end());
	string tmp;
	for(int i = 0; i < v.size(); i++) {
		tmp += v[i];
	}
	return tmp;
}

void tokenizer(string ds, char del)
{
    stringstream ss(ds);
    string word;
    while (!ss.eof()) {
        getline(ss, word, del);
        vector<string> tmp;
        string t = "";
        string x = "";
        for(int i = 0; i < word.size(); i++) {
        	t = word[i];
        	x += word[i];
        	tmp.push_back(t);
		}
		s.push_back(x);
		sorted.push_back(sort(tmp));
    }
}

void xuat() {
	for(int i = 0; i < sorted.size(); i++) {
		mp[sorted[i]].push_back(i);
	}
	
	for (const auto& pair : mp) {
        const vector<int>& values = pair.second;
        cout << "[ ";
        for (int value : values) {
            cout << s[value] << " ";
        }
        cout << "]";
		cout << endl;
    }
}
	
int main() {
	string ds;
	getline(cin, ds);
	tokenizer(ds, ',');
	xuat();
}
