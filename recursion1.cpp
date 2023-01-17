#include <iostream>
using namespace std;
//Program to print numbers from N to 1
void fun(int n)
{
    if(n==0)
    return;

    cout<<n<<endl;
    fun(n-1);
}

int main(){
    int n;
    cin>>n;
    fun(3);
}