#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int s[16];
    int j=0;
    while(n!=0)
    {
        int i=n%2;
        s[j++]=i;
        n=n/2;
    }
    for(int i=j-1;i>=0;i--)
	  cout<<s[i];
	return 0;
}