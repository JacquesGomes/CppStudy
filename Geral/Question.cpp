#include <iostream>
 
using namespace std;
 
int main (){
    
    int wmelon;
    
    cin >> wmelon;
    if (wmelon == 2){
        cout << "NO";
    }
    else if (wmelon % 2 == 0){
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
  
}