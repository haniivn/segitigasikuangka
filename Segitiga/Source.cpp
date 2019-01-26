#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
int nilai;
 cout<<"Masukkan Batas Nilai :";cin>>nilai;
 cout<<endl;
 if(nilai<10){
for(int a = 1; a <= nilai; a++)
 {
  for(int b = 1; b <= a; b++)
  {
  cout<<b<<" ";
  }
 cout<<endl;
 }
}
  else
	 cout<<"tidak boleh lebih dari 10"<<endl;
}