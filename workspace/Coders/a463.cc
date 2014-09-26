#include<iostream>
using namespace std;
int main()
{
        int n;
        float s;
        cin>>n>>s;
        float x[n],y[n];
        int i=0,flag=0,sweets=0;
        while(n--)
        {
                cin>>x[i]>>y[i];
                if(y[i]!=0){
                	y[i]=100-y[i];
                	x[i]+=(y[i]/100);}
                if(s >= x[i] && sweets < y[i])
                        sweets=y[i];
                if(s >= x[i])
                        flag++;
                i++;
        }
        if(flag==0)
                cout<<"-1"<<endl;
        else
                cout<<sweets<<endl;
        return 0;
}
