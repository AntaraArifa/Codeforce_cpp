#include<iostream>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,x,y,z,w,v,o;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    x = (k*l)/nl;
    y = c*d;
    z = p/np;

    w = min(x,y);
    v = min(w,z);
    o = v/n;

    cout << o << endl;

    return 0;

}
