// Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

// Input:
// The first line of input contains an integer T, denoting the number of testcases. Then T test cases follow. Each test case consists of three lines. First line of each testcase contains an integer N denoting size of the array. Second line contains N space separated integer denoting elements of the array. Third line of the test case contains an integer K.

// Output:
// Corresponding to each test case, print the kth smallest element in a new line.

#include <algorithm>
using namespace std;

int main() {
	//code
	int x;
	cin>>x;
	while(x--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int b;
	    cin>>b;
	    cout<<a[b-1]<<endl;
	}
	return 0;
}


// Input:
// 2
// 6
// 7 10 4 3 20 15
// 3
// 5
// 7 10 4 20 15
// 4


//Output:
// 7
// 15