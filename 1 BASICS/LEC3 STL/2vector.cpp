#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6};
    //push back and emplace back put the value at the  end
    // v.push_back(1);
    // v.emplace_back(2);

    //for pairs
    // v.push_back({1,2});// Uses the copy constructor
    // v.emplace_back(1,2);// Constructs "aaaaa" directly in place
    vector<int>v1(5,20);
    vector<int>v2(v1);

    //so basically itterator is something that allows us to access the elements of the container
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";//so here *it print the value at the iterator it points to

    it =it+2;
    cout<<*(it)<<" ";

    //differnet way of acess the data form vector end itterate data at the extreme end not last element
    // vector<int>::iterator it= v.end();**this is more imp than two other below
    // vector<int>::iterator it= v.rend();
    // vector<int>::iterator it= v.rbegin();


    cout<<v[0]<<" "<<v.at(0);//we can print data through this like array an
    cout<<" "<<v.back()<<" "<<endl;//v.back() print elemnt at the end of the vector

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" "<<endl;
    }
    for(auto it=v.begin();it!=v.end();it++){//*****auto****is a function that can be used to get the type of the variable
        cout<<*(it)<<" ";
    }
    for(auto it:v){//using for each  loop
        cout<<it<<" "<<endl;
    }   

    //erase func
    v.erase(v.begin()+1);
    v.erase(v.begin()+1,v.begin()+3);
    
    //insert func
    vector<int>v(2,100);
    v.insert(v.begin(),1);
    v.insert(v.begin(),2,3);
    
    vector<int>copy(2,50);
    v.insert(v.begin();copy.begin();copy.end())//that  just copy the data from copy to v at the begining of vector

    cout<<v.size();

    v.pop_back();
    //v1{1,2} v2{3,4}
    v1.swap(v2);//v1{3,4} v2{1,2}
    v.clear();
    cout<<v.empty(); 
    }