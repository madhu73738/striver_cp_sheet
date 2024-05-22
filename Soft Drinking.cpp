#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  n, k, l, c, d, p, nl, np,drink,salt,lemon;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    drink = (k*l)/nl;
    salt= p/ np;
    lemon= c*d;
    int a= min(drink,salt);
    cout<<min(a,lemon)/n;
    return 0;



}