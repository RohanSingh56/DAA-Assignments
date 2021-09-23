#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
ofstream out;
void sumPairIsEqToK(int arr[],int n,int key){
	out.open("output.txt");
	int left=0;
	int right=n-1;
	int flag=0;
	while(left<right){
		if(arr[left]+arr[right]==key){
			out << arr[left] << " " << arr[right] << ", ";
			right--;
			flag++;
		}
		else if(arr[left]+arr[right]>key){
			right--;
		}
		else if(arr[left]+arr[right]<key){
			left++;
		}
	}
	if(flag==0)
			out << "No Such Pair Exist\n";
		else
			out << endl;
}
int main(){
	ifstream in;
	in.open("input.txt");
	ofstream out;
	out.open("output.txt");
	int t,size;
	in >> t;
	while(t--){
		in >> size;
		int arr[size];
		for(int i=0;i<size;i++)
			in >> arr[i];
		int k;
		in >> k;
		sort(arr,arr+size);
	 	sumPairIsEqToK(arr,n,k);
	}
}
