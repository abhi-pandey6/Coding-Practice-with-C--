#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v;

    cout<<"size : "<<v.size()<<endl;
    cout<<"capasity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capasity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capasity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capasity: "<<v.capacity()<<endl;
     v.push_back(3);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capasity: "<<v.capacity()<<endl;
     v.push_back(3);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capasity: "<<v.capacity()<<endl;
     v.push_back(3);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capasity: "<<v.capacity()<<endl;

    v.resize(5);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capasity: "<<v.capacity()<<endl;

    int arr[6];

    
    

    return 0;
}













