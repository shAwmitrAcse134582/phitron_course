#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    string sentence;
    for (int i = 0; i < t; i++)
    {
        cin.ignore();
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        int mx = 0;
        string s;
        map<string, int> mp;
        while (ss>>word)
        {
            mp[word]++;
            
        }
        for(auto v : mp){
        if(v.second>mx){
        mx=v.second;
        
    }
}
       map<string,int>m;
       stringstream st(sentence);
       while(st>>word){
          m[word]++;
         if(m[word]==mx){
         cout<<word<<" "<< mx <<endl;
         break;
    }
       }

    }
    return 0;
}
