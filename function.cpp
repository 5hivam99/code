#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// function to reverse a number
    int reverse(int n){
    int rem;
    int ans=0;
    bool isnegetive=false;
    if(n<0){
        isnegetive=true;
        n=-n;
    }
    while(n>0){
         
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    return isnegetive?-ans:ans;
}



//write a function to add two numbers
// int add( int a,int b){
//     int c=a+b;
    
//     return c;
// }



//write a function to find greatest of 3 number
// int greatest(int a,int b,int c){
//     cout<<"greatest number is: ";
//     if(a>b&&a>c){
//         cout<<a;
//     }
//     else if(b>a&&b>c){
//         cout<<b;
//     }
//     else{
//         cout<<c;
//     }
//     return 0;
// }





//function for counting from 1 to n
// int counting(int a){
//     for(int i=1;i<=a;i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }




//function to find grade of astudent
// void grade(int marks){
//     // and here marks is a parameter
//     if(marks>=90){
//             cout<<"grade A";
//         }
//         else if(marks>=80){
//             cout<<"grade B";
//         }
//         else if(marks>=60){
//             cout<<"grade C";
//         }
//         else if(marks>=40){
//             cout<<"grade D";
//         }
//         else 
//         cout<<"grade F";
// }

// void findeven(int n){
//     for(int i=2;i<=n;i=i+2){
//         cout<<i<<endl;
//     }
// }

// void sumnumuptoeven(int n){
//     int c=0;
        //     for(int i=2;i<=n;i=i+2)
        //         c=c+i;                                           
//     }
//     cout<<c<<endl;
// }


//function for area of circle of radius r
// void areaofcircle(int r){
//     cout<<"area of circle of radius "<<r<<" is : "<<3.14*r*r;
// }


//function to check number is even or odd
// void evenorodd(int n){
//     if(n%2==0){
//         cout<<n<<" is an even number";
//     }
//     else{
//         cout<<n<<" is an odd number";
//     }
// }



// function to find factorial of that number
// void factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<"factorial of given number "<<n<<" is "<<fact;
// }





// function to check number is prime or not
// void checkprime(int n){
//     int c=0;
//     for(int i=1;i<n;i++){
//         if(n%i==0){
//             c++;
//         }
//     }
//     if(c>2){
//         cout<<"the given number "<<n<<" is not a prime number.";
//     }
//     else{
//         cout<<"the given number "<<n<<" is a prime number.";
//     }
// }





// bool checkprime(int n){
//    for(int i=2;i<n;i++){
//     if(n%i==0){
//         return false;
//     }
//    }
//    return true;
// }



// void setkth(int n,int k){
//     int value=1;
//     value=value<<k;
//     int ans = n|value;
//     cout<<ans;
// }



int  converttemp(float c){
float k,f;
k=273+c;
f=(1.80*c)+32;

vector<float>
}
int main()
{   
    float c;
    cout<<"enter the temperature value in celcius :";
    cin>>c;
    int ans = converttemp(c);
    cout<<ans;



    //  int n,k;
    // cout<<"enter a number you want to set kth bit : ";
    // cin>>n;
    // cout<<"value of k is : ";
    // cin>>k;
    // setkth(n,k);



    // int n;
    // cout<<"enter a number you want to reverse: ";
    // cin>>n;

    // int ans=reverse(n);
    // // int ans=0;
    // // int rem;
    // // while(n>0){
         
    // //     rem=n%10;
    // //     ans=ans*10+rem;
    // //     n=n/10;
    // // }
    // cout<<ans;






    // int n;
    // cout<<"enter the number you want to write prime numbers : ";
    // cin>> n;
    // for(int i=2;i<=n;i++){
    //     bool iisprime=checkprime(i);
    //     if(iisprime){
    //         cout<<i<<endl;
    //     }
        
    // }




    // int n;
    // cout<<"enter the number you want to check number is prime or not : ";
    // cin>> n;
    // checkprime(n);




    // int n;
    // cout<<"enter the number you want to find factorial of that number : ";
    // cin>> n;
    // factorial(n);



    // int n;
    // cout<<"enter the number you want to check number is even or odd: ";
    // cin>> n;



    // evenorodd(n);
    


    // int r;
    // cout<<"enter the radius of circle :";
    // cin>>r;
    // areaofcircle(r);


    // int n;
    // cout<<"enter the number you want to print sum of even numbers: ";
    // cin>> n;
    // sumnumuptoeven(n);


    // findeven(n);
    
    // int marks;
    // cout<<"enter marks of student: ";
    // cin>>marks;
    // grade(marks);
    // Here marks is an argument

    // int a;
    // cout<<"enter the number you want to print : ";
    // cin>>a;
    // counting(a);

    // int a,b,c;
    // cout<<"enter first numbers : ";
    // cin >> a;
    // cout<<"enter second numbers : ";
    // cin >> b;
    // cout<<"enter third numbers : ";
    // cin >> c;
    
    // greatest(a,b,c);


    // int sum=add(a,b);
    // cout<<"addiion result is: "<<sum;

    // int a=5;
    // int c=(++a)*(++a);
    // cout<<c;

    return 0;
}
 