#include <iostream>

using namespace std;



template<class T, class U>
class Par{
    private: 
        T primeiro;
        U segundo;

    public:
        Par(T a, U b);
        T getPrimeiro();
        U getSegundo();
        void setPrimeiro(T primeiro);
        void setSegundo(U segundo);
};

template<class T, class U>
Par<T, U>::Par(T a, U b){
    this->primeiro = a;
    this->segundo = b;
}

template<class T, class U>
T Par<T, U>::getPrimeiro(){
    return this->primeiro;
}

template<class T, class U>
U Par<T, U>::getSegundo(){
    return this->segundo;
}

template<class T, class U>
void Par<T, U>::setPrimeiro(T primeiro){
    this->primeiro = primeiro;
}

template<class T, class U>
void Par<T, U>::setSegundo(U segundo){
    this->segundo = segundo;
}

int main(){

    int a = 10;
    char b = 'a';

    Par<int, char> meupar(a,b);
    
    cout << meupar.getPrimeiro() << endl;
    cout << meupar.getSegundo() << endl;

}