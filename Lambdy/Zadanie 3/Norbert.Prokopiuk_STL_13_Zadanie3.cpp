#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){double wynik;
    vector<double>v1{1,2,3,4,5,6,7,8,9,10};
    auto jd = [&](double v1,double suma){cout<<suma+v1;};
    for_each (v1.begin(), v1.end(),[&wynik](int v2){
        return wynik=wynik+v2;
    });
    cout<<"suma wynosi="<<wynik<<endl;
    cout<<"srednia sumy wynosi="<<wynik/v1.size()<<endl;
    return 0;
}
