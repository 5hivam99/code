#include<iostream>
using namespace std;
 int main()
{
    //scoring program
    // int score;
    // cout<<"enter score : ";
    // cin>>score;
    // if(score<300){
    //     cout<<"india wins"<<endl;
    // }
    // else
    // cout<<"pakistan wins";

    



    //voting program
    // int age;
    // cout<<"enter age : ";
    // cin>>age;
    // if(age>=18){
    //     cout<<"i can vote!"<<endl;
    // }
    // else
    // cout<<"i can not vote!";





    // //deciding grade program
    // int marks;
    // cout<<"enter obtained marks : ";
    // cin>> marks;
    
    // if(marks>=90){
    //     cout<<"grade A";
    // }
    // else if(marks>=80){
    //     cout<<"grade B";
    // }
    // else if(marks>=60){
    //     cout<<"grade C";
    // }
    // else if(marks>=40){
    //     cout<<"grade D";
    // }
    // else 
    // cout<<"grade F";






    //brother coding
    // int bronum;
    // cout<<"enter number of brother : ";
    // cin>> bronum;
    // if(bronum==0){
    //     cout<<"baat ban jayegi";
    // }
    // else{
    //     cout<<"baat nhi banegi";
    // }






    //looping questions (printing n number from 1)
    // int n;
    // cout<<"enter at which number you want to print : ";
    // cin>>n;
    //  for(int i=1 ;i<=n; i++)
    //  {
    //     cout<<i*2<<endl;
    //  }





    // int n;
    // if(cin>>n)
    // cout<<"love babbar";
   




    //Patterns:



    // for(int i=1; i<=4;i++){
    //     for(int j=1; j<=5; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
   // }



    //taking input form user to print a ractangular pattern with help of star

// int row,col;
// cout<<"enter number of rows : ";
// cin>> row;
// cout<<"enter number of columns : ";
// cin>> col;

// for(int i=1; i<=row;i++){
//         for(int j=1; j<=col; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//    }


 
    //printing hallow square pattern by taking input form user

int row,col;
cout<<"enter number of rows : ";
cin>> row;
// cout<<"enter number of columns : ";
// cin>> col;


// //1st method
// // for(int i=1; i<=row;i++){
// //         for(int j=1;j<=col;j++){
// //             if(i==1 || i==row || j==1 || j==col)
// //                 cout<<"* ";
            
// //             else
// //                 cout<<"  ";
            
// //         }
// //         cout<<endl;
// //    }
   


// //2nd method

// for(int i=1; i<=row;i++){{
//     if(i==1||i==row){
//         for(int j=1;j<=col;j++){
//             cout<<"* ";
//         }}
//         else{
//             cout<<"* ";
//             for(int k=1;k<=(col-2);k++){
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//     }
//     cout<<endl;
// }
    
// printing pattern like 
// *
// * * 
// * * * 
// * * * * 

// for(int i=1;i<=row;i++){
//     for(int j=1;j<=i;j++){
       
//             cout<<"* ";
//     }
//     cout<< endl;
// }

// printing pattern like
// * * * * 
// * * *
// * *
// *
//  1st method

// for(int i=1;i<=row;i++){
//     for(int j=1;j<=row+1-i;j++){
       
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//  2nd method

//  for(int i=0;i<row;i++){
//     for(int j=0;j<row-i;j++){
       
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// printing pattern like
// 1 
// 1 2
// 1 2 3
// 1 2 3 4

// for(int i=1;i<=row;i++){
//         for(int j=1;j<=i;j++){
            
//                 cout<<j;
//                 cout<<" ";
//         }
//         cout<< endl;
//     }


// printing pattern like
// 1 
// 2 2
// 3 3 3
// 4 4 4 4

// for(int i=1;i<=row;i++){
//     for(int j=1;j<=i;j++){
        
//             cout<<i;
//             cout<<" ";
//     }
//     cout<< endl;
// }

// printing pattern like
// 1 2 3 4 
// 1 2 3
// 1 2
// 1

// for(int i=1;i<=row;i++){
//         for(int j=1;j<=row+1-i;j++){
           
//             cout<<j;
//             cout<<" ";
//         }
//         cout<<endl;
//     }


// printing pattern like
// enter number of rows : 5
//         *
//       *   *       
//     *   *   *     
//   *   *   *   *   
// *   *   *   *   * 

// for(int i=1;i<=row;i++){
//     int k=1;
//     for(int j=1;j<=2*row-1;j++){
//         if(j>=row+1-i && j<=row-1+i && k){
//             cout<<"* ";
//             k=0;
//         }
//         else{
//             cout<<"  ";
//             k=1;
//         }
//     }
//     cout<<endl;
// }


// printing pattern like
// enter number of rows : 5
// *   *   *   *   * 
//   *   *   *   *
//     *   *   *
//       *   *
//         *

//1st method: 

// for(int i=1;i<=row;i++){
//     int k=1;
//     for(int j=1;j<=2*row-1;j++){
//         if(j>=i && j<=2*row-i && k){
//             cout<<"* ";
//             k=0;
//         }
//         else{
//             cout<<"  ";
//             k=1;
//         }
//     }
//     cout<<endl;
// }

// 2nd method

// for(int i=1;i<=row;i++){
//     for(int j=1;j<=i-1;j++){
//         cout<<" ";
//     }
//     for(int k=1;k<=row+1-i;k++){
//             cout<<"* ";
//         }
//     cout<<endl;
// }


//printing full pyramid
// enter number of rows : 5
//         *
//       *   *       
//     *   *   *     
//   *   *   *   *   
// *   *   *   *   * 


//method 1: 

// for(int i=1;i<=row;i++){
//     int k=1;
//     for(int j=1;j<=2*row-1;j++){
//         if(j>=row+1-i&&j<=row-1+i&&k){
//             cout<<"* ";
//             k=0;
//         }
//         else{
//             cout<<"  ";
//             k=1;
//         }
//     }
//     cout<<endl;
// }

//method 2:

// for(int i=1;i<=row;i++){
//     for(int j=1;j<=row-i;j++){
//         cout<<" ";
//     }
//     for(int k=1;k<=i;k++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }


// solid diamond type1:
// enter number of rows : 5
//   *  
//  ***
// *****
//  ***
//   *

// int k=0;
// int n=(row+1)/2;
// for(int i=1;i<=row;i++){
//     i<=n?k++:k--;
//     for(int j=1;j<=row;j++){
//         if(j>=n+1-k && j<=n-1+k){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<< endl;
// }


// for(int i=1;i<=row;i++){
//     int k=1;
//     for(int j=1;j<=2*row-1;j++){
//         if(j>=row+1-i&&j<=row-1+i&&k){
//             cout<<"* ";
//             k=0;
//         }
//         else{
//             cout<<"  ";
//             k=1;
//         }
//     }
//     cout<<endl;
// }
// for(int i=1;i<=row;i++){
//     int k=1;
//     for(int j=1;j<=2*row-1;j++){
//         if(j>=i && j<=2*row-i && k){
//             cout<<"* ";
//             k=0;
//         }
//         else{
//             cout<<"  ";
//             k=1;
//         }
//     }
//     cout<<endl;
// }

//nahi bna

// //upper half hallow diamond
// for(int i=1;i<=row/2+1;i++){
//     for(int j=1;j<=row;j++){
//         if(j==row/2+2-i){
//             cout<<"*";
//             if(i>=2){
//                 for(int k=3;k<=2*i-1;k++){
//                     cout<<" ";
//                 }
//                 cout<<"*";
//             }
//         }
//         else{
//             cout<<" ";
//         }
       
//     }
//     cout<<endl;
// }
// //lower half diamond

// for(int m=1;m<=row/2;m++){
//     //for spaces
//     for(int j=1;j<=m;j++){
//         cout<<" ";
//     }
//     cout<<"*";
//     for(int j=1;j<=m+;j++){
//         for(int k=row/2;k>=1;k=k-2){
//             cout<<" ";
//         }
//         cout<<"*";
//     }
//     cout<<endl;
// }

//hallow diamond
// enter number of rows : 4
//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * *
//    *

//  for(int i=0;i<row;i++){
//     //spaces
//     for(int j=0;j<row-i-1;j++){
//         cout<<" ";
//     }

//     //stars
//     for(int j=0;j<2*i+1;j++){
//         //if first or last character
//         if(j==0||j==2*i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl; 
//  }

// //lower part
//     for(int i=0;i<row;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
    
//         //star
//         for(int j=0;j<2*row-2*i-1;j++){
//             //if first or lasdt character
//             if(j==0||j==2*row-2*i-2){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }


//flipped solid diamond
// enter number of rows : 4
// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****
//upper part
// for(int i=0;i<row;i++){
//     //half pyramid
//     for(int j=0;j<row-i;j++){
//         cout<<"*";
//     }
//     //space wala pyramid
//     for(int j=0;j<2*i+1;j++){
//         cout<<" ";
//     }

//     //half pyramid print
//     for(int j=0;j<row-i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// //lower part
// for(int i=0;i<row;i++){
//     //half pyramid
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     //space wal pyramid
//     for(int j=0;j<2*row-2*i-1;j++){
//         cout<<" ";
//     }
//     //half pyramid
//         for (int j=0;j<i+1;j++)
//         {
//             cout<<"*";
//         }
        
//     cout<<endl;
// }



//Fancy pattern 1:
// enter number of rows : 4
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1

//upper half
// for(int i=0;i<row;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<i+1;
//         if(/*not a last character*/ j!=i){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }
// //lower half
// for(int i=0;i<row;i++){
//     for(int j=0;j<row-i;j++){
//         cout<<row-i;
//         if(j!=row-i-1){
//             cout<<"*";
//         }
//     }
//     cout<<endl;
//



//reverse number pyramid
// enter number of rows : 5
// 1
// 121
// 12321
// 1234321
// 123454321
// for(int i=0;i<row;i++){
//     int j;
//       for(j=0;j<i+1;j++){
//         cout<<j+1;
//     }
//     for(j=(j-1);j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//         }
        


//Fancy pattern 2: alphabet palindrome pyramid
// enter number of rows : 4
// A
// ABA
// ABCBA
// ABCDCBA
// for(int i=0;i<row;i++){
//     int j;
//       for(j=0;j<i+1;j++){
//         int ans=j+1;
//         char ch=ans+'A'-1;
//         cout<<ch;
//     }
//     for(j=(j-1);j>=1;j--){
//         int ans=j;
//         char ch=ans+'A'-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }



// numeric full pyramid
// enter number of rows : 5
//     1
//    232
//   34543
//  4567654
// 567898765

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<row-i-1;j++){
    //         cout<<" ";
    //     }

    //        // int start=i+1;

    //     for(int j=0;j<i+1;j++){
    //         cout<<i+j+1;
    //         // cout<<start;
    //         // start++;
    //     }
    //     int start=2*i;;
    //     for(int j=0;j<i;j++){
    //             cout<<start;
    //             start--;
    //     }
    //     cout<<endl;
    // }

    
//   numeric hallow pyramid
//   enter number of rows : 6
//     1
//    1 2
//   1   3
//  1     4
// 1       5
// 1 2 3 4 5 6
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<row-i-1;j++){
    //         cout<<" ";
    //     }
    //     int start=1;
    //     for(int j=0;j<2*i+1;j++){
    //             if(i==0||i==row-1){
    //                 if(j%2==0){
    //                     cout<<start;
    //                     start++;
    //                 }
    //                 else{
    //                     cout<<" ";
    //                 }

    //             }
    //             else{
    //                     if(j==0){
    //                         cout<< "1";
    //                     }
    //                     else if(j==2*i){
    //                         cout<<i+1;
    //                     }
    //                     else{
    //                         cout<<" ";
    //                     }
    //             }
    //     }
    //     cout<<endl;
    // }


    //hallow inverted pyramid
//  enter number of rows : 4
// * * * * 
// *   *   
// * *     
// *     
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<row;j++){
    //         if(j==0||i==0||j==row-i-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //solid square pattern
//     enter number of rows : 4
// * * * * 
// * * * *
// * * * *
// * * * *

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<row;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }




    //hallow square pattern
