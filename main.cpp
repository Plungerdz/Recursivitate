#include <iostream>

using namespace std;

//fact vine de la factorial
int fact(int n) {
    if (n==0) {
        return 1;
    } else {
        return fact(n-1)*n;
    }
}

//fapr vine de factorial approximation
//cfac vine de la current factorial
//pfac vine de la past factorial
int fapr(int n) {
    int cfac=0;
    int pfac;
    for (int i=0; i<=n; i++) {
        pfac=cfac;
        cfac=fact(i);
        if (pfac<=n && n<cfac) {
            return pfac;
        }
    }
}

int main()
{
    int n;
    //efaux vine de la variabila auxiliara pt. eficienta
    int efaux;
    cin>>n;
    /*
    while (n) {
        efaux=
        n-=fapr(n);
        cout<<fapr(n)<<" ";
    }
*/
    cout<<fapr();
}
