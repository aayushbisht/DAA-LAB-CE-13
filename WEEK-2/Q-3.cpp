#include<iostream>
#define MAX 1000
using namespace std;
int diffrenceequaltok(int arr[],int n,int key)
{
    int count=0;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (abs(arr[i]-arr[j])==key)
              count++;
        }
    }
   
    return count; 

}
int main()
{
    int t;
   int arr[MAX];
    int n;
    cout << "Enter size" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cout << "Enter key" << endl;
    cin >> key;

        int count=diffrenceequaltok(arr,n,key);
        cout<<count<<endl;
    

}