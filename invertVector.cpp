#include<iostream>
using namespace std;

int y;
int k;
int n[11];
int inv[11];

int main()
{
    for(k=1;k<=10;k++)
        {
                      cout<<"Inserire il "<<k<<" elemento del vettore : "<<endl;
                      cin>>n[k];
        }
    for(k=10;k>=1;k--)
        {
                      inv[y]=n[k];
                      y++;
        }
    for(y=0;y<10;y++)
        {
                      cout<<" i numeri nel vettore inverso sono "<<inv[y]<<endl;
        }

system("pause");
}
