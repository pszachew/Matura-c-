#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file; /*tworzymy zmienna typu fstream o nazwie file*/

    file.open("dane_systemy1.txt",ios::in); /*otwieramy plik o nazwie dane_systemy1.txt, w trybie ios::in bo tylko czytamy z tego pliku*/


    long long int clock1[1095];
    long long int temp1[1095];

    for(int i=0; i<=1094; ++i)
    {
        file>>clock1[i];
        file>>temp1[i];
    }






}