// enter number of rows : 4
// * * * * 
// *     *
// *     *
// * * * *

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<row;j++){
    //         if(i==0||i==row-1||j==0||j==row-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // 



//hallow full pyramid
//     enter number of rows : 4
//    *
//   * *
//  *   *
// * * * *
    // for(int i=0;i<row;i++){
    //     //spaces
    //     for(int j=0;j<row-i-1;j++){
    //         cout<<" ";
    //     }
    //     //stars
    //     for(int j=0;j<2*i+1;j++){
    //         if(j==0||j==2*i){
    //         cout<<"*";
    //         }
            
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }
    // for(int j=0;j<row;j++){
    //     cout<<"* ";
    // }
    // cout<<endl;
    


    //numeric hallow pyramid
    // enter number of rows : 5
    // 1
    // 12
    // 1 3
    // 1  4
    // 12345

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<i+1;j++){
    //         if(j==0||j==i||i==row-1)
    //         cout<<j+1;
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }




// inverted numeric hallow pyramid
//     enter number of rows : 4
// 1234
// 2 4
// 34
// 4

    // for(int i=0;i<row;i++){
    //     for(int j=i+1;j<=row;j++){
    //         if(j==i+1||i==0||j==row){
    //             cout<<j;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }



//numeric panidrome equilateral pyramid
//     enter number of rows : 5
//     1
//    121
//   12321
//  1234321
// 123454321

