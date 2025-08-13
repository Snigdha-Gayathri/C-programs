#include<bits/stdc++.h>
using namespace std;
void printPattern1(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printPattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printPattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void printPattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void printPattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printPattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void printPattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<"* ";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void printPattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0; j< 2*n-(2*i + 1);j++)
        {
            cout<<"* ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
//pattern9=pattern7+pattern8
void printPattern9(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<"* ";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0; j< 2*n-(2*i + 1);j++)
        {
            cout<<"* ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

}
void printPattern10(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<stars;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printPattern11(int n)
{
    int start=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) start=1;
        else start=0;
        for(int j =0;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void printPattern12(int n)
{
    int space=2*(n-1); //Spaces b/w the numbers
    for(int i =0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)//Numbers before space-->incrementing
        {
            cout<<j;
        }
        for(int j=i;j<=space;j++)//Spaces
        {
            cout<<" ";
        }
        for(int j=i;j>=i;j--)//Numbers after space-->decrementing
        {
            cout<<j;
        }
        cout<<endl;
        space-=2;//To decrease space by 2 for every next row

    }
}
void printPattern13(int n)
{
    int num=1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}
void printPattern14(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void printPattern15(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+(n-i-1);ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void printPattern16(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch='A'+i;
       
        for(int j=0;j<=i;j++)
        {
            
            cout<<ch<<" ";
        }
    
        cout<<endl;
    }
}
void printPattern17(int n)
{
    int i;
    int breakpoint=(2*i+1)/2;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
} 
void printPattern18(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void printPattern19(int n)
{
    int iniS=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<iniS;j++)
        {
            cout<<" ";

        }
        for(int j=1;j<n-i;j++)
        {
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
    }
    iniS=2*n-2;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<iniS;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;
    }
}
void printPattern20(int n)
{
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i>n) spaces-=2;
        else spaces+=2;
    }
}
void printPattern21(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}


int main(){
    cout<<"Enter the no:of test cases: ";
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"Enter the no:of rows: ";
        int n;
        cin>>n;
        printPattern21(n);
    }
    return 0;
}