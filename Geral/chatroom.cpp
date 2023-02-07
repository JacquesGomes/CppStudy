#include <iostream>
#include <string.h>

using namespace std;

int compare (string Hello, int lenght){

    int h=0, e=0, l=0, o=0, l2=0;

    for (int i =0; i<lenght; i++){
        if (Hello[i] == 'h'){
            h = i+1;
            break;
        }
    }
    if (h == 0){
        return 0;
    }
    for (int i = h; i<lenght; i++){
        if (Hello[i] == 'e'){
            e = i+1;
            break;
        }
    }
    if (e == 0){
        return 0;
    }

    for(int i = e; i<lenght;i++){
        if(Hello[i]=='l'){
            l = i+1;
            break;
        }
    }
    if (l == 0){
        return 0;
    }
    for(int i = l; i<lenght;i++){
        if(Hello[i]=='l'){
            l2 = i + 1;
            break;
        }
    }
    if(l2 == 0){
        return 0;
    }
    for(int i = l2; i<lenght;i++){
        if(Hello[i]=='o'){
            o = i+1;
            return 1;
        }
    }
    if(o == 0){
        return 0;
    }

}

int main (){

    string Hello;
    int h, e, l, o;

    cin >> Hello;
    int lenght = Hello.length();
    
    int function=0;

    function = compare (Hello, lenght);

    if (function == 0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }

}