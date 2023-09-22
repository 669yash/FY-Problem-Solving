#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N=4;
	int mat[4][4]={{10,20,30,40},
    {15,25,35,45},
    {27,29,37,48},
    {32,33,39,50}};
    
    int arr[N*N];
    int ind=0;
    for(int i=0;i<N;i++){
    	for(int j=0;j<N;j++){
    		arr[ind++]=mat[i][j];
		}
	}
	sort(arr,arr + N*N);
	
	ind=0;
    for(int i=0;i<N;i++){
    	for(int j=0;j<N;j++){
    		mat[i][j]=arr[ind++];
        }
    }
    
    for(int i=0;i<N;i++){
    	for(int j=0;j<N;j++){
    		cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
