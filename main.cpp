#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int number=2; number<=n; number++) {

            bool IsPrime=true;

for(int i=2; i<=number/2; i++){
    if(number%i==0){
        IsPrime=false;
        break;
   }
  }
  if(IsPrime){
    cout << number << endl;
 }
}


    return 0;
}
