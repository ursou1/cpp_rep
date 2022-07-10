#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
long int greatestCommonDivisor(long int e, long int f)
{
    while (e > 0)
    {
        long int myTemp;

        myTemp = e;
        e = f % e;
        f = myTemp;
    }

    return f;
}
long int calculateD(long int e, long int f)
{
    

    long int d;
    long int k = 1;

    while (1)
    {
        k = k + f;

        if (k % e == 0)
        {
            d = (k / e);
            return d;
        }
    }

}



long int calculateE(long int f)
{
   

    long int e;

    for (e = 2; e < f; e++)
    {
        if (greatestCommonDivisor(e, f) == 1)
        {
            return e;
        }
    }

    return -1;
}
long int encrypt( long int e, long int n)
{
    long int current, result;

    current = 1 - 97;
    result = 1;

    for (long int j = 0; j < e; j++)
    {
        result = result * current;
        result = result % n;
    }

    return result;
}



int main()
{
	long long p, q, n, f, e, d, m;
    long int c;
	cout << "Vvedite p" << endl;
	cin >> p;
	cout << "Vvedite q" << endl;
	cin >> q;
	n = p * q;
	f = (p - 1) * (q - 1);
    e = calculateE(f);
    d = calculateD(e, f);
    cout << "\nRSA public key is {n = " << n << ", e = " << e << "}" << std::endl;
    cout << "RSA private key is {n = " << n << ", d = " << d << "}" << std::endl;
    cout << "\nEnter Message to be encryped:" <<endl;
    cin>>m;
    c = encrypt(e, n);
    cout << "Encrypted message is=" << c << endl;
    cout<<"Fork+new configuration(cout some words)"<<endl;
    cout<<"Fork+new configuration(cout some words)"<<endl;
    cout<<"Fork+new configuration(cout some words)"<<endl;
	

	return 0;
}
