#include <iostream>
using namespace std;
//Program to print numbers from 1 to n
    void fun(int n){
        if (n==0)
        {
            return;
        }
        fun(n-1);
        cout<<n;
    }
int main(){
    int n;
    cin>>n;
    fun(n);
}