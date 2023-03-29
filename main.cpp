#include <iostream>

using namespace std;

int main()
{
    int n,z;   //z is the distance from border which is equal to the initial number entered and level it decrease in loop
    char x=' ';
    cout<<"\tWelcome"<<endl;
    cout<<"enter the number ";cin>>n;
    if(n>=1){
        for(int i=n;i>=1;i--){
    z=n-i;
    for(int h=0;h<=z;h++){
       cout<<x;
       }
   for(int j=0;j<=i;j++){
    cout<<j;
    if(j==i){
        for(int k=i;k>=1;k--)  //876543210
            cout<<k-1;
    }
   }
   cout<<endl;
}
for(int j=0;j<=n;j++){
        z=n-j;
        for(int h=0;h<=z;h++){
            cout<<x;
        }
    for(int i=0;i<=j;i++){
    cout<<i;
    if(i==j){
        for(int k=j;k>=1;k--){
            cout<<k-1;
        }
    }
}
cout<<endl;
}

    }else{
    cout<<"invalid input please enter correct number"<<endl;
    main();
    }

}
