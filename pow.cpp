//
// Created by 刘谨瑞 on 2022/11/6.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("pow.in","r",stdin);
    freopen("pow.out","w",stdout);

    long long a,b;
    cin >> a >> b;
    if(a==1){
    	cout << "1" <<endl;
		return 0; 
	}
    long long sum = a;
    for(long long i=1;i<=b;i++){
        sum *= a;
        if(sum > 1000000000){
            cout << "-1" <<endl;
            return 0;
        }
    }
    cout << sum <<endl;

    fclose(stdin);
    fclose(stdout);
    return 0;
}

