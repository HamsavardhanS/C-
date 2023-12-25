#include<iostream>
using namespace std;
class biodata{
    public:
    string name,qly,dob,h;
    int a;
    void detail(){
    
    cout<<"Enter your Name : ";
    cin>>name;
    cout<<"Enter your Age : ";
    cin>>a;
    cout<<"Enter your Height : ";
    cin>>h;
    cout<<"Enter your Qualification : ";
    cin>>qly;
    cout<<"Enter you DOB : ";
    cin>>dob;}
};
class egle : public biodata
{
  public:
  int r;
  void eligiblity(){
  
  if(a>=18)
  {
      cout<<"He /She is eligible for Interview Round..!"<<endl;
      r=1;
  }
  else
  {
      cout<<"He /She is not eligible for Interview Round..!"<<endl;
      r=0;
  }
  }
};
class qns : public egle
{
    public:
    int count=0;
    void qa(){
    if(r==1)
   {
   cout<<"You are Eligible for Q/A session...!"<<endl;
   cout<<"Answer the Questions by selecting options [1 / 2 ]"<<endl;
   cout<<"Q1 : What is the capital of India ? [ Delhi / Mumbai ]"<<endl;
   int q1;
   cin>>q1;
   if(q1==1)
   {
       cout<<"Delhi"<<endl;
       count+=1;
   }
   else 
   {
        cout<<"Mumbai"<<endl;
   }
   cout<<"Q2 : What is original color of Sun ? [ Red / White ]"<<endl;
   int q2;
   cin>>q2;
   if(q2==1)
   {
       cout<<"Red"<<endl;
   }
   else 
   {
        cout<<"white"<<endl;
        count+=1;
   }
   cout <<"Q3 : What is the formula defined by Albert Einsten ? [ E=mc^2 / F=ma ]"<<endl;
   int q3;
   cin>>q3;
   if(q3==1)
   {
       cout<<"E=mc^2"<<endl;
       count+=1;
   }
   else
   {
       cout<<"F=ma";
   }
   cout<<"Q4 : Which year INDIA get Independent  ? [1950 / 1947]"<<endl;
   int q4;
   cin>>q4;
   if(q4==2)
   {
       cout<<"1947"<<endl;
       count+=1;
   }
   else
   {
       cout<<"1950"<<endl;
   }
   cout<<"Q5 : Which Networking syster is prefered for Future  ? [ A.I / Neural ]"<<endl;
   int q5;
   cin>>q5;
   if(q5==2)
   {
       cout<<"Neural"<<endl;
       count+=1;
   }
   else
   {
       cout<<"A.I"<<endl;
   }
   }
   else
   {
       cout<<"Sorry..! You are not Eligible for Q/A session . Keep trying ..!"<<endl;
   }
   cout<<"Your Score out of 5 is :"<<count<<endl;
   }
};
class result : public qns
{
  public:
  void results(){
  if(count>4)
  {
      cout<<"Congrats..!,You are in the First place ..";
  }
  else if(count>=3)
  {
      cout<<"Well done..!,You are in Second Place..";
  }
  else if(count>1)
  {
      cout<<"Keep Trying...";
  }
  else if(count==1)
  {
      cout<<"Just Passs...";
  }
  else
  {
      cout<<"Sorry you are Disqualified...";
  }
  }
};
int main()
{
    result R;
    R.detail();
    R.eligiblity();
    R.qa();
    R.results();
    return 0;
    
}
