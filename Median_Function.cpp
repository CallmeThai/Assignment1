/*
 * C++ Program to Compute the Median of Numbers
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    vector<double> v;
    int temp, len;
 
    cout << "Enter the number of elements ";
    cin >> len;
    while (v.size() < len)
    {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    if (v.size() % 2 == 0)
        cout << endl << "Median = "
                  << (v[v.size()/2 - 1] + v[v.size()/2]) / 2
	          << endl;
    else
        cout << endl << "Median = " << v[v.size()/2]
		  << endl;
}