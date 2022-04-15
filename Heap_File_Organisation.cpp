#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <bitset>
#include <cmath>
#define ll int long long
#define makearr int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define For(i,j,n) for(int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define pll pair<ll,ll>
#define ri(n) int n; cin>>n;
#define rll(n) ll n; cin>>n;
#define di(n) int n;
#define dll(n) ll n;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ri(n);int x;map<int,int> rs;
    vector<vector<int>> pages;pages.pb({});
    vector<int> pc;pc.pb(n-16);
    while(cin>>x){
        if(x==1){
            int a,b;cin>>a>>b;
            rs[b]=a+4;int id=-1;
            For(i,0,pc.size()){
                if(pc[i]>=a+4){
                    id=i;break;
                }
            }
            if(id>-1){
                pages[id].pb(b);
                pc[id]-=(rs[b]);
            }
            else{
                pages.pb({});pc.pb(n-16);
                (pages.back()).pb(b);pc.back()-=rs[b];
            }
        }
        else if(x==3){
            ri(pk);int id1=-1,id2=-1;
            For(i,0,pages.size()){
                For(j,0,pages[i].size()){
                    if(pages[i][j]==pk){
                        id1=i;id2=j;break;
                    }
                }
            }cout<<id1<<" "<<id2<<"\n";
        }
        else if(x==2){
            if(pages[0].empty()) cout<<0<<"\n";
            else{cout<<pages.size()<<" ";For(i,0,pages.size()) cout<<pages[i].size()<<" ";cout<<"\n";}
        }
        else break;
    }
    return 0;
}