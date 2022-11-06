#include <bits/stdc++.h>
using namespace std;

long long k, n, e, d, p, q, a, b;

int main(){
	freopen("decode.in","r",stdin);
    freopen("decode.out","w",stdout);
	ios :: sync_with_stdio(false);

	cin >> k;
	while(k--){
		cin >> n >> e >> d;

        a = n + 2 - e*d; // a = p + q
		b = sqrt(a*a - 4*n); // b = p - q;
		p = (a + b) / 2;
		q = a - p;

		if(p*q == n){ // 相乘得原数
			if(p > q) swap(p, q);
			cout << p << " " << q << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	fclose(stdin);
    fclose(stdout);
	return 0;
}
