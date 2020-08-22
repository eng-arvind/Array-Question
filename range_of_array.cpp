#include <iostream>
#include<algorithm>
using namespace std;

void findRangeAndCoefficient(float arr[], int n)
{
    float max = *max_element(arr,arr+n);
    float min = *min_element(arr, arr+n);
    float range = max - min;
    float coeffOfRange = range / (max + min);
    cout << "Range : " << range << endl;
    cout << "Coefficient of Range : " << coeffOfRange;
}
int main()
{
    int n;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    findRangeAndCoefficient(arr, n);
    return 0;
}
