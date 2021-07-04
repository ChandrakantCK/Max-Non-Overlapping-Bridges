#include<bits/stdc++.h>
using namespace std;

// north-south bridge co-ordinates
struct co_ordinates{
    int north;
    int south;
};

// comparison function to sort bridge co ordinates
bool compare(struct co_ordinates city1, struct co_ordinates city2){
    if(city1.south==city2.south){
        return city1.north<city2.north;
    }
    return city1.south<city2.south;
}


// function to find the maximum number
// of non-overlapping bridges that can be built
int maxBridges(struct co_ordinates values[], int n){
    int lis[n];
    for(int i=0;i<n; i++){
        lis[i]=1;
    }

    sort(values,values+n,compare);

    // LIS applied on the northern coordinates
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(values[i].north>values[j].north && lis[i]<1+lis[j]){
                lis[i]=1+lis[j];
            }
        }

    }
  
    // sort lis[] and then return the last element of lis[] which
    //gives the max non-overlapping bridges that can be built
    sort(lis,lis+n);
    return lis[n-1];

}

int main()
{
    struct co_ordinates values[]={{6,2}, {4,3}, {2,6}, {1,5}};
    int n=4;
    cout<<"Maximum possible non-overlapping bridges="<<maxBridges(values,n);
    return 0;
}