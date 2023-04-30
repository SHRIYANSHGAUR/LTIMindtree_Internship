
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;


template<class T> using Tree = tree< T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>; 


#define endl "\n"
#define fi first
#define se second
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define mod 1000000007
#define ump unordered_map
#define int long long
#define vi vector<int>
#define bs binary_search
#define pi pair<int, int>
#define all(a) a.begin(), a.end()
#define bcttr(x) __builtin_popcountll(x)
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define sum_all(a) accumulate(a, a + n, 0)
#define v_min(a) *min_element(a, a + n)
#define v_max(a) *max_element(a, a + n)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define test \
  int tc;    \
  cin >> tc; \
  while (tc--)
#define INPUT                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
 
// -----------------
 
// template<class T> struct Seg { // comb(ID,b) = b
// 	const T ID = 0; T comb(T a, T b) { return a+b; }
// 	int n; vector<T> seg;
// 	void init(int _n) { n = _n; seg.assign(2*n,ID); }
// 	void pull(int p) { seg[p] = comb(seg[2*p],seg[2*p+1]); }
// 	void upd(int p, T val) { // set val at position p
// 		seg[p += n] = val; for (p /= 2; p; p /= 2) pull(p); }
// 	T query(int l, int r) {	// sum on interval [l, r]
// 		T ra = ID, rb = ID;
// 		for (l += n, r += n+1; l < r; l /= 2, r /= 2) {
// 			if (l&1) ra = comb(ra,seg[l++]);
// 			if (r&1) rb = comb(seg[--r],rb);
// 		}
// 		return comb(ra,rb);
// 	}
// };
// use case :S.init(n),  S.upd(st[s],x), S.query(st[s],en[s])
// int sumofdigit(int n)
// {
//   int sum = 0;
//   while (n > 0)
//   {
//     int p = n % 10;
//     sum = sum + p;
//     n = n / 10;
//   }
//   return sum;
// }
// //a^b ==( a^{b mod (p - 1)} )mod p
 

// ll expo(ll base, ll pow) {
// 	ll ans = 1;
// 	while (pow) {
// 		if (pow & 1) ans = ans * base % mod;
// 		base = base * base % mod;
// 		pow >>= 1;
// 	}
// 	return ans;
// }

// int gcd(int a, int b)
// {
//   if (b == 0)
//     return a;
 
//   return gcd(b, a % b);
// }
 
// void computeTotient(int n)
// {
//     //?(n) = n?1 if n is prime.  // no. of coprimes
//     long long phi[n+1];
//     for (int i=1; i<=n; i++)
//         phi[i] = i; // indicates not evaluated yet
//     for (int p=2; p<=n; p++)
//     {
//         if (phi[p] == p)
//         {
//             phi[p] = p-1;
 
//             for (int i = 2*p; i<=n; i += p)
//             {
//             phi[i] = (phi[i]/p) * (p-1);
//             }
//         }
//     }
 
//      for (int i=1; i<=n; i++)
//     cout << "Totient of " << i << " is "
//         << phi[i] << endl;
// } 
// int lcm(int a, int b)
// {
//   return (a * b) / gcd(a, b);
// }
 
// int countDigits(int x)
// {
//   int c = 0;
 
//   while (x > 0)
//   {
//     x = x / 10;
//     c++;
//   }
//   return c;
// }
 
// bool isPrime(int n)
// {
//   if (n == 1)
//     return false;
 
//   if (n == 2 || n == 3)
//     return true;
 
//   if (n % 2 == 0 || n % 3 == 0)
//     return false;
 
//   for (int i = 5; i * i <= n; i = i + 6)
//   {
//     if (n % i == 0 || n % (i + 2) == 0)
//       return false;
//   }
 
//   return true;
// }
//  int binomial(int n, int k, int p) {
// 	vector<vector<int>> dp(n + 1, vector<int> (k + 1, 0));
	
// 	for (int i = 0; i <= n; i++) {
// 		dp[i][0] = 1;
// 		if (i <= k) {
// 			dp[i][i] = 1; 
// 		}
// 	}
// 	for (int i = 0; i <= n; i++) {
// 		for (int j = 1; j <= min(i, k); j++) {
// 			if (i != j) {  // skips over the base cases
// 				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % p;
// 			}
// 		}
// 	}
// 	return dp[n][k];  // returns nCk modulo p
// }
// void isKthBitSet(int n, int k)
// {
//   if ((n >> (k - 1)) & 1)
//     cout << "SET";
//   else
//     cout << "NOT SET";
// }
 
// void printDivisors(int n)
// {
//   for (int i = 1; i * i <= n; i++)
//   {
//     if (n % i == 0)
//     {
//       cout << i << " ";
 
//       if (i != (n / i))
//         cout << (n / i) << " ";
//     }
//   }
// }
 
// int countDivisors(int n)
// {
//   int cnt = 0;
//   for (int i = 1; i <= sqrt(n); i++)
//   {
//     if (n % i == 0)
//     {
//       if (n / i == i)
//         cnt++;
 
