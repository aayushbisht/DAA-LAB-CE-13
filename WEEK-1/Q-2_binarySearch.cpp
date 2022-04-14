#include<iostream>
#define MAX 1000
using namespace std;
void Binary_search(int arr[],int n,int key)
{
    int comparisions=0,flag=0;
    int low=0,high=n-1;
   
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        comparisions++;
        if (key==arr[mid])
        {
            cout<<"Present"<<" "<<comparisions<<endl;
            flag=1;
            break;
        }
        else if (key>arr[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    if (flag==0)
        cout<<"Not Present"<<" "<<comparisions<<endl;
   
      

}
int main()
{
 int arr[MAX];
    int n;
    cout << "Enter size" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cout << "Enter key" << endl;
    cin >> key;

        Binary_search(arr,n,key);
    

}