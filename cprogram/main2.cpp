#include <iostream>
#include <map>
#include <iostream>
#include <map>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],temp[n];
    map<int,bool>vis;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        temp[i]=a[i];
    }
  // we need to sort the array element to determine their correct places based on which comparisons will be made.
    sort(temp,temp+n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        //if a[i] or temp[i] has already been swapped or if they are same,nothing to do
        if(a[i]==temp[i] or vis[a[i]] or vis[temp[i]])continue;
        //otherwise mark temp[i] for being swapped and increment the count by 1
        vis[temp[i]]=true;
        count++;
    }
    cout<<count<<endl;
}
