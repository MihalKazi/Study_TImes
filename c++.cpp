#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int d, m, y;
   char x,z;
   cin>>d>>x>>m>>z>>y;

   cout<<setw(2)<<setfill('0')<<m<<"/"<<setw(2)<<setfill('0')<<d<<"/"<<setw(2)<<setfill('0')<<y<<endl;
   cout<<setw(2)<<setfill('0')<<y<<"/"<<setw(2)<<setfill('0')<<m<<"/"<<setw(2)<<setfill('0')<<d<<endl;
   cout<<setw(2)<<setfill('0')<<d<<"-"<<setw(2)<<setfill('0')<<m<<"-"<<setw(2)<<setfill('0')<<y<<endl;

    return 0;
}
