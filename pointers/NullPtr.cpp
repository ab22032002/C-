    #include <iostream>

    using namespace std;
    int main () {
            int  *ptr = NULL;
            cout << "The value of ptr is " << ptr ;
        
        //    if(ptr)     // succeeds if p is not null
        //    if(!ptr)    // succeeds if p is null
        // typcasting the null pointers:
        ptr = (int*)500;
    return 0;
    }