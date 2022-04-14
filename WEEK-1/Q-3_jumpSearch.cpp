#include <iostream>
#include <math.h>
#define MAX 1000
using namespace std;
void Jump_search(int arr[], int n, int key)
{
    int comparisions = 0, flag = 0;
    int step = sqrt(n), old = 0;
    while (arr[step - 1] < key)
    {
        comparisions++;
        old = step;
        step += sqrt(n);

        if (step > n - 1)
            step = n;
    }

    for (int i = old; i < step; i++)
    {
        comparisions++;
        if (arr[i] == key)
        {
            cout << "Present"
                 << " " << comparisions << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Not Present"
             << " " << comparisions << endl;
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

    Jump_search(arr, n, key);

}