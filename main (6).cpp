//                  FOOD BILLING SYSTEM   

#include<iostream>
using namespace std;
int main(){
    cout<<"----AMAN FOOD SERVICES---";
 int returTotalBill(void);
 int totalbill=returTotalBill();
 cout<<" \n your total bill amount is "<<totalbill<<endl;
 cout<<"thank you for the order"<<endl;
}
int returTotalBill(){
    char c;
    char item;
    char vegitem;
    int billamt=0;
    char nonvegitem;
    char selectagain;
    cout<<"\n welcome to online food oredr"<<endl;
    cout<<"------please follow below instruction------"<<endl;
    cout<<"step 1: please press s to start your oreder"<<endl;
    cout<<"step 2: you can order both  veg or non veg "<<endl;
    cout<<"step 3: please press a to select veg item "<<endl;
    cout<<"step 4: please press b to select nonveg item"<<endl;
    cout<<"step 5: you will get your final bill after oreder"<<endl;
    start:
    cin>>c;
    if(c=='s' || c=='S'){
        item:
        cout<<"please your select your choice "<<endl;
        cout<<"(a) veg item      (b) non veg item "<<endl;
        cin>>item;
        if(item=='a'|| item=='A'){
        vegitemlist:
          cout<<"please select 1,2,3,4,5 as per your choice"<<endl;
          cout<<"(1) paneer : price : RS 250"<<endl;
          cout<<"(2) Burger : price : RS 50"<<endl;
          cout<<"(3) pizza : price : RS 100"<<endl;
          cout<<"(4) chaumeen : price : RS 150"<<endl;
          cout<<"(5) veg roll : price : RS 100"<<endl;
          cin>>vegitem;
          if(vegitem=='1'){
            billamt=billamt+250;
          }
          else if(vegitem=='2'){
             billamt=billamt+50; 
          }
          else if(vegitem=='3'){
              billamt=billamt+100;
          }
          else if(vegitem=='4'){
              billamt=billamt+150;
          }
          else if(vegitem=='5'){
              billamt=billamt+100;
          }
          else{
              cout<<"you have choose wrong value";
              goto vegitemlist;
          }
          cout<<" dou want to add more items , y or n "<<endl;
          cin>>selectagain;
            if(selectagain=='y'||selectagain=='Y'){
                goto item; 
                
            }
            else{
                return billamt;
            }
         }
        else if(item=='b' ||item=='B'){
           nonvegitemlist:
          cout<<"please select 1,2,3,4,5 as per your choice"<<endl;
          cout<<"(1) paneer : price : RS 350"<<endl;
          cout<<"(2) Burger : price : RS 100"<<endl;
          cout<<"(3) pizza : price : RS 150"<<endl;
          cout<<"(4) chaumeen : price : RS 200"<<endl;
          cout<<"(5) nonveg roll : price : RS 200"<<endl;
          cin>>nonvegitem;
          if(nonvegitem=='1'){
            billamt=billamt+350;
          }
          else if(nonvegitem=='2'){
             billamt=billamt+100; 
          }
          else if(nonvegitem=='3'){
              billamt=billamt+150;
          }
          else if(nonvegitem=='4'){
              billamt=billamt+200;
          }
          else if(nonvegitem=='5'){
              billamt=billamt+200;
          }
          else{
              cout<<"you have choose wrong value";
              goto nonvegitemlist;
          }
          cout<<" dou want to add more items , y or n"<<endl;
          cin>>selectagain;
            if(selectagain=='y'){
                goto item; }
            else{
                return billamt;
            } 
           
            
        }
        else{
            cout<<"you have enter wrong value please try again";
            goto item;
        }
        
    }
    else{
        cout<<"you have enter wrong value, please press s !"<<endl;
        goto start;
    }
    return billamt;
}

