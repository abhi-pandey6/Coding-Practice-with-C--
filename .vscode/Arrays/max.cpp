#include<iostream>
using namespace std;
int main (){
    int arr[]={6,20,9,4,7,23};
    int max  = arr[0] ;
    for(int i=0; i<=5; i++){
       if (max<arr[i]){
        max = arr[i];
       }
    }
    cout<<max<<endl;
    return 0;
}