#include <iostream>

using namespace std;

int main()
{

    int arry[3][3];
    cout<<"ARRAY IS GOING TO BE REPRESENTED LIKE 3*3 MATRIX "<<endl;

    cout<<"ENTER ANY 9 NUMBER"<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arry[i][j];
        }
    }

    cout<<"THE RESULT OF 2-D ARRAY IS:"<<endl;

    for(int i=0; i<3; i++)
    {

        for(int j=0; j<3; j++)
        {
            cout<<arry[i][j]<<"  ";
        }
        cout<<endl;
    }

}
