ll n,x;
cin>>n>>x;
ll sum=1;
for(int i=2;i<x;i+=2){
    cout<<n<<" "<<i<<endl;
    sum+=pow(n,i);
    cout<<sum<<endl;
}
 cout<<sum<<endl;