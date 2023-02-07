#include <iostream>
using namespace std;
int main() {
    int p;
    cin>>p;
    int array[p];
    for (int z = 0; z < p; z++)
    {
        cin>>array[z];
    }
    int ans;
    cin>>ans;

    for (int n = 0; n < p; n++)
    {
        int sum=0;
        for (int i = n; i < p; i++)
        {
            sum += array[i];
            if (sum == ans)
            {
                cout << n << endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}