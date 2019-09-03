#include<iostream>
using namespace std;


void sectionsort(int array[],int size){
    for (int i=0;i<size-1;i++){
        int minvalueIndex=i;
        for (int j=i+1;j<size;j++){
            if (array[minvalueIndex]>array[j])
            {
            minvalueIndex=j;
            }
            //swap the location 
            int temp=array[i];
            array[i]=array[minvalueIndex];
            array[minvalueIndex]=temp;

        }
    }


} 
int main(){
    int array[]={66,55,90,1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    sectionsort(array,size);
    for (int i=0;i<size;i++){

cout<<array[i]<<endl;
    }

    return 0;
}