#include <iostream>
#include <iomanip>
using namespace std;

double cal(double assetPricePerUnit,double assetBoughtUnit,double feePercent,double profit){
 //Prefrences
    cout<<fixed<<setprecision(6);//making output percision to 6 digit

    //variable the calculated
    double feeInDigit,moneySpentBeforeFee,feeFromSpending,boughtAssetCost,sellingRateThatCoverAllFeeNoProfit,sellingPriceWithProfit;
    //money Spent on buying without fee and the fee on it and digitizing fee
    moneySpentBeforeFee=assetPricePerUnit*assetBoughtUnit;
    feeInDigit=feePercent*0.01;
    feeFromSpending=moneySpentBeforeFee*feeInDigit;
    boughtAssetCost=moneySpentBeforeFee+feeFromSpending;
    //selling price to fill the fee with 0 profit
    //the selling need to be make enought to cover selling and buying fee
    sellingRateThatCoverAllFeeNoProfit=boughtAssetCost/(1-feeInDigit);
    //selling With Profit
    sellingPriceWithProfit=(boughtAssetCost+profit)/(1-feeInDigit);

    return sellingPriceWithProfit;
}

int main(){
    //Variable that need to be inputed 
    double assetPricePerUnit,assetBoughtUnit,feePercent,profit;
    cout<<"Price= ";cin>>assetPricePerUnit;
    cout<<"bought Unit= ";cin>>assetBoughtUnit;
    cout<<"fee Percentage= ";cin>>feePercent;
    cout<<"Expected Profit= ";cin>>profit;

    double output=cal(assetPricePerUnit, assetBoughtUnit, feePercent, profit);
    cout<<output;
    
    return 0;
}
