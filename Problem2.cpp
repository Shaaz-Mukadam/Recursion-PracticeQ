//Write a simple program for finding the factorial using recursion
#include<iostream>
using namespace std;
int Fact(int n){
    if(n==0){
        return 1;
    }
    int prevFact = Fact(n-1);
    return n*prevFact;
}
int main() {
    int n;
    cin>>n;
    cout<<Fact(n)<<endl;

}
