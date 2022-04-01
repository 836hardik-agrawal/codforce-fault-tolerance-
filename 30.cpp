#include<bits/stdc++.h>
using namespace std;
void solve(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int i;
int a[n],b[n];
for(i=0;i<n;i++){
    cin>>a[i];
    
}
for(i=0;i<n;i++){
    cin>>b[i];
    
}

long long int sum=0;
bool ff=false,fl=false,sf=false,sl=false;
int min=abs(b[0]-a[0]);
for(i=0;i<n;i++){
    if(abs(b[i]-a[0])<min){
        min=abs(b[i]-a[0]);
    }
}
sum+=min;
ff=true;
if(abs(b[0]-a[0])==min) sf=true;
else if(
    abs(b[n-1]-a[0])==min){
sl=true;
}
 min=abs(b[0]-a[n-1]);
for(i=0;i<n;i++){
    if(abs(b[i]-a[0])<min){
        min=abs(b[i]-a[0]);
    }
}
sum+=min;
fl=true;
if(!sf){
if(abs(b[0]-a[n-1])==min) {sf=true;
}
}

    if(!sl){
   if( abs(b[n-1]-a[n-1])==min ){
sl=true;
   }
}

if(!sf){
 min=abs(a[0]-b[0]);
for(i=0;i<n;i++){
    if(abs(a[i]-b[0])<min){
        min=abs(a[i]-b[0]);
    }
}

sf=true;


    sum+=min;

}
if(!sl){
min=abs(b[n-1]-a[0]);
for(i=0;i<n;i++){
    if(abs(a[i]-b[n-1])<min){
        min=abs(a[i]-b[n-1]);
    }
}

sl=true;


    sum+=min;


}

cout<<sum<<endl;








}










}
int main(){


solve();

}