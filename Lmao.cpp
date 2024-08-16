#include<bits/stdc++.h>

using namespace std;

vector<int> input() {
	string s;
	getline(cin, s);
	istringstream ss(s);
	int k;
	vector<int> res;
	while (ss >> k) res.push_back(k);
	return res;
}

int main() {
	vector<int> a = input();
	priority_queue<int, vector<int>, greater<int>> pq(a.begin(), a.end());
	int cnt = 0;
	while (pq.size() != 1) {
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();
		pq.push(a + b);
		cnt += (a + b);
	}
	cout << cnt;
}