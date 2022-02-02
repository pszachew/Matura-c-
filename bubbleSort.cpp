#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int tab[7] = {-1, -5, 8, 3, 2, 15, -12};
    sort(tab, tab+7);
    for (int i=0; i<=6; ++i)
    {
        cout<<tab[i]<<" ";
    }


}
