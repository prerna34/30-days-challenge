#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int>&v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
           if(v[j]>v[j+1])
           {
            swap(v[j],v[j+1]);
           }

        }
        
    }
    return ;
}
int main(){
    int n;
    cout<<"enter the size ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    bubble_sort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;

}