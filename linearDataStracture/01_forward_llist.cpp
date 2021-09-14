#include<bits/stdc++.h>
using namespace std;
/* it is sequential data ( linear data stracture) stracture in stl libary in cpp.
it is impelemented by  single link list.
1. forward_list.begin();
2.forward_list.end();
3.forward_list.push_front();
4.forward_list.pop_front();
5.forward_list.assign( {val1, val2, val3, val4 val5, val6....});
6.forward_list.remove( value);
7.forward_list.remove_if(bool function);
8.forward_list.insert_after(ponter,value);
9.forward_list.emplace_front(value);
10.forward_list.erase_after(pointer);
*/
void print_forward_list( forward_list< int> list){
     forward_list< int > :: iterator it;
    for( it=list.begin(); it!=list.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}
int main(){
    forward_list< int> fli; 
    fli.assign({3,4,5,6});
    fli.push_front(1);
    print_forward_list(fli);
    fli.pop_front();
    print_forward_list(fli);
    fli.push_front(45);
    fli.push_front(55);
    fli.push_front(45);
    fli.push_front(45);
    fli.remove(45);//here remove_if(); be also work
    print_forward_list(fli);
    fli.emplace_front(100);
    fli.insert_after(fli.begin(),12);
    print_forward_list(fli);
    fli.erase_after(fli.begin());
    print_forward_list(fli);
    return 0;
}
