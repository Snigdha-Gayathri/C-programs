#include <iostream>
using namespace std;
int main(){
    double sales=95000;
    
    double stateTaxRate=0.04;
    double stateTaxedAmt= sales * stateTaxRate;
    cout<<"State Tax: $" << stateTaxedAmt << endl;
    double stateAmt= sales - stateTaxedAmt;

    double countyTaxRate=0.02;
    double countyTaxedAmt= sales * countyTaxRate;
    cout<<"County Tax: $" << countyTaxedAmt << endl;
    double countyAmt= sales - countyTaxedAmt;

    cout<<"Your sales after the state tax: " << stateAmt <<endl
        <<"Your sales after the county tax: " << countyAmt;



}