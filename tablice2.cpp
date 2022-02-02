#include <iostream>
using namespace std;
int main()
{
    int x[10];
    for (int i=0; i<=9; ++i)
    {
        x[i]=i%2;
    }

    for (int i=0; i<=9; ++i)
    {
        //cout<<x[i]<<" ";
    }

    int z[4] = {2,5,1,8};

    float y[3] = {1.4, 1.8, -4};
    cout<<y[3];

    int tab[10] = {5,2,-1,8, 1, -9, 12, 11, 9, 10};

    cout<<tab.size();


}
