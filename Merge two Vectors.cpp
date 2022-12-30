#include<bits/stdc++.h>
using namespace std;
 
//Function to print vector
void print_vector(vector<int> vector1)
{
   for (int i = 0; i < vector1.size(); i++){
        cout << vector1[i] << " ";
    }
    cout << "\n";
}
 
int main()
{
    // Get the vector
   vector<int> first = {10, 20};
   vector<int> second = { 20, 30, 40, 50};
   cout<<"First Vector Elements:";
   print_vector(first);
   cout<< "Second Vector Elements: ";
   print_vector(second);
 
    //Declaring the new vector to store elements from both vectors
    vector<int> vect1(first.size() + second.size());
    merge(first.begin(),
                   first.end(),
                   second.begin(),
                   second.end(),
                   vect1.begin());
    cout<<"New Vector Elements using 'merge()': ";
    print_vector(vect1);
 
    return 0;
}
