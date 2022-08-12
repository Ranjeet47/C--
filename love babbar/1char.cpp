#include<bits/stdc++.h>
using namespace std;

signed main(){
char p;
cin>>p;

if(p>='0' && p<= '9'){
    cout<<"it is a numeric \n";
}
else if(p>='A' && p<='Z'){
    cout<<"it is a uppercase letter \n";
}else if(p>='a' && p<='z'){
    cout<<"it is a lowercase letter \n";
}else
cout<<"range te pre tera bhai \n";

}

/*int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "digits";
    }
    else
    {
        cout << "try again";
    }
return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
   char ch;
   cout<<"Input the character = ";
   cin>>ch;

   if (ch>='a' && ch<= 'z'){
    cout<<"The character is lower case alphabet!" << endl;
   }
   else if (ch>='A' && ch<='Z'){
    cout<<"The character is upper case alphabet!" << endl;
   }
   else if (ch>'0' && ch<='9'){
    cout<<"The character is a number!" << endl;
   }
   return 0;
}*/