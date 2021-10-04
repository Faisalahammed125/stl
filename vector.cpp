#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};

// initializing vector like an array
    vector<int> v1 = { 10,20,30,40,50 };
// initialize vector with an array
    vector<int> v2(arr, arr+n);
// create a vector of size n and initialize every element by 5
// by default vector are initialized with 0 if second argument is not passeed
    vector<int> v3(n, 5);

// iterate by reference
    for(int &x : v1)
        x++;

// push element at the end of vector
    v1.push_back(61);

// sort vector in ascending order
    sort(v1.begin(), v1.end());

    // for both upper_bound and lower_bound it is necessary that the array or vector is sorted
// give me the iterator to first element >= 10, in this case returns iterator to 10 // O(logN) time complexity
    vector<int>::iterator it = lower_bound(v1.begin(), v1.end(), 10);

}
/*
begin() — Returns an iterator to the first element in the vector
end() — Returns an iterator to a location past last element in the vector
size() — Returns the number of elements in the vector.
resize() — Resizes the container.
empty() — Returns whether the container is empty.
front() — Returns a reference to the first element in the vector
back() — Returns a reference to the last element in the vector
push_back() — It push the elements into a vector from the back
pop_back() — It is used to pop or remove elements from a vector from the back.
insert() — It inserts new elements before the element at the specified position
erase() — It is used to remove elements from a container from the specified position or range.
clear() — It is used to remove all the elements of the vector container
*/
