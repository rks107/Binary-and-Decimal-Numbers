#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int j=0,num=0;
    while(n>0)
    {
        int i=n%10;
        num+=i*pow(2,j++);
        n=n/10;
    }
	  cout<<num;
	return 0;
}