#include<bits/stdc++.h>

using namespace std;

#define lli long long int

#define ulli unsigned long long int

int main(){

    int T;

    cin>>T;

    while(T--){

    	string s;

    	int d;

    	cin>>s>>d;

    	int zero = 0;

    	for(int i= 0 ; i < s.size();i++){

    		if(s[i] == '0'){

    			zero++;
			}
		}

		int n = s.size();

		int f1 = 1, f2 = 1;

		for(int i=1; i<=n; i++){

			f1 *= i;
		}

		for(int i=1; i<=n-d; i++){

			f2 *= i;
		}

		int result = f1/f2;

		if(zero){

			f1 = 1, f2 = 1;

			n--;

			d--;

			for(int i=1; i<=n; i++){

				f1 *= i;
			}

			for(int i=1; i<=(n-d); i++){

				f2 *= i;
			}

			result -= (f1/f2);
		}

		cout<<result<<endl;
	}
}
