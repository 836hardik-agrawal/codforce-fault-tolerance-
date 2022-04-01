#include<bits/stdc++.h>
using namespace std;
void solve(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
cin>>b[i];
}
int ans,timepass;
// case 1
timepass=abs(a[0]-b[0])+abs(a[n-1]-b[n-1]);
ans=timepass;
// case 2
timepass=abs(a[0]-b[n-1])+abs(a[n-1]-b[0]);
if(timepass<ans) ans=timepass;
// case 3

  int min1=abs(b[0]-a[n-1]);
  for(int i=0;i<n;i++){
      if(abs(b[i]-a[n-1])<min1){
          min1=b[i]-a[n-1];
      }
  }
  int min2=abs(a[0]-b[n-1]);
  for(int i=0;i<n;i++){
      if(abs(a[i]-b[n-1])<min2){
          min2=a[i]-b[n-1];
      }
  }
  timepass=min1+min2+abs(a[0]-b[0]);
  if (timepass<ans) ans=timepass;

//case4
 min1=abs(b[0]-a[n-1]);
  for(int i=0;i<n;i++){
      if(abs(b[i]-a[n-1])<min1){
          min1=b[i]-a[n-1];
      }
  }
   min2=abs(a[0]-b[0]);
  for(int i=0;i<n;i++){
      if(abs(a[i]-b[0])<min2){
          min2=a[i]-b[n-1];
      }
  }
  timepass=min1+min2+abs(a[0]-b[n-1]);
  if (timepass<ans) ans=timepass;

//case 5
 min1=abs(b[0]-a[0]);
  for(int i=0;i<n;i++){
      if(abs(b[i]-a[0])<min1){
          min1=b[i]-a[0];
      }
  }
   min2=abs(a[0]-b[0]);
  for(int i=0;i<n;i++){
      if(abs(a[i]-b[0])<min2){
          min2=a[i]-b[0];
      }
  }
  timepass=min1+min2+abs(a[n-1]-b[n-1]);
  if (timepass<ans) ans=timepass;
// case 6
 min1=abs(b[0]-a[0]);
  for(int i=0;i<n;i++){
      if(abs(b[i]-a[0])<min1){
          min1=b[i]-a[0];
      }
  }
   min2=abs(a[0]-b[0]);
  for(int i=0;i<n;i++){
      if(abs(a[i]-b[0])<min2){
          min2=a[i]-b[0];
      }
  }
  timepass=min1+min2+abs(b[0]-a[n-1]);
  if (timepass<ans) ans=timepass;
// case 7
 min1=abs(b[0]-a[0]);
  for(int i=0;i<n;i++){
      if(abs(b[i]-a[0])<min1){
          min1=b[i]-a[0];
      }
  }
   min2=abs(a[0]-b[n-1]);
  for(int i=0;i<n;i++){
      if(abs(a[i]-b[n-1])<min2){
          min2=a[i]-b[n-1];
      }
  }
  int min3=abs(b[0]-a[0]);
  for(int i=0;i<n;i++){
      if(abs(a[i]-b[0])<min3){
          min3=abs(a[i]-b[0]);
      }
  }
  int min4=abs(b[0]-a[n-1]);
  for(int i=0;i<n;i++){
      if(abs(b[i]-a[n-1])<min4){
          min4=abs(b[i]-a[n-1]);
      }
  }
  
timepass=min1+min2+min3+min4;
if(timepass<ans) ans=timepass;

cout<<ans<<endl;





}





}
int main(){


solve();

}