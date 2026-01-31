#include<bits/stdc++.h>
using namespace std;

void Iterator()
{
    
    // vector<pair<int,int>>vec;
    // vec.emplace_back(2,65);
    // vec.emplace_back(59,69);
    // vec.emplace_back(3,30);
    // vec.emplace_back(4,40);
    // vec.emplace_back(5,50);

    // vector<pair<int,int>>::iterator it;

    // it = vec.begin();  //will give first vector  {2,65}
    //  cout << it->first << " " << it->second << endl;


    // it = vec.begin()+1;  //will give second vector output {59,69}
    // cout << it->first << " " << it->second << endl;
    

    // it = vec.end()-1;
    // cout << it->first<<endl;     //will give second vector first element {59}

    /*
     cout << *(it) << " ";  
    it is an iterator pointing to a pair<int,int>.
    *it gives you the pair itself.
    But cout does not know how to print a pair directly. (Unlike int, float, string.)
    */

    // for (auto it=vec.begin();it != vec.end();it++)
    // {
    //     cout <<"for loop mate nu output"<<endl;
    //     cout << it->first <<" "<<it->second<<endl;
    // }


    //to delete element from vector
    // vec.erase(vec.begin()+1);
    // vec.erase(vec.begin()+2, vec.begin()+4);

    // for (auto it = vec.begin(); it != vec.end(); ++it) {
    //     cout << "(" << it->first << "," << it->second << ") ";
    // }
    // cout << endl;

    //to insert the element in vector
    //vec.insert(vec.begin(),300);



}
int main()
{
    Iterator();
    return 0;
}