#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,mi,ma;
    cin>>a>>b>>c;
    mi= min(a,b);
    mi = min(mi,c);
    ma= max(a,b);
    ma = max(ma,c);
    cout<< ma-mi;
    return 0;
}