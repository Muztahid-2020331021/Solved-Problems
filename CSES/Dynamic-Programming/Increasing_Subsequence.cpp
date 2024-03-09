#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define faster      ios_base::sync_with_stdio(0);
#define PI          acos(-1.0)
#define all(x)      x.begin(),x.end()
#define rall(x)     x.rbegin(),x.rend()
#define endl        "\n"
#define fraction(x) fixed<<setprecision(x)
#define inf         INT_MAX

#define vi      vector<int>
#define vvi     vector<vi>
#define vb      vector<bool>
#define pii     pair<int, int>
#define vpii    vector<pii>
#define vvpii   vector<vpii>


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int i;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    set<int> st;
    for(i=0;i<n;i++){
        auto it = st.lower_bound(v[i]);
        if(it!=st.end()){
            st.erase(it);
        }
        st.insert(v[i]);
    }
    cout<<st.size()<<endl;

}


int main()
{
    faster
    solve();
    
}
