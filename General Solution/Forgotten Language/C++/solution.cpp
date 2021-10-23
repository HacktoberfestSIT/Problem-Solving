 #include<bits/stdc++.h>
using namespace std;

void solve()
{
   	int n, k, l;
	vector < string > phrases[52];
	string forgotten[102];

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
	    cin >> forgotten[i];
	}

	for (int i = 0; i < k; i++) {
	    cin >> l;
	    for (int j = 0; j < l; j++) {
	        string x;
	        cin >> x;
	        phrases[i].push_back(x);
	    }
	}

	for (int i = 0; i < n; i++){
	    string answer = "NO";
	    for(int j = 0; j < k; j++){
	        for(int p = 0; p < phrases[j].size(); p++){
	            if(phrases[j][p] == forgotten[i])
	                answer = "YES";
	        }
	    }
	    cout << answer << (i==n-1 ? "\n" : " ");
	} 
}

int main() {
    int t;
    cin >> t;
     while(t--)
     solve();
     
    return 0;
}

