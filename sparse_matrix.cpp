#include<iostream>
using namespace std;

struct sparse {
    int r,c,v;
};
struct sparse s[5]; 

int main(){
    
    int arr[5][5];
    int k=0;
        
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if((arr[i][j])!=0){
                s[k].r=i;
                s[k].c=j;
                s[k].v=arr[i][j];
                k++;
            }
        }
    }
    
    cout<<"printing the 2D array"<<endl;
      
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    cout<<endl;
    cout<<"row"<<" "<< "column"<< " "<< "value"<<endl;
    
    for(int i=0;i<5;i++){
        cout<<s[i].r<<"    "<< s[i].c<<"      "<< s[i].v<<endl;
    }
    
    return 0;
}