#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
char freq[26];
void countSortMaxFreq(char arr[],int n){
	for(int i=0;i<26;i++)
		freq[i]=0;
	for(int i=0;i<n;i++){
		++freq[(int)(arr[i])-97];
	}
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
		char arr[size];
		for(int i=0;i<size;i++)
			in >> arr[i];
		countSortMaxFreq(arr,size);
		int max= *max_element(freq,freq+26);
		int index = max_element(freq,freq+26)-freq;
		char alph = 'a' + (char)(index);
		if(max>1)
			out << alph << "-" << max << endl;
		else
			out << "No Duplicate Present" << endl;
	}
}
