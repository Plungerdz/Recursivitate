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

int nr;

int fapr(int n) {
    int cfac=1;
    int pfac;
    nr = 0;
    for (int i=1; i<=n; i++) {
        nr++;
        pfac=cfac;
        cfac=fact(i);
        if ((pfac<=n) && (n<cfac)) {
            nr--;
            return pfac;
        }
    }
}

int main()
{
    int n;
    cin>>n;
	cout << endl;
	cout << n << " = ";
	int aux = n, aux2 = n;
    while(n>0){
		n = n - fapr(n);
		if (aux == aux2) cout << nr << "!";
		else cout << " + " << nr << "!";
		aux2 = n;
		//n = n - fapr(n);
	}
	cout << endl;
}
