#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Heap{
public:
vector<int>v;
    Heap(){

      }
      void max_heapify(int node){
        while(node > 0 && v[node]>v[(node-1)/2]){
            swap(v[node],v[(node-1)/2]);
            node=(node-1)/2;
        }
        
      }
      void push(int val){
        v.push_back(val);
        max_heapify(v.size()-1);
      }
      void down_heapify(int idx){
        while(true){
            int largest=idx;
            int l=largest*2+1;
            int r=largest*2+2;
            if(v[largest]<v[l]){
                largest=l;
            }
            if(v[largest]<v[r]){
                largest=r;
            }
            if(largest==idx){
                break;
            }
            swap(v[idx],v[largest]);
            idx=largest;
            
        }
      }
      void pop(int idx){
        swap(v[idx],v[v.size()-1]);
        v.pop_back();
        down_heapify(idx);
      }
      void print_heap(){
         for(auto val:v){
            cout<<val<<" ";
         }
         cout<<endl;
      }
      
};
int main()
{
fast;
Heap mx;
mx.push(1);
mx.push(2);
mx.push(3);
mx.push(4);
mx.push(5);

mx.print_heap();
mx.pop(0);

get_out;
}