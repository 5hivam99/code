#include<iostream>
#include<string.h>
using namespace std;
// int main(){
//     char arr[100];
//     cout<<"enter your name : ";
//     // cin >> arr;
    
//     cin.getline(arr,45);
//     cout<<"your name is "<<arr<<endl;
//     return 0;
// }

// int main(){
//     char arr[100];
//     cin>>arr[2];
//     cin>>arr[50];
//     cin>>arr;
//     cin.getline(arr,50);
//     for(int i=0;i<=50;i++){
//         cout<<arr[i]<<endl;
//     }
// }

int getlength(char name[]){
    int length=0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
// int main(){
//     char name[100];
//     cout<<"enter your name ";
//     cin.getline(name,20);
//     cout<<"number of lettors in your name is " <<getlength(name)<<endl;
//       cout<<"number of lettors in your name is "<<strlen(name);//predefined function
// }



void reversechararray(char name[]){
    int i=0;
    int n=getlength(name);
    int j=n-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
    
}
// int main(){
//     char name[100];
//     cout<<"enter your name ";
//      cin.getline(name,20);
//      cout<<"before reversing the string : " <<name<<endl;
//      reversechararray(name);
//      cout<<"after reversing the string : " <<name<<endl;
// }



void replacespace(char sentance[]){
    int n=getlength(sentance);
    for(int i=0;i<n;i++){
        if(sentance[i]==' '){
            sentance[i]='@';
        }
    }
}
// int main(){
//     char sentance[100];
//     cout<<"enter your name ";
//      cin.getline(sentance,20);
//      replacespace(sentance);
//      cout<<sentance;
// }



bool checkpalindrome(char word[]){
    int i=0;
    int n=getlength(word);
    int j=n-1;
    while(i<=j){
        if(word[i]==word[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
// int main(){
//     char word[100];
//     cout<<"enter your word ";
//      cin.getline(word,20);
//      cout<<"palindrome check : "<<checkpalindrome(word);
     
// }



void convertintouppercase(char name[]){
    int n=getlength(name);
    for(int i=0;i<n;i++){
        name[i]=name[i]-'a'+'A';
    }
}
// int main(){
//     char name[100];
//     cout<<"enter your name ";
//      cin.getline(name,20);
//      convertintouppercase(name);
//      cout<<"in upper case : " <<name<<endl;
// }



void convertintoLowercase(char name[]){
    int n=getlength(name);
    for(int i=0;i<n;i++){
        name[i]=name[i]+'a'-'A';
    }
}
// int main(){
//     char name[100];
//     cout<<"enter your name ";
//      cin.getline(name,20);
//      convertintoLowercase(name);
//      cout<<"in Lower case : " <<name<<endl;
// }




void convertanystringintouppercase(char name[]){
    int n=getlength(name);
    
    for(int i=0;i<n;i++){
        if(name[i]>='a'&&name[i]<='z'){
        name[i]=name[i]-'a'+'A';
        }
    }
}
int main(){
    char name[100];
    cout<<"enter your name ";
     cin.getline(name,20);
     convertanystringintouppercase(name);
     cout<<"in upper case : " <<name<<endl;
}