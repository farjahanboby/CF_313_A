#include <iostream>

using namespace std;

int main()
{
   long long int a;
    string convert;
    cin>>a;
    if (a>0)
        cout<<a<<endl;
    else{
        convert = to_string(a);
        if(convert[convert.size()-2]>convert[convert.size()-1]){
            convert.erase(convert.end()-2);
            cout<<stoll(convert);
        }
        else{
            convert.erase(convert.end()-1);
            cout<<stoll(convert);
        }

    }
    return 0;
}
