#include <iostream>
#include <stdlib.h>
#include <assert.h>

//######################################################
// malloc()     calloc()     free()      realloc()
//######################################################



void memalloca(){
    
    // using the malloc().
    int n = 5; //Block of mem size
    int *ptr = (int*)malloc(n*sizeof(int));
    assert(ptr!=NULL);
    
    // Garbage Values
    for(int* i = ptr;i<ptr+n;i++){
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;
    for(int* i = ptr;i<ptr+n;i++){
        std::cin>>*i;
    }
    // Correct Values
    for(int* i = ptr;i<ptr+n;i++){
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;
    
    
    // using calloc().
    int *ptr2 = (int*)calloc(n,sizeof(int));
    assert(ptr2!=NULL);
    
    // Initialized with 0s.
    for(int* i = ptr2;i<ptr2+n;i++){
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;


    // Using free().
    free(ptr);
    free(ptr2);
    std::cout<<ptr[0]<<std::endl; // Grabage Values
    
    
    
    // Using realloc(). 
    ptr = (int*)calloc(n,sizeof(int));
    int m = n+10; // New size
    for(int i=0;i<m;i++){ // The next 10 values will be grabage..
        std::cout<<ptr[i]<<" ";
    }
    std::cout<<std::endl;
    ptr = (int*)realloc(ptr,m*sizeof(int));
    for(int i=n;i<m;i++){
        ptr[i] = i+1;
    }
    for(int i=0;i<m;i++){
        std::cout<<ptr[i]<<" ";
    }
    std::cout<<std::endl;
    
}


int main(){

    memalloca();
    return 0;    
}