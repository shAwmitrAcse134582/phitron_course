#include<bits/stdc++.h>
#define ll long long int


using namespace std;



#define BUG

#ifdef BUG

template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cout << name << " : " << arg1 << '\n';
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');
  cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define bug(...)
#endif

//...................
const ll N = 2e5 + 5;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
	
	ll t = 1, tt = 1;
	cin >> t;
	
	while(t--){
		ll n;
		cin >> n;
		
		string s;
		cin >> s;
		
		stack<char> ans;
		
		for(ll i = 0; i < n; i++){
			string b;
			if(i + 1 < n){
				b += s[i];
				b += s[i + 1];
				i++;
				if(b == "RG" || b == "GR"){
					if(ans.size()){
						if(ans.top() == 'Y'){
							ans.pop();
						}
						else ans.push('Y');
					}
					else ans.push('Y');
				}
				else if(b == "BG" || b == "GB"){
					if(ans.size()){
						if(ans.top() == 'C'){
							ans.pop();
						}
						else ans.push('C');
					}
					else ans.push('C');
				}
				else if(b == "RB" || b == "BR"){
					if(ans.size()){
						if(ans.top() == 'P'){
							ans.pop();
						}
						else ans.push('P');
					}
					else ans.push('P');
				}
			}
			else{
				if(ans.size()){
					if(ans.top() == s[i]){
						ans.pop();
					}
					else ans.push(s[i]);
				}
			}
		}
		string res = "";
		while(!ans.empty()){
			res += ans.top();
			ans.pop();
		}
		reverse(res.begin(), res.end());
		
		cout << res << '\n';		
	}
	
	return 0;
}