#include <iostream>

using namespace std;
int main()

{
   float ucgenAci,ucgenAci2,ucgenAci3;
   cout<<"Ücgenin iç açı değerlerini giriniz:"<<endl;
   cin>>ucgenAci;
   cin>>ucgenAci2;
   cin>>ucgenAci3;
   
   float icAciToplami= ucgenAci + ucgenAci2 + ucgenAci3;
   
   if(icAciToplami==180)
   {
        if(ucgenAci==60 and ucgenAci2==60){
            cout<<"--> Bu bir eşkenar üçgendir.";
        }
        
        else if(ucgenAci==ucgenAci2 or ucgenAci==ucgenAci3 or ucgenAci3==ucgenAci2){
            cout<<"--> Bu bir ikizkenar üçgendir.";
        }
        
        else if(ucgenAci != ucgenAci2 and ucgenAci2 != ucgenAci3){
            cout<<"--> Bu bir çeşitkenar üçgendir.";
        }
        
   }
   
   else
   {
       cout<<"UYARI:Girdiğiniz değerlerin toplamı 180 olmamaktadır.";
   }
   
}