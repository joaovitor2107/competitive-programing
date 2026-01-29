# Sorting in cpp
## Static Arrays 
Use sort(arr, arr + n), with n being the number of elements to be sorted, we can also specify an specific range to be sorted using sort(arr + 1, arr+n)

## Dynamic Arrays 
Use sort(arr.begin(), arr.end()), here we also can specify a range sort(arr.begin() + 1, arr.begin() + 3)

To do descending sorting we can use sort(arr.rbegin(), arr.rend())

If we have an vector<pair<int,int>> the sort function is going to sort it using the first element and then the second if there is a tie 

### Comparision Operator and Functions
#### Operator 
The function sort needs a comparision operator defined for the data type that will be sorted, if using a struct you will need to define the operator inside the struct

``` cpp
struct Example {
    int x, y; 
    bool operator<(const Example &e){
        if(x != e.x) return x < e.x;
        else return y < e.y;
    }
};
```
Here the operator is to signal what we are going to consider while sorting, for example in this struct we consider first the element x and if both x are equal we consider y

#### Functions 
It is also possible to add an external comparision function to the sort function, for example: 
``` cpp
bool comp(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

sort(v.begin(), v.end(), comp);
```
Here we sort by string size first and after by alphabetical order, the comparision function returns true when the first element is smaller
