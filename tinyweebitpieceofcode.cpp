#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    unsigned a, b,i,z,gasit,c,copie;
    int v[10];
    ifstream f ("bac.in");
    f >> a >> b;
    while(f>>c)
        if(c%2==0)
            v[z++]=c;
    do{
        gasit=0;
        for(i=0;i<z;i++)
            if(v[i]<v[i+1])
            {
                copie=v[i];
                v[i]=v[i+1];
                v[i+1]=copie;
                gasit=1;
            }

    }
    while (gasit=1);

    for(i=0;i<z;i++)
        if(v[i]!=v[i-1])
            cout << v[i] << " ";
    return 0;
}