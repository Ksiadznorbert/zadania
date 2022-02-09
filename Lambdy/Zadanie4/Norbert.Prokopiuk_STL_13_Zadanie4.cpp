#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){double wynik,wynik2;
    vector<double>v1{1,2,3,4,5,6,7,8,9,10};
    auto jd = [&](double v1,double suma){cout<<suma+v1;};
    for_each (v1.begin(), v1.end(),[&wynik,&wynik2](int v2){
        if(v2%5==0){wynik=wynik+1;}
        if(v2%3==0){wynik2=wynik2+1;}
    });
    cout<<"podzielnych przez 5 jest="<<wynik<<endl;
    cout<<"podzielnych przez 3 jest="<<wynik2<<endl;
    return 0;
}
