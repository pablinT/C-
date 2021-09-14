#include<iostream>
#include<cmath>

using namespace std;

int main()
{ 
    cout<<"------------------"<<endl;
    cout<<"Juan llega a la puerta, escucha ruidos dentro de la casa."<<endl;
    cout<<"------------------"<<endl;
    cout<<"\nGolpear la puerta (1)\nPegarle una patada a la puerta (2)"<< endl;
    int puerta;
    cin >> puerta;

    if (puerta==1)
    {
    cout<<"------------------"<<endl;    
    cout<< "se escuchan tiros!"<<endl;
    cout<<"------------------"<<endl;
    }
    else
    {
        cout<<"------------------"<<endl;
        cout<<"parece que no va a salir nadie"<<endl;
        cout<<"------------------"<<endl;
    }

    system("pause");
    return 0;


}
