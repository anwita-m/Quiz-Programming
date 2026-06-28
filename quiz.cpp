#include <iostream>
using namespace std;
int main(){
    int score = 0;
    char answer;
    cout<<" Welcome to Programming Quiz"<<endl;
    cout<<"Select only the option from the question:-"<<endl;
    cout<<"   "<<endl;
    cout<< "Q1.Which concept in C++ allows a function to have the same name but different parameters?"<<endl;
    cout<<"A) Function Overriding"<<endl;
    cout<<"B) Function Overloading"<<endl;
    cout<<"C) Function Binding"<<endl;
    cout<<"D) Function Inlining"<<endl;
    cout<< "Enter your answer: ";
    cin >> answer;
    if(answer =='B'|| answer =='b'){
        cout<<"Correct ✅"<<endl;
        score++;
        }
    else{
        cout<<"Wrong ❌\n  Correct answer is: B"<<endl;
        }
    cout<<" "<<endl;
    cout<<"Q2.What is the correct extension for a C++ source file?"<<endl;
    cout<<"A) .cpp"<<endl;
    cout<<"B) .c"<<endl;
    cout<<"C) .cxe"<<endl;
    cout<<"D) .cc"<<endl;
    cout<<"Enter your answer: ";
    cin>> answer;
    if(answer =='A'||answer =='a'){
        cout<<"Correct ✅"<<endl;
        score++;}
    else{
        cout<<"Wrong ❌\n  Correct answer is : A"<<endl;
        }
    cout<<" "<<endl;
    cout<<"Q3.Which Operator is used to allocate dynamic memory in C++?"<<endl;
    cout<<"A) malloc"<<endl;
    cout<<"B) allow"<<endl;
    cout<<"C) new"<<endl;
    cout<<"D) memo"<<endl;
    cout<<"Enter your answer: ";
    cin>> answer;
    if(answer =='C'||answer =='c'){
        cout<<"Correct ✅"<<endl;
        score++;}
    else{
        cout<<"Wrong ❌\n  Correct answer is: C"<<endl;
        }
    cout<<" "<<endl;
    cout<<" congrats! Quiz Completed!"<<endl;
    cout<<" Your Score :"<< score <<"/3"<<endl;
    if (score == 3){
        cout<<" Outstanding"<<endl;
        }
    else if (score ==2){
        cout<<"Good"<<endl;
        }
    else{
        cout<<"Keep practice daily!"<<endl;
        }
return 0;
}
    
