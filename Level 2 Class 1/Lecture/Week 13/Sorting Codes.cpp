#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>&v) // O(n^2)
{
    int n=v.size();

    for(int step=0; step<n; step++)
    {
        bool isSwap=false;
        for(int i=0; i<n-1-step; i++)
        {
            if(v[i]>v[i+1])
            {
                swap(v[i],v[i+1]);
                isSwap=true;
            }
        }
        if(isSwap==false)
        {
            break;
        }
    }
}
void insertionSort(vector<int>&v)// O(n^2)
{
    int n=v.size(),i,key,j;

    for(i=1; i<n; i++)
    {
        key=v[i];
        j=i-1;
        while(j>=0&&v[j]>key)
        {
            v[j+1]=v[j];
            j-=1;
        }
        v[j+1]=key;
    }

}
void merge(vector<int>&v,int l,int r,int mid)
{
    //cout<<"we will megre "<<l<<" "<<r<<endl;
    vector<int>L,R;
    for(int i=l; i<=mid; i++)
    {
        L.push_back(v[i]);
    }
    for(int i=mid+1; i<=r; i++)
    {
        R.push_back(v[i]);
    }

    L.push_back(1e9);
    R.push_back(1e9);

    int lp=0,rp=0;
    for(int i=l;i<=r; i++)
    {
        if(L[lp]<=R[rp])
        {
            v[i]=L[lp];
            lp++;
        }
        else
        {
            v[i]=R[rp];
            rp++;
        }
    }



}

void mergeSort(vector<int>&v,int l, int r)// O(n log(n))
{
    if(l>=r)
        return;
    int mid=(l+r)/2;
    //cout<<l<<" "<<mid<<" "<<r<<endl;
    mergeSort(v,l,mid);
    mergeSort(v,mid+1,r);
    merge(v,l,r,mid);

}
int main()
{

    vector<int>v= {4,1,5,3,4,6,4,5};

    mergeSort(v,0,v.size()-1);
    for(auto x:v)
    {
        cout<<x<<" ";
    }




}


