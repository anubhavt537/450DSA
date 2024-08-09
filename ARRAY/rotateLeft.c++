#include<iostream>
using namespace std;
int rotateLeft(int arr[],int n){
    int temp=arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    
    
}

int main(){

}