#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    long long arr[tc];
    long long sum[tc];
    for(int i = 0; i < tc; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr+tc);
    for(int i = 0; i < tc; ++i)
        sum[i] = arr[i]*(tc-i);
    sort(sum, sum+tc);
    cout << sum[tc-1];
	return 0;
}
