#include<iostream>
#include<fstream>
using namespace std;
void findCommonElements(int arr1[],int arr2[],int n,int m){
	ofstream out;
	out.open("output.txt");
	int i=0,j=0;
	int flag=0;
	for(int k=0;k<m+n;k++){
		if(arr1[i]==arr2[j]){
			out << arr1[i] << " ";
			i++;
			j++;
			flag=1;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
	}
	if(flag==0)
		out << "No Common\n";
}
int main(){
	ifstream in;
	in.open("input.txt");
	ofstream out;
	out.open("output.txt");
	int size,size2;
	in >> size;
	int arr1[size];
	for(int i=0;i<size;i++)
		in >> arr1[i];
	in >> size2;
	int arr2[size2];
	for(int i=0;i<size2;i++)
		in >> arr2[i];
	findCommonElements(arr1,arr2,size,size2);
}
