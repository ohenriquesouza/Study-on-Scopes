// dynamic and static scoping

#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 10; i++){
        
        int x = 1;
        
        cout<<x<<endl;
        
    }
    
    cout<<x<<endl;

    return 0;
}