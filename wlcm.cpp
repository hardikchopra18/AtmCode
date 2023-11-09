#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <Windows.h>
using namespace std;
void gotoxy(int a,int b){
    COORD c;
    c.X = a;
    c.Y = b;
  
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void scroll_note()	
{
system("cls");
Sleep(40);
gotoxy(45,15);
cout<<"WELCOME TO ATM BANKING SYSTEM !!!!";
int i,j=120;
	for(i = 0;i<120,j>=0;i++,j--)
	{
		gotoxy(i,3);
		Sleep(10);
		cout<<"|";
		gotoxy(j,30);
		Sleep(10);
		cout<<"|";
	}
	Sleep(2000);
}
void frame(){
	system("cls");
for(int i=0;i<=120;i++){
	gotoxy(i,2);
	cout<<"_";
	gotoxy(i,29);
	cout<<"_";
	// Sleep(40);
}
}
void sideframe(){
	system("cls");
for(int i=0;i<=31;i++){
	gotoxy(0,i);
	cout<<"|";
	gotoxy(120,i);
	cout<<"|";
	// Sleep(40);
}
}
void load(){
	system("cls");
gotoxy(60,17);
cout<<"Loading";
cout<<".";
Sleep(500);
cout<<".";
Sleep(500);
cout<<".";
Sleep(500);
cout<<".";
Sleep(500);
cout<<".";
Sleep(500);
cout<<".";
Sleep(500);
cout<<".";
Sleep(1500);


}
typedef struct account{
string name;
string fathers_name;
string dob;
char acc_type;
string city;
int pincode;
string email;
int amount;
string ph_no;
string password;

}account;






class machine{
account user[100];
int total=0;
public:
void menu();
void help();
void Proceed();
void transactions(int a);
void Create();
void Created_sucessfully();
void update_file(int);
void rewrite();
void exit();
void invald();
void backup();
void mini_statement(int);
void other_Services(int);
void fast_cash(int);
void cashdeposit(int);
void fund_transfer(int);
void balance_enquiry(int);
void pin_change(int);
void cash_withdrawal(int);

};

void machine::menu(){
// backup();
frame();
gotoxy(53,15);
cout<<"CREATE ACCOUNT"<<endl;
gotoxy(40,18);
cout<<"ALREADY HAVE ACCOUNT PRESS P TO PROCEED"<<endl;
gotoxy(110,28);
cout<<"HELP"<<endl;
gotoxy(0,30);
cout<<endl<<"C:Create account H:Help P:Proceed to account"<<endl;
cout<<"E:Exit"<<endl<<endl<<endl;
char opt;
// cin>>opt;
// switch(opt){

// case 'h':
// help();
// break;
// case 'H':
// help();
// break;
// case 'p':
// Proceed();
// break;
// case 'P':
// Proceed();
// break;
// case 'c':
// Create();
// break;
// case 'C':
// Create();
// break;
// default:
// invald();



// backup();





// }
if(kbhit){
opt=getch();
switch(opt){

case 'h':
help();
break;
case 'H':
help();
break;
case 'p':
Proceed();
break;
case 'P':
Proceed();
break;
case 'c':
Create();
break;
case 'C':
Create();
break;
case 'e':
exit();
break;
case 'E':
exit();
break;
default:
invald();









}
}

}










void machine::help(){
// sideframe();
load();
system("cls");
gotoxy(0,3);

cout<<"Inorder to use our ATM services be sure that,"<<endl<<endl<<endl;
Sleep(500);
cout<<"you might have already opened an account previously."<<endl<<endl<<endl;
Sleep(500);
cout<<"ATM Services :"<<endl<<endl<<endl<<endl;
Sleep(500);
cout<<"Cash withdrawal: Use this service to withdraw amount (40,000/-per day)."<<endl<<endl<<endl;
Sleep(500);
cout<<"Fast Cash : This enables to withdraw your prefered amount with a touch."<<endl<<endl<<endl;
Sleep(500);
cout<<"Pin Change : Use this service to change your ATM password"<<endl<<endl<<endl;
Sleep(500);
cout<<"Balance Enquiry : TO check the current balance in your account."<<endl<<endl<<endl;
Sleep(500);
cout<<"Ministatement : Keep track of the transcation in your account."<<endl<<endl<<endl;
Sleep(500);
cout<<"Fund transfer : Transfer amount instantly to your loved ones."<<endl<<endl<<endl;
Sleep(500);
cout<<"For more information,contact:"<<endl<<endl<<endl;
Sleep(500);
cout<<"Call our 24x7 helpline through toll free 1800 100 2400."<<endl<<endl<<endl;
// Sleep(15000);
char vapis;
if(kbhit){
	vapis=getch();
	if((int)vapis==13||vapis==' '){
		menu();
	}
	
}
// menu();


}

void machine::update_file(int total){
ofstream likh_bhai("userdetails.txt",ios::app);
likh_bhai<<total+1<<" ";
likh_bhai<<user[total].name<<" ";
likh_bhai<<user[total].fathers_name<<" ";
likh_bhai<<user[total].ph_no<<" ";
likh_bhai<<user[total].dob<<" ";
likh_bhai<<user[total].acc_type<<" ";
likh_bhai<<user[total].city<<" ";
likh_bhai<<user[total].pincode<<" ";
likh_bhai<<user[total].email<<" ";
likh_bhai<<user[total].amount<<" ";
likh_bhai<<user[total].password<<" "<<endl;

likh_bhai.close();

}
void machine::Create(){
// frame();
system("cls");
gotoxy(54,1);
cout<<"NEW ACCOUNT REQUEST"<<endl;
gotoxy(52,3);
ifstream total_ki_value;
total_ki_value.open("total.txt");
total_ki_value>>total;
total_ki_value.close();
cout<<"Application Number : "<<total+1<<endl<<endl<<endl;
// total++;
cout<<"Enter Full Name: ";
getline(cin,user[total].name);
cout<<endl<<endl;
// getch();
cout<<"Father/Guardian: ";
getline(cin,user[total].fathers_name);
cout<<endl<<endl;
cout<<"Phone number: ";
getline(cin,user[total].ph_no);
cout<<endl<<endl;
cout<<"Date of Birth (dd/mm/yyyy): ";
cin>>user[total].dob;
cout<<endl<<endl;
cout<<"Account Type (S/C): ";
cin>>user[total].acc_type;
cout<<endl<<endl;
cout<<"City: ";
cin>>user[total].city;
cout<<endl<<endl;
cout<<"Pincode: ";
cin>>user[total].pincode;
cout<<endl<<endl;
cout<<"Email Id: ";
cin>>user[total].email;
cout<<endl<<endl;
cout<<"Enter initial amount( >=500): ";
cin>>user[total].amount;
cout<<endl<<endl;
cout<<"Password: ";
cin>>user[total].password;
cout<<endl<<endl;
fflush(stdin);
// gotoxy(20,18);
cout<<"Submit";
// total++;

char vapis;
if(kbhit){
	vapis=getch();
	if((int)vapis==13||vapis==' '){
		// load();
		// menu();
		update_file(total);
		Created_sucessfully();
	}
	
}




}


void machine::Created_sucessfully(){
system("cls");
frame();
gotoxy(53,5);
cout<<"YOUR ACCOUNT HAS SUCCESSFULLY CREATED";
gotoxy(58,13);
cout<<"ACCOUNT NUMER :"<<user[total].ph_no;
gotoxy(60,18);
cout<<"ATM PIN :"<<user[total].password;
// total++;
ofstream total_ki_value_change_kar_bhai;
total_ki_value_change_kar_bhai.open("total.txt");
total_ki_value_change_kar_bhai<<(++total);
total_ki_value_change_kar_bhai.close();
gotoxy(4,28);
cout<<"NOTE : THESE ARE THE ACCOUNT CREDENTIALS FOR USING ATM SERVICES";
gotoxy(32,32);
cout<<"MAIN MENU : PRESS ENTER";
char vapis;
if(kbhit){
	vapis=getch();
	if((int)vapis==13||vapis==' '){
		load();
		menu();
	}
	
}

}








void machine::Proceed(){
// frame();
system("cls");
string acc_key;
string pass_key;
gotoxy(45,15);
cout<<"ENTER YOUR ACCOUNT NUMBER : ";
gotoxy(75,15);
cin>>acc_key;
system("cls");
frame();
gotoxy(45,3);
cout<<"PLEASE ENTER YOUR PIN"<<endl<<endl<<endl<<endl<<endl<<endl;
// gotoxy(45,5);
cout<<"YOUR PIN IS CONFIDENTIAL"<<endl;
cout<<"NOBODY SHOULD SEE THE PIN"<<endl;
cout<<"WHILE YOU ARE ENTERING IT."<<endl;
cout<<"MAKE YOUR PIN MORE SECURE BY CHANGING IT FREQUENTLY."<<endl;
gotoxy(45,15);
cin>>pass_key;
int flag=false;
for(int i=0;i<=100;i++){
	if(pass_key==user[i].password && acc_key==user[i].ph_no){
		flag=true;
		gotoxy(2,5);
		cout<<"WELCOME :";
		cout<<user[i].name;
		Sleep(1000);
		transactions(i);
		break;
	}
}
if(flag==false){
        gotoxy(2,5);
		cout<<"invalid key !";
		Sleep(2000);
		menu();
	
}
		
}

















void machine::invald(){
load();
frame();
gotoxy(50,15);
cout<<"invalid key";
Sleep(5000);
menu();



}

void machine::exit(){
load();	
system("cls");	
gotoxy(50,15);
cout<<"THANKYOU FOR USING OUR SERVICES!! HAVE A GREAT DAY AHEAD";
Sleep(3000);
system("cls");
system("exit");



}

void machine::backup(){
ifstream kha_tak_bhai("total.txt");
int range;
kha_tak_bhai>>range;
ifstream get("userdetails.txt");
for(int i=0;i<range;i++){
int j;
get>>j;
j-=1;
get>>user[j].name;	
get>>user[j].fathers_name;	
get>>user[j].ph_no;	
get>>user[j].dob;	
get>>user[j].acc_type;	
get>>user[j].city;	
get>>user[j].pincode;	
get>>user[j].email;	
get>>user[j].amount;	
get>>user[j].password;	
}

}


void machine::transactions(int a){
system("cls");
frame();
gotoxy(47,4);
cout<<"Select your transaction";
gotoxy(0,7);
cout<<"0 : CASH DEPOSIT";
gotoxy(100,7);
cout<<"5 : CASH WITHDRAWAL";
gotoxy(0,12);
cout<<"1 : FUND TRANSFER";
gotoxy(100,12);
cout<<"6 : BALANCE ENQUIRY";
gotoxy(0,17);
cout<<"2 : PIN CHANGE";
gotoxy(100,17);
cout<<"7 : MINI STATEMENT";
gotoxy(0,22);
cout<<"3 : OTHER SERVICES";
gotoxy(100,22);
cout<<"8 : BACK";
gotoxy(0,27);
cout<<"4 : FAST CASH";
gotoxy(100,27);
cout<<"9 : EXIT";
gotoxy(50,28);
int n;
if(kbhit){
switch(getch()){
case '0':
load();
cashdeposit(a);
break;
case '1':
load();
fund_transfer(a);
break;
case '2':
load();
pin_change(a);
break;
case '3':
load();
other_Services(a);
break;
case '4':
load();
fast_cash(a);
break;
case '5':
load();
cash_withdrawal(a);
break;
case '6':
load();
balance_enquiry(a);
break;
case '7':
load();
mini_statement(a);
break;
case '8':
load();
menu();
break;
case '9':
exit();
break;
default:
load();
// Sleep(1000);
transactions(a);
}
}

}



void machine :: mini_statement(int a){
system("cls");
cout<<"coming soon"<<endl;
}





void machine::other_Services(int a){
// load();
system("cls");
// frame();
gotoxy(50,3);
cout<<"POINTS TO NOTE"<<endl<<endl<<endl;
Sleep(500);
cout<<"ENSURE THAT YOU CHANGE THE PIN NUMBER AFTER FIRST USING YOUR CARD ALSO FREQUENTLY CHANGE THE PIN PASSWORD"<<endl<<endl<<endl;
Sleep(1500);
cout<<"DO NOT USE THE ATM MACHINE WHEN STRANGERS ARE INSIDE THE ATM COUNTER."<<endl<<endl<<endl;
Sleep(1500);
cout<<"DONOT SEE THE ASSISTANCE OF STRANGERS WHILE OPERATING THE ATM MACHINE."<<endl<<endl<<endl;
Sleep(1500);
cout<<"SHOULD YOU NOTICE ANYTHING STRANGE OR SUSPICIOUS AT THE ATM COUNTER PLEASE REFRAIN FROM USING THE SAME"<<endl<<endl<<endl;
Sleep(1500);
cout<<"ENSURE THAT YOU CHECK YOUR ACCOUNT STATEMENT FROM TIME TO TIME."<<endl<<endl<<endl;
Sleep(1500);
cout<<"IN CASE YOU LOSE YOUR ATM CARD CALL 100-425-3800 TO BLOCK YOUR CARD AND THIS AVOID MISUSE OF THE CARD."<<endl<<endl<<endl;
Sleep(1500);
cout<<"DONOT DISCLOSE YOUR PIN NUMBER TO OTHERS IBO/RBI OR ANY OTHER GOVERNMENT ,BANKING ISNTITUTIONS WILL NEVER REQUIRE YOU TO DISCLOSE YOUR PIN NUMBER"<<endl<<endl<<endl;
Sleep(5000);
transactions(a);
// menu();
}








void machine::fast_cash(int a){
system("cls");
gotoxy(47,4);
cout<<"Select your transaction";
gotoxy(0,10);
cout<<"100";
gotoxy(100,10);
cout<<"200";
gotoxy(0,16);
cout<<"500";
gotoxy(100,16);
cout<<"1000";
gotoxy(0,23);
cout<<"2000";
gotoxy(100,23);
cout<<"5000";
int value;
gotoxy(50,28);
cin>>value;
if(user[a].amount<value){
	system("cls");
	gotoxy(50,15);
	cout<<"INSUFFICENT BALANCE";
	Sleep(3000);
	transactions(a);
}
user[a].amount-=value; 
system("cls");
gotoxy(40,15);
cout<<"FINAL BALANCE : "<<user[a].amount;
Sleep(3000);
gotoxy(40,15);
cout<<"YOU CAN COLLECT YOUR MONEY !! HAVE A GOOD DAY";
Sleep(2000);
rewrite();
exit();


}










void machine::cashdeposit(int a){
// system("cls");
// load();
frame();
gotoxy(55,15);
int add;
cout<<"PLEASE ENTER AMOUNT:";
cin>>add;
user[a].amount+=add; 
system("cls");
frame();
gotoxy(40,15);
cout<<"AMOUNT DEPOSITED : "<<add;
cout<<"    FINAL BALANCE : "<<user[a].amount;
Sleep(3000);
frame();
gotoxy(50,15);
cout<<"TRANSACTION COMPLETED SUCCESSFULLY";
Sleep(2000);
rewrite();
menu();

// cout<<"coming soon"<<endl;
}


void machine ::rewrite(){
int index;
ifstream total_ki_value("total.txt");
total_ki_value>>index;
ofstream likhooo;
likhooo.open("userdetails.txt");
	likhooo<<"1"<<" ";
	likhooo<<user[0].name<<" ";
    likhooo<<user[0].fathers_name<<" ";	
    likhooo<<user[0].ph_no<<" ";	
    likhooo<<user[0].dob<<" ";	
    likhooo<<user[0].acc_type<<" ";	
    likhooo<<user[0].city<<" ";	
    likhooo<<user[0].pincode<<" ";	
    likhooo<<user[0].email<<" ";	
    likhooo<<user[0].amount<<" ";	
    likhooo<<user[0].password<<endl;	

for(int i=1;i<index;i++){
	update_file(i);
}
// return;
backup();

}









void machine:: fund_transfer(int a){
system("cls");
gotoxy(50,15);
string send;
cout<<"ENTER THE RECIEPIENT BANK NUMBER : ";
cin>>send;
int index;
ifstream total_ki_value("total.txt");
total_ki_value>>index;
for(int i=0;i<index;i++){
	if(user[i].ph_no==send){
	system("cls");
    gotoxy(55,15);
    int add;
    cout<<"PLEASE ENTER AMOUNT:";
    cin>>add;
	if(user[a].amount<add){
	system("cls");
	gotoxy(50,15);
	cout<<"INSUFFICENT BALANCE";
	Sleep(3000);
	transactions(a);
}

    user[i].amount+=add; 
    system("cls");
    frame();
    gotoxy(40,15);
	user[a].amount-=add;
    // cout<<"FINAL BALANCE : "<<user[a].amount;
	cout<<"FINAL BALANCE : "<<user[a].amount;
    Sleep(3000);
    frame();
    gotoxy(50,15);
    cout<<"TRANSACTION COMPLETED SUCCESSFULLY";
    Sleep(2000);
    rewrite();
    menu();

  
	}
}






}




void machine:: balance_enquiry(int a){
system("cls");
gotoxy(50,15);
cout<<"YOUR CURRENT BALANCE IS : "<<user[a].amount;
Sleep(3000);
load();
menu();
// cout<<"coming soon"<<endl;
}





void machine:: pin_change(int a){
// system("cls");
// cout<<"coming soon"<<endl;
frame();
gotoxy(30,28);
cout<<"MAKE SURE YOU ARE ALONE AND NOBODY CAN SEE YOUR NEW PIN";
gotoxy(50,15);
string new_pass;
string old;
cout<<"ENTER YOUR NEW PIN : ";
cin>>new_pass;
user[a].password=new_pass;
// load();
system("cls");
gotoxy(50,15);
cout<<"PIN CHANGED SUCCESSFULLY";
Sleep(3000);
rewrite();
menu();

}







void machine:: cash_withdrawal(int a){
frame();
gotoxy(55,15);
int add;
cout<<"PLEASE ENTER AMOUNT:";
cin>>add;
if(user[a].amount<add){
	system("cls");
	gotoxy(50,15);
	cout<<"INSUFFICENT BALANCE";
	Sleep(3000);
	transactions(a);
}
user[a].amount-=add; 
system("cls");
frame();
gotoxy(40,15);
// cout<<"AMOUNT DEPOSITED : "<<add;
cout<<" FINAL BALANCE : "<<user[a].amount;
Sleep(3000);
frame();
gotoxy(40,15);
cout<<"YOU CAN COLLECT YOUR MONEY !! HAVE A GOOD DAY";
Sleep(2000);
rewrite();
menu();


}










int main() {
// system("color F0");
scroll_note();
machine m;
m.backup();	
m.menu();
// m.fund_transfer(0);



return 0;
}