#include<bits/stdc++.h>
using namespace std;
//list is impelmented by doublely linklist
//list is a data strcture like vector . it alow non-contiguous memory 
//allocation.datetion and insertion are quick than vector
//1.list.push_front(value);
//2.list.push_back(value);
//3.list.font( ); return the front elelment in this list of list
//4.list.back(); return the back element in this list of array
//5.list.pop_back();delete the front element 
//5. a) list.pop_front(); delete the front element
//6.list.emplace(list.begin(),value)// insert value using emplace function at front
//we also able to add this value in any where in this any position in this list 
//7.list.empty();check this list empty or not
//8.list.size(); return the size of the list.
//9.list.reverse(); reverse the array
//10.list.sort(); use to sort this list
/*noted that sort function is not work for list
it is work for conteigus linear data strcture*/
//11.list.insert(pos_it,element);//insert element inlist
//useing advance(pos_it,2) we also able to set pos of thia iterator in stl
//12.list.erase(it_first, it_second);it erase all list element in it_first and it_second ( iterator)
//13.list.clear()//it to clear all data in list
//14.list1.swap(list2) ; two list are swap to each other
// 15.list.begin()//return begin pointer
//16.list.end()//return end pointer of this list list
void list_print(list<int> list1){
    cout<<"size : "<<list1.size()<<endl;
    list< int> :: iterator it;
    for( it= list1.begin(); it!=list1.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}
bool even(const int & val){
    return( val %2==0);
}
int main(){
    list<int> list1;
    cout<<list1.empty()<<endl;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    list_print(list1);
    cout<<"front & back : "<<list1.front()<<" "<<list1.back()<<endl;
    list1.push_front(-10);
    list_print( list1);
    list1.pop_back();
    list1.pop_front();
    cout<<"list1 : ";
    list_print(list1);
    cout<<*list1.begin()<<" "<<*list1.end()<<endl;
    list_print(list1);
    list< int> list2;
    list2.push_back(10);
    list2.push_back(20);
    list2.push_back(30);
    list2.push_back(40);
    list2.push_back(50);
    list2.push_back(60);
    cout<<"list2 : ";
    list_print(list2);
    list1.swap(list2);
    cout<<"list1 : ";
    list_print(list1);
    cout<<"list2 : ";
    list_print(list2);
    cout<<"Reverse list1 : ";
    list1.reverse();
    list_print(list1);
    //why sort function is not working here i don't know
    //we need to see this
    //sort(list1.begin(),list1.end(),greater<int>());
   // list_print( list1);
   list1.erase( list1.begin());
   list_print(list1);
   list< int> :: iterator it= list1.begin();
   advance(it,3);
   list1.erase(list1.begin(), it);//it erase elements 0 1 2 . not remove the elemt of last pointer
   list_print(list1);
   list1.push_back(12);
   list1.push_front(13);
   list1.push_back(13);
   list1.push_back(13);
   list1.push_back(13);
   list1.merge(list2);//use to merge two link list
   list_print(list1);
   list1.remove(13);
   list_print(list1);
   //list1.remove_if(even); it will be same as
   list1.remove_if([&](int & value){
       return (value % 2==0);
   });
   list_print(list1);
   list<int> list3;
   list3.assign({ 14, 12 ,13, 1 ,51, 6, 14, 15, 16});
   list_print(list3);
    return 0;
}