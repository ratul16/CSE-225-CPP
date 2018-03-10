#include <iostream>
using namespace std;


int RecAdd (int n)
{
    if(n<=0){
        return 0;
    }
    else return (n%10)+RecAdd(n/10);

}

int main()
{
    int num=0;
    cout<<"Enter a number:"<<endl;

    cin>>num;

    cout<<"The sum is : "<<RecAdd(num);

}
