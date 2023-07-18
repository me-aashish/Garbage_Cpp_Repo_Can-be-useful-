#include<iostream>
using namespace std;

void merge(float arr[], int l, int mid, int r){

    int  n1=mid-l+1;
    int  n2=r-mid;

    float a[n1];
    float b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else {
            arr[k]=b[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }

    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;

    }
}

void mergeSort(float arr[] , int l , int r ){

    if (l<r){
        float mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr, l,mid,r);
    }
}

int main(){

    float arr[7]={0.2,5.4,5.6,3.1,2.2,2,9.8};
    cout << "\n\nElements before sorting are : ";
     for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    mergeSort(arr,0,4);
    cout << "\n\n After sorting in descending order, elements are : ";
    for(int i=6;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<endl;

    return 0;
}