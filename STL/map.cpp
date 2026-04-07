#include <iostream>
#include <map>

using namespace std;

int main(){
    //CREATION
    map<string,int> m;

    m["apple"] = 100;
    m["banana"] = 50;
    m["mango"] = 40;

    for(auto p: m){
        cout << p.first << " " << p.second << "\n";
    }

    //INSERT
    m.insert({"guava", 20});
    m.emplace("papaya", 40);

    for(auto p: m){
        cout << p.first << " " << p.second << "\n";
    }

    //PRINT
    cout << m["banana"];

    return 0;
}