// // method 1:

// for(int i=0;i<row;i++){
//     int k=row+i;
//     int c=1;
//     for(int j=0;j<k;j++){
//         if(j<row-i-1){
//             cout<<" ";
//         }
//         else if(j<=row-1){
//             cout<<c;
//             c++;
//         }
//         else if(j==row){
//             c=c-2;
//             cout<<c;
//             c--;
//         }
//         else{
//             cout<<c;
//             c--;
//         }
//         }
//         cout<<endl;
// }



// // method 2:

//     for(int i=0;i<row;i++){
//         //part 1
//         //spaces k liye
//         for(int j=0;j<row-i-1;j++){
//             cout<<" ";
//         }
//         //part 1 k numerical value k liye
//         for(int j=0;j<i+1;j++){
//             cout<<j+1;
//          }
//          //part 2 k numerical value k liye
//             int k=i;
//          for(int j=0;j<i;j++){
//             cout<<k;
//                          k--;                                    
//          }
//         cout<<endl;
//         }



//fancy patern 1:
// enter number of rows : 5
// **********1**********
// *********1*2*********
// ********1*2*3********
// *******1*2*3*4*******
// ******1*2*3*4*5******


    // for(int i=0;i<row;i++){
    //     //stars k liye part A
    //     for(int j=0;j<2*row-i;j++){
    //         cout<<"*";
    //     }

    //     //numerical pattern part c k liye
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1;
    //         if(i!=j){
    //             cout<<"*";
    //         }
    //     }        

    //     //stars k liye part b
    //     for(int j=0;j<2*row-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }





    //solid half diamond
    // enter number of rows : 4
    // * 
    // * *
    // * * *
    // * * * *
    // * * *
    // * *
    // *

    // for(int i=0;i<row*2-1;i++){
    //     if(i<row){
    //         for(int j=0;j<i+1;j++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         for(int j=0;j<2*row-i-1;j++){
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;

    // }



    // floyd's triangle
    // enter number of rows : 5
    // 1
    // 23
    // 456
    // 78910
    // 1112131415

