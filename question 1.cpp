#include<iostream>
#include<vector>

int main() {
    int rows1,cols1, rows2, cols2;

    std::cout<< "enter the number of rows and columns for the first matrix:";
    std::cin>>rows1>>cols1;
    std::cout<<"enter the number of rows and columns for the second matrix:";
    std::cin>>rows2>>cols2;
    if (cols1 != rows2){
        std::cout<<"matrices are not compatible for multiplication."<<std::endl;
        return 1;

    } 
    std::vector<std::vector<int>>matrix1( rows1,std::vector<int>(cols1));
    std::vector<std::vector<int>>matrix2(rows2,std::vector<int>(cols2));
    std::vector<std::vector<int>>result(rows1,std::vector<int>(cols2));
    std::cout<<"enter elements for the first matrix:"<<std::endl;
    for (int i =0;i<rows1;++i)
    {
        for (int j=0;j<cols1;++j)
        {
            std::cin>>matrix1[i][j];
        }
    }
    std::cout<<"enter elements of the second matrix:"<<std::endl;
    for(int i =0;i<rows2;++i)
    {
        for(int j=0;j<cols2;++j ){
            std ::cin>>matrix2[i][j];
        }
    }
    for( int i = 0 ;i<rows1;++i){
        for(int j = 0;j<cols2;++j){
            result[i][j]=0;
            for(int k = 0 ; k<cols1;++k){

            result[i][j]+= matrix1[i][j]*matrix2[k][j];

        }
    }
    }

    std::cout<<"product of the matrices:"<<std::endl;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<cols2;++j)
        {
            std::cout<<result[i][j]<<" ";

        }
        std::cout<<std::endl;

    }
    return 0;
    }

