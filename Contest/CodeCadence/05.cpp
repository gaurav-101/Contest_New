#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int tc;
   cin >> tc;
   while (tc--) {
      int f,r;
      cin>>f>>r;
      float sch;
      if(r>=1 && r<=3){
          sch=0;
      }
      else if(r>=4 && r<=10){
          sch=0.25;
      }
      else if(r>=11 && r<=50){
          sch=0.50;
      }
        else{
          sch=1.00;
      }
      float ans= f* sch;
      cout<<round(ans)<<endl;
  }
}