//       else
//         cnt = cnt + 2;
//     }
//   }
//   return cnt;
// }

// vector<int> Divisors(int n)
// {
//     vector<int>v;
//   for (int i = 1; i * i <= n; i++)
//   {
     
//     if (n % i == 0)
//     {
//       v.push_back(i);
 
//       if (i != (n / i))
//          v.push_back(n/i);
//     }
//   }
//   return v;
// }
//  ///x ^(m?1) mod m = 1
// vector<int> primefactor(int n) {
// vector<int> f;
// for (int x = 2; x*x <= n; x++) {
// while (n%x == 0) {
// f.push_back(x);
// n /= x;
// }
// }
// if (n > 1) f.push_back(n);
// return f;
// }

// bool isSort(int v[], int n)
// {
//   if (n == 0 || n == 1)
//     return true;
 
//   for (int i = 1; i < n; i++)
 
//     if (v[i - 1] > v[i])
//       return false;
 
//   return true;
// }
 
// int computeXOR(int n)
// {
//   if (n % 4 == 0)
//     return n;
//   if (n % 4 == 1)
//     return 1;
//   if (n % 4 == 2)
//     return n + 1;
//   else
//     return 0;
// }
 
// vector<int>subsetSum(int l ,int r, int a[],int n){
//     int length= r-l+1;
//     vector<int>v;
//     for(int i=0;i< (1<<length);i++){
//         int sum=0;
//         for(int j=0;j<length;j++){
//             if( i & (1<<j)){
//                 sum+= a[ l +j];   // lower index + j
//                 }
//         }
//         v.push_back(sum);
//     }
//     return v;
    
// }

vector<int>ans,v;
void  help(int s,int t, int sum ,int n, int mx){
    
    if(t>n || s>sum)return;
    
    if(n==t && s==sum){
        ans=v;
        return;
    }
    
    for(int i=1;i<=mx;i++){
        s+=i;
        v.push_back(i);
        help(s,t+1, sum ,n, mx);
        s-=i;
        v.pop_back();
    }
    
}

void fun(){
    int n;
    cin>>n;
    
    vector<vector<int>>mat(n, vector<int>(n-1,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin>>mat[i][j];
        }
    }
    
    vector<int>f,s;
    int m,k,q=0,w=0;
    for(int i=1;i<n;i++){
        if(mat[i-1][0]!=mat[i][0] && q==0 ){
            for(int j=0;j<n-1;j++)f.push_back(mat[i-1][j]);
            for(int j=0;j<n-1;j++)s.push_back(mat[i][j]);
            q=1;
        }
         if(mat[i-1][n-2]!=mat[i][n-2] && w==0){
            m=mat[i][0];
            k=mat[i-1][0];
            w=1;
        }
    }
    
    
    // for(auto y: s)cout<<y<<" ";
    // cout<<endl;
    // for(auto y: f)cout<<y<<" ";
    // cout<<endl;
    
     
  
    if(m != f[0]){
        
        bool flag=false;
        for(auto z:f){
            if(m==z){
                flag=true;
                break;
            }
        }
        if(flag==false){
        cout<<m<<" ";
        
        
        for(int i=0;i<n-1;i++){
            if(i==n-2){
                cout<<f[i];
            }
            else{
                cout<<f[i]<<" ";
            }
        }
        cout<<endl;
            return;
        }
    }
     if(m!= s[0]){
        //   cout<<f[0]<< " " <<m <<" "<<s[0]<<" "<<k<<endl;
          bool flag=false;
        for(auto z:s){
            if(m==z){
                
                flag=true;
                break;
            }
        }
        if(flag==false){
      
         
        cout<<m<<" ";
       
        for(int i=0;i<n-1;i++){
            if(i==n-2){
                cout<<s[i];
            }
            else{
                cout<<s[i]<<" ";
            }
        }
        cout<<endl;
        return;
        }
    }
    if(k != f[0]){
        
        bool flag=false;
        for(auto z:f){
            if(k==z){
                flag=true;
                break;
            }
        }
        if(flag==false){
        cout<<k<<" ";
        
        
        for(int i=0;i<n-1;i++){
            if(i==n-2){
                cout<<f[i];
            }
            else{
                cout<<f[i]<<" ";
            }
        }
        cout<<endl;
            return;
        }
    }
     if(k!= s[0]){
          bool flag=false;
        for(auto z:s){
            if(k==z){
                flag=true;
                break;
            }
        }
        if(flag==false){
      
         
        cout<<k<<" ";
       
        for(int i=0;i<n-1;i++){
            if(i==n-2){
                cout<<s[i];
            }
            else{
                cout<<s[i]<<" ";
            }
        }
        cout<<endl;
            return;
        }
    }
    
    
}
 
int32_t main()
{
  INPUT
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
 test{
    fun();
 }
}

