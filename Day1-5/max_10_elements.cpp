#include <bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;


/*

FOR GCD USE __gcd(a,b);
FOR LCM USE (a*b)/__gcd(a,b);

*/

int main(){

	fast();
	//min heap
    priority_queue<int, vector<int>, greater<int>> pq; 
	int n;
    while (cin >> n)
    {
       if(pq.size()< 10)
       pq.push(n);
       else if(n > pq.top()){
           pq.pop();
           pq.push(n);
       }
    }
	for(int i = 0; i<10; i++){
	cout<<pq.top()<<" ";
	pq.pop();
    }
	return 0;
}	

//      *        * * * * *
//     * *              *
//    *   *            *
//   *  *  *          *
//  *       *        *

//arnavjha07@gmail.com
