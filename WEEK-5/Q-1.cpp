#include <iostream>
#include<limits.h>
#define MAX 1000
using namespace std;

void count_sort(char arr[],int n)
{
    int temp[26]={0};
    for (int i=0;i<n;i++)
       temp[arr[i]-97]++;
       
    int maxi=0;
    char res='$';
    for (int i=0;i<26;i++)
    {
        if (temp[i]>maxi)
        {
            maxi=temp[i];
            res=i+97;
        }
    }
    if (maxi==1)
      cout<<"No Duplicate Found"<<endl;
     else
    cout<<res<<" - "<<maxi<<endl;
     
}

int main()
{
    
    char arr[MAX];
    int n;
    cout << "Enter size" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        count_sort(arr,n);
    
    return 0;
}
