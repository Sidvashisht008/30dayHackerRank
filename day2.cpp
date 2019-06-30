#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double mealCost,tip,tax,totalCost;;
    int tipPercent,taxPercent;
    cin>>mealCost;
    cin>>tipPercent;
    cin>>taxPercent;
    tip=mealCost*tipPercent/100;
    tax=mealCost*taxPercent/100;
    totalCost=mealCost+tip+tax;
    cout<<fixed<<setprecision(0)<<totalCost;
    return 0;
}
