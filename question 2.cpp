# include<iostream>
# include<cstring>

void bubblesort(char arr[], int size){
    for(int i = 0; i< size-1; i++){
        for (int j=0; j<size-i-1; j++){
            if (arr[j] > arr[j+1]){
                char temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
                            }
        }
    }
}
int main(){
    char input[] = "dance";
    int size= strlen(input);
    std::cout<<"original string:"<<input<<std::endl;
    bubblesort(input,size);

    std::cout<<"sorted string: "<<input<< std::endl;
    return 0 ;
}