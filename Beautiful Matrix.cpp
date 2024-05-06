#include <bits/stdc++.h>
using namespace std;
    
    int main(){
    int n=0, m[5][5],i,r,c;

        while(n<5)
        {
            for (i=0;i<5;i++)
                {
                    cin>>m[n][i];
                    if(m[n][i]==1){
                    
                         r=n; c=i;
                    }
                }
            n++;
       }

       cout<<abs(r-2)+abs(c-2);






}
