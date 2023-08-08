#include <iostream>
using namespace std;
class shopItem {
    int id;
    float price;
    public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void getData(void){
        cout<<"code of this item is "<<id <<endl;
        cout<<"price of this item is "<<price<<endl;
    }
};
int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];

    /*  1. genral store item
        2.veggies item
        3.hardware item
    */

   shopItem *ptr = new shopItem[size];
   shopItem *ptrTemp = ptr;//address of ptr is equal to ptrtemp address thats why in 2nd for loop it storts from the adderess of ptr
   int p,i;
   float q;
   for (i = 0; i < size; i++)
   {
    cout<<"Enter Id and price of item "<<i+1<<endl;
    cin>>p>>q;
    //(*ptr).setData(p,q);
    ptr->setData(p,q);
    ptr++;
   }
   for (i = 0; i < size; i++)
   {
    cout<<"Item number :"<<i+1<<endl;
    ptrTemp->getData();
    ptrTemp++;   
   }
   
   return 0;
}