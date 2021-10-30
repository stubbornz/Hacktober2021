#include <iostream>
using namespace std;

int largest(int arry[], int N)
{

    int large=arry[0];

    for(int i=1; i<N; i++)
    {
        if(arry[i]>large)
            large=arry[i];
    }
    return large;

}

int main()
{

    int N;
    cin>>N;

    int arry[N];
    for(int i=0; i<N; i++)
        cin>>arry[i];


    cout<<endl<<largest(arry, N);

}
