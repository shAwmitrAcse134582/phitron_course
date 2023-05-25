#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Student{
    public:
     char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;
    Student(char n[100],int r,char s,int m,int c){
        strcpy(name,n);
        roll=r;
        section=s;
        math_marks=m;
        cls=c;
    }

};
int main()
{
fast;
Student Shawmitra("shawmitra",33,'A',85,14);
Student Ashik("Ashik",32,'A',90,14);
Student Hridoy("Hridoy",31,'A',92,14);

int x=max(Shawmitra.math_marks,max(Ashik.math_marks,Hridoy.math_marks));
if(x==Shawmitra.math_marks)
cout<<Shawmitra.name<<endl;
else if(x==Ashik.math_marks){
    cout<<Ashik.name<<endl;
}
else{
    cout<<Hridoy.name<<endl;
}
get_out;
}