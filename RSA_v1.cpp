/*
gcd(e,z) is must be 1
*/
#include<bits/stdc++.h>
// gcd function of C++ STL
#include <algorithm>
using namespace std;

//long long int encoding(string , int );
/*
long long int encoding(int m, int e)
{
    long long int c;

    c = pow(m,e);

    return c;
}
*/
encoding(string m1, int e1,int n1)
{
    int len=m1.length();
    long long int me[len];
    long long int c[len];
    for(int i=0; i<len; i++)
    {
        me[i] = pow(((m1[i])-64),e1);
        //cout<< (m1[i])-64;
        c[i] = me[i]%n1;

        cout << endl << "m [" << ((m1[i])-64) << "] = " << me[i] << "   ";// << endl;
        cout << "C [" << i+1 << "] = " << c[i] << " " << endl;
        //cout << c[i] << " ";
    }
    /*
    for(int i=0;i<len;i++)
    {
        cout << endl << "C [" << i+1 << "] = " << c[i] << endl;
    }
    */
}

decoding(string m1, int d1,int n1)
{
    int e1=5;
    int len=m1.length();
    long long int me[len];
    long long int c[len];
    long long int cd[len];
    long long int m2[len];
    long long int p[len];
    for(int i=0; i<len; i++)
    {
        me[i] = pow(((m1[i])-64),e1);

        c[i] = me[i]%n1;

        cout << endl << "m [" << ((m1[i])-64) << "] = " << me[i] << "   ";// << endl;
        cout << "C [" << i+1 << "] = " << c[i] << " " << endl;
        //cout << c[i] << " ";
        //cout << c[i] << " ";
    }
    //Decode
    cout << "Decode :";
    for(int i=0; i<len; i++)
    {
        cd[i]= pow(c[i],d1);

        m2[i] = abs(cd[i]%n1);

        cout << endl <<  c[i] << " " << cd[i] << "  " << m2[i] << "  " << endl;
        //cout << "C [" << i+1 << "] = " << c[i] << " " << endl;
        //cout << c[i] << " ";
    }

}


int main()
{
    //P = 5, Q = 7
    long double p=9  ,q=7,n,k,c;
    long int e,z,d,i=0,j;
    string m;
    //char m='C';
    // m = "LOVE";

    n = p*q;
    z = (p-1)*(q-1);
    //cout << "gcd(6, 20) = " << __gcd(6, 20) << endl; // gcd(6,20) for C++17

    cout << "n = " << n << " ";
    ///Calculating e
    i=2;
    while(1)
    {
        //e = rand();
        if(i!=p&&i!=q)
        {
            e = i;
            if(__gcd(e, z)==1)
            {
                cout << "e = "  << e << " ";
                break;
            }
        }
        i++;
    }

    ///*
    ///Calculating d
    j = 2;
    while(1)
    {
        d = j;
        if((((e*d)-1)%z)==0&&d!=e)
        {

            cout << "d = " << d << " ";
            break;
        }
        j++;
    }
    cout << "\n\nEnter String to ENCODE @#$%&: " ;
    cin >> m;
    //*/
    /*
    char num = 'e';
    cout << endl << (int) num-64 << endl;
    */
    //cout << "\nEncoded Messeage of A = "<< encoding(m,e) << endl;

    encoding(m,e,n);
    //decoding(m,d,n);


    return 0;
}