// int c=1;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<c;
//             c++;
//         }
         
//     cout<<endl;
        
//     }



// Butterfly pattern
// enter number of rows : 4
// *       *
// **     **
// ***   ***
// **** ****
// **** ****
// ***   ***
// **     **
// *       *

    // for(int i=0;i<row;i++){
    //     //part 1 ka part a (stars)
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }

    //     //part 1 ka part b (spaces)
    //     for(int j=0;j<2*row-2*i-1;j++){
    //         cout<<" ";
    //     }

    //      //part 1 ka part c (stars)
    //      for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //     for(int i=0;i<row;i++){
    //       //part 2 ka part d (stars)
    //       for(int j=0;j<row-i;j++){
    //         cout<<"*";
    //     }

    //     //part 2 ka part e (spaces)
    //     for(int j=0;j<2*i+1;j++){
    //         cout<<" ";
    //     }

    //      //part 2 ka part f (stars)
    //      for(int j=0;j<row-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    // Pascal's triangle
    // enter number of rows : 7
    // 1 
    // 1 1 
    // 1 2 1 
    // 1 3 3 1 
    // 1 4 6 4 1 
    // 1 5 10 10 5 1 
    // 1 6 15 20 15 6 1 

    // for(int i=1;i<=row;i++){
    //     int c=1;
    //     for(int j=1;j<=i;j++){
    //         cout<<c<<" ";
    //         c=c*(i-j)/j;
    //     }
    //     cout<<endl;
    // }

    
}
 