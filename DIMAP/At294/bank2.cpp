#include <iostream>


using namespace std;

int main (){

    int n, q;

    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++){
        arr[i] = i+1;
    }

    int event;
    int contador = 0;
    int temp;
    int k = 0;
    int contador2 = 0;


    for (int i = 0; i < q; i++){
        cin >> event;

        if(event == 1){
            contador++;
        }
        else if(event == 2){
            cin >> temp;

            for(int j = temp-1; j < n-1; j++){
                arr[temp-1] = arr[temp];
                temp++;
            }
            contador2++;
        }
        else if (contador > contador2){
            cout << arr[k] << endl;
            k++;
            }
        
    }

    return 0;
}