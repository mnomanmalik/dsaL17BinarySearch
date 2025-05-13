#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {0,1,2,3,4,5,6,7,8,9};
    
    int target = 3;

    int start = 0;
    int end = vec.size()-1;
    int mid = (end+start)/2;
    int i = 0;

    while (i < vec.size()){

        cout << "Start: " << vec[start] << endl;
        cout << "End: " << vec[end] << endl;
        cout << "Mid: " << vec[mid] << endl;
        cout << "Target: " << target << endl;


        if( vec[mid] == target){
            cout << "Equal" << endl;
            break;
        }
        
        else if(vec[mid] < target){
            cout << "Mid is lesser than target" << endl;
            cout << "-----------" << endl;

            start = mid + 1;
            mid = (start + end)/2;
        

        }

        else if(vec[mid] > target){
            cout << "Mid is greater than target" << endl;
            cout << "-----------" << endl;

            end = mid - 1;
            mid = (start + end)/2;

        }
    }

    if (i == vec.size()){
        cout << "Value Doesnot Exists";
    }

    return 0;
}