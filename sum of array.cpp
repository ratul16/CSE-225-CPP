#include <iostream>
using namespace std;

int sum(int x[], int y)
{
    if (y == 1){
        return x[0];
    }
    else{
            return x[0] + sum(x+1,y-1);
    }
}

int main()
{
    cout << "Size of the Array: ";
    int size;
    cin >> size;
    int *x = new int [size];

    cout << "Enter elements: ";
    for (int i = 0; i<size; i++){
    cin>>x[i];
    }

    cout << "Sum of elements is: " << sum(x,size) << endl;

}


