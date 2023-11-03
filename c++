#include<iostream>
using namespace std;
int main{
  cout<<'hello'<<endl<<"world";
  return 0;
}




#include<iostream>
using namesapce std;
int main{
  int a;
  cin>>a;
  cout<<"value of a : "<<a<<endl;
  return 0;
}






#include<iostream>
using namespace std;
int main{
  int a,b;
  cin>>a;
  cout<<"value of a :"<<a<<endl;
  cin>>b;
  cout<<"value of b :"<<b<<endl;
  int c;
  c=b;
  a=b;
  a=c;
  cout<<"new value of a :"<<a<<endl;
  cout<<"new value of b :"<<b<<endl;
  return 0;
}






#include<iostream>
using namespace std;
int main{
  int a=6;
  int b=3;
  cout<<a+b<<endl;
  cout<<a-b<<endl;
  cout<<a*b<<endl;
  cout<<a/b<<endl;  
  cout<<a%b<<endl;
  return 0;
}



#include<iostream>
using namespace std;
int main{
  int n;
  cin<<n;
  if (n%2==0){
       cout<<"even"<<endl;}
  else{
       cout<<"odd"<<endl;
  }
return o;
]




#include<iostream>
using namespace std;
int main{
  int age;
  cin<<age;
  if (age<12){
       cout<<"child"<<endl;}
  else if (age>18){
       cout<<"adult"<<endl;}
  else{
       cout<<"teenager"<<endl;
  }
return o;
}





#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter day number"<<endl;
    cin>>day;
    switch(day){
        case 1:
        cout<<"monday"<<endl;
        break;
        case 2:
        cout<<"tuesday"<<endl;
        break;
        case 3:
        cout<<"wednesday"<<endl;
        break;
        case 4:
        cout<<"thursday"<<endl;
        break;
        case 5:
        cout<<"friday"<<endl;
        break;
        case 6:
        cout<<"saturday"<<endl;
        break;
        case 7:
        cout<<"sunday"<<endl;
        break;
        default:
        cout<<"enter from 1-7"<<endl;
        break;
    }
}




#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}




#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}




#include<iostream>
using namespace std;
int main(){
  int i=5;
  while(true){
      if(i%7==0){
          cout<<i<<endl;
          break;
      }i+=5;
      
  }return 0;
}




#include<iostream>
using namespace std;
int main(){
  for(int i=5;;i+=5){
      if(i%7==0){
          cout<<i<<endl;
          break;}}
          
}



#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int sum=0;
  do{
      int num;
      cin>>num;
      sum+=num;
      n--;
  }while(n>0);
  cout<<sum<<endl;
  return 0;
          
}




#include<iostream>
using namespace std;
int add(int num1,int num2){
    
    int sum=num1+num2;
    return sum;
}
int main(){
    int a=5;
    int b=6;
    cout<<add(a,b)<<endl;
    return 0;
}





#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;
    return 0;
}








#include <iostream>
using namespace std;
void geeks(){
    int var=10;
    int* ptr;
    ptr=&var;
    cout<<"value of ptr"<<ptr<<"\n";
    cout<<"value of var"<<var<<"\n";
    cout<<"value of *ptr"<<*ptr<<"\n";
    
}
int main() {
    geeks();

    return 0;
}









#include <iostream>
using namespace std;

int main() {
    int arr[4]={1,2,3,4};
    int arr1[4];
    arr1[0]=1;
    arr1[1]=2;
    arr1[2]=3;
    arr1[3]=4;
    cout<<arr1[3]<<endl;
    for(int i;i<4;i++){
        cout<<"the value of marks are  "<<arr[i]<<endl;
    }
    return 0;
}











#include<iostream> 
using namespace std; 
int main(){ 
 
int m; 
int n; 
cout << "enter the  2D size of array\n"<< endl; 
cin>>m>>n;
int arr[m][n];
cout << "enter the elements\n"<< endl; 
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
cout << "value of array is \n"<< endl; 
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j];
    }
}
int x;
cout << "enter the value who's address you want to find \n"<< endl; 
cin>>x;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==x){
            cout<<"the value present at address"<<i<<j<<"\n"<<endl;
        }
    }
}
return 0; 
} 















#include <iostream>
using namespace std;

int main() {
    int m;
    int sum_left = 0;
    int sum_right_column = 0;

    cout << "Enter the 2D size of the array: " << endl;
    cin >> m;
    int arr[m][m];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The values inside the array are: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << " " << endl;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                sum_left += arr[i][j];
            }
            if (j == m - 1) {
                sum_right_column += arr[i][j];
            }
        }
    }

    cout << "Sum of Left Diagonal: " << sum_left << endl;
    cout << "Sum of Rightmost Column: " << sum_right_column << endl;

    return 0;
}



















#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}










#include <iostream>
#include <string>
using namespace std;
class myclass{
    public:
    int mynum;
    string mystring;
};
int main(){
    myclass myobj;
    myobj.mynum=100;
    myobj.mystring="some text";
    cout << myobj.mynum << "\n"; 
    cout << myobj.mystring; 
    return 0;
}









