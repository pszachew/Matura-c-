#include <iostream>
#include <cmath>
#include <string>
#include <fstream>


using namespace std;

int toDec(int x, int n)
{
    int sum=0;
    int pot=0;
    int z;
    bool flag = 0; /*flag = 0 dodatnia, flag = 1 ujemna*/
    if (x<0)
    {
        flag=1;
        x=-x;
    }
    while(x != 0)
    {
        sum=sum+(x%10)*pow(n,pot);
        ++pot;
        x=x/10;
    }
    if (flag == 0 ) return sum;
    else
    {
        z=2*sum;
        sum=sum-z;
        return sum;
    }

}

string toBin(int x)
{
    string output = "";
    bool flag=0;
    if (x<0)
    {
        flag=1;
        x=-x;
    }
    while(x!=0)
    {
        output=to_string(x%2)+output;
        x=x/2;
    }
    if (flag==0) return output;
    else return "-"+output;
}

int main()
{
    fstream file, file2; /*tworzymy zmienna typu fstream o nazwie file*/

    file.open("dane_systemy1.txt",ios::in); /*otwieramy plik o nazwie dane_systemy1.txt, w trybie ios::in bo tylko czytamy z tego pliku*/


    long long int clock1[1095];
    long long int temp1[1095];

    for(int i=0; i<=1094; ++i)
    {
        file>>clock1[i];
        file>>temp1[i];
    }
    int mini=temp1[0];
    for(int i=0; i<=1094; ++i)
    {
        if (mini>temp1[i])
            mini=temp1[i];
    }
    //cout<<mini;


    file2.open("dane_systemy2.txt",ios::in); /*otwieramy plik o nazwie dane_systemy1.txt, w trybie ios::in bo tylko czytamy z tego pliku*/


    long long int clock2[1095];
    long long int temp2[1095];

    for(int i=0; i<=1094; ++i)
    {
        file2>>clock2[i];
        file2>>temp2[i];

    }

    int mini2=temp2[0];
    for(int i=0; i<=1094; ++i)
    {
        if (mini2>temp2[i])
            mini2=temp2[i];
    }
    cout<<toBin(toDec(mini2,4));




}
