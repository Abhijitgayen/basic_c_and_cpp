#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> minheap;
priority_queue<int, vector<int>> maxheap;
void insert(int val)
{
    // cout<<"ok";
    if (maxheap.size() == minheap.size())
    {
        if (maxheap.size() == 0)
        {
            maxheap.push(val);
            return;
        }
        if (maxheap.top() > val)
        {
            maxheap.push(val);
        }
        else
        {
            minheap.push(val);
        }
    }
    else
    {
        //there are two cases are possible 
        //1.size of maxheap > size of minheap
        //2. size of minheap > size of maxheap
        if (maxheap.size() > minheap.size())
        {
            if (maxheap.top() < val)
            {
                minheap.push(val);
            }
            else{
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(val);
            }
        }
        else
        {
            if(maxheap.top() > val){
                maxheap.push(val);
            }
            else{
                maxheap.push(minheap.top());
                minheap.pop();
                minheap.push(val);
            }
        }
    }
}
int median()
{
    if (maxheap.size() == minheap.size())
    {
        return (maxheap.top() + minheap.top()) / 2;
        
    }
   else  if (maxheap.size() > minheap.size())
    {
        return maxheap.top();
    }
    else
    {
        return minheap.top();
    }
}
int main()
{
    int n;
    cin >> n;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insert(val);
        cout<<i+1<<"  : median "<<median()<<endl;
    }
   /* int p =minheap.size();
    int m=maxheap.size();
    cout<<p <<" "<<m<<endl;
    for (int i = 0; i <m ; i++)
    {
        cout << maxheap.top() << " ";
        maxheap.pop();
    }
    cout << endl;
    for (int i = 0; i < p; i++)
    {
        cout << minheap.top() << " ";
        minheap.pop();
    }*/

    cout << endl;
    return 0;
}