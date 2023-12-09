#include<bits/stdc++.h>
using namespace std;
int main(){
  int x1,y1,x2,y2,x3,y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  int r1,r2;
  r1= ceil(sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ));
  r2= ceil(sqrt( (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1) ));
  //cout<<r1<<" "<<r2<<endl;
  int area1= ceil(3.14 * r1 * r1 );
  int area2= ceil(3.14 * r2 * r2 );
  //cout<<area1<<" "<<area2<<endl;
  if(area2==area1){
  	cout<<"-1"<<endl;
  }
  else if (area2>area1)
  {
    int rem=area2-area1;
    int inr=rem,dcr=rem;
    while(true)
    {

      if(sqrt(inr)==int(sqrt(inr)) )
      {
        break;
      }
      else inr++;
    }
    while(true)
    {

      if(sqrt(dcr)==int(sqrt(dcr)) )
      {
        break;
      }
      else dcr--;
    }
    if(rem-dcr < inr-rem )
    {
      cout<<"Shiva "<<20*(rem-dcr)<<endl;
    }
    else {
      cout<<"Krishna "<<20*(inr-rem)<<endl;
    }
  }
  else {
    int money=20*(area1-area2);
  	cout<<"Krishna "<<money<<endl;
  }
  return 0;	
}