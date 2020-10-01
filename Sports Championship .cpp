#include<iostream>
using namespace std;

int main(){
    
  long long int t;
  cin >> t;
  while (t--)
    {
      long long int red, green, white, blue, orange;
      cin >> red >> green >> white >> blue >> orange;
      
      red = 100/red;
      green = 100/green;
      white = 100/white;
      blue =100/blue;
      orange = 100/orange;
      
      if(red<=green && red<=white && red<=blue && red<=orange){
          cout<<"Champions"<<endl;
      }
      else{
          cout<<-1<<endl;
      }

    }
    return 0;
}
