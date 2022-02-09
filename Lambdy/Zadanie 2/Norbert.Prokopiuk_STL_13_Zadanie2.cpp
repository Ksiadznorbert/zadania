#include <iostream>
using namespace std;

int main()
{
    int k;
    double a,b;
    do{
    cout<<"podaj dwie wartosci rozne od zera"<<endl;
    cin>>a>>b;
    }while(a==0 || b==0);
    cout<<"co chcesz z nimi zrobic"<<endl;
    cout<<"1.dodawac"<<endl<<"2.odejmowac"<<endl<<"3.mnozyc"<<endl<<"4.dzielic"<<endl;
    cin>>k;
    switch(k){
case 1:{
    auto lam1 = [](double a,double b){return a+b;};
    double wynik=lam1(a,b);
    cout<<wynik<<endl;
    break;}
case 2:{
    auto lam1 = [](double a,double b){return a-b;};
    double wynik=lam1(a,b);
    cout<<wynik<<endl;
    break;}
case 3:{
    auto lam1 = [](double a,double b){return a*b;};
    double wynik=lam1(a,b);
    cout<<wynik<<endl;
    break;}
case 4:{
    auto lam1 = [](double a,double b){return a/b;};
    double wynik=lam1(a,b);
    cout<<wynik<<endl;
    break;
    }
    }
    return 0;
}
