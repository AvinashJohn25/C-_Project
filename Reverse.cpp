#include<iostream>
using namespace std;

void reverse(int num)
{
   int temp=num;
   int swap =0;
   int mod;
    while(temp)
    {
       mod = temp %10;
       swap = swap*10+mod;
       temp = temp /10;
       //cout<<"\n SWAP ="<<swap<<endl;
      // cout<<"\n temp ="<<temp<<endl;
    }
    cout<<"\n Swapped number ="<<swap<<endl;
}

int main()
{
  int num;
  cout<<"Enter the number to be reversed :";
  cin>>num;
  reverse(num);
  return 0;
}

