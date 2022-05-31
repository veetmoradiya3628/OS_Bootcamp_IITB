#include<bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
    int number;
    cout<<"Enter number : ";
    cin>>number;
    // cout<<endl;
    cout<<"Factors : ";
    for (int i = 1; i <= number; i++)
    {
        if(number % i == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}