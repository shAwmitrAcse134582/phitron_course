#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
    student(string name,int roll,int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class cmp{
    public:
 bool operator()(student a, student b)
    {
        if (a.marks > b.marks)
            return true;
        else if (a.marks < b.marks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }

};
int main()
{
fast;
int n;
cin>>n;
priority_queue<student,vector<student>, cmp>p;
for(int i=0;i<n;i++){
   string name;
   int roll,marks;
   cin>>name>>roll>>marks;
   student obj(name,roll,marks);
   p.push(obj);

}
while(!p.empty()){
    cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().marks<<endl;
    p.pop();
}
get_out;
}