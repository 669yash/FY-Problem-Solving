#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N=4;
	int k=3,ks;
	int mat[4][4]={{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }};
    
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
    ks=arr[k - 1];
    cout << "K'th smallest element is "<<ks;
    return 0;
}
