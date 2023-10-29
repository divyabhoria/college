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

