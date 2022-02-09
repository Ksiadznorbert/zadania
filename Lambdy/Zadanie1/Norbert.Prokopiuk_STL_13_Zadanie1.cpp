#include <iostream>
using namespace std;

int main(){
    int k;
    double a;
    do{
    cout<<"podaj wartosc argumentu rozna od zera"<<endl;
    cin>>a;
    }while(a==0);
    cout<<"co chcesz z nimi zrobic"<<endl;
    cout<<"1.dodawac 100"<<endl<<"2.pomnozyc przez 100"<<endl<<"3.podzielic przez 100"<<endl<<"4.kwadrat argumentu"<<endl<<"5.wszystko"<<endl;
    cin>>k;
    auto fun1=[](double a) {cout<<"argument+100 ="<<a+100<<endl;};
    auto fun2=[](double a) {cout<<"argument*100 ="<<a*100<<endl;};
    auto fun3=[](double a) {cout<<"argument/100 ="<<a/100<<endl;};
    auto fun4=[](double a) {cout<<"argument*argument ="<<a*a<<endl;};
    switch(k){
case 1:{
    fun1(a);
    break;}
case 2:{
    fun2(a);
    break;}
case 3:{
    fun3(a);
    break;}
case 4:{
    fun4(a);
    break;}
case 5:{
    fun1(a);
    fun2(a);
    fun3(a);
    fun4(a);
    break;
    }}
    return 0;
}
