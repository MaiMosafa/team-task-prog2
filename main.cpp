// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 0
// Program: CS213-2018-A1-T1-P0
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    10 August 2018
// Version: 1.0
#include <iostream>
#include <iomanip>
using namespace std;
struct matrix
{
  int** data;
  int row, col;
};

void createMatrix (int row, int col, int num[], matrix& mat);

matrix operator+  (matrix mat1, matrix mat2);
matrix operator-  (matrix mat1, matrix mat2);
matrix operator*  (matrix mat1, matrix mat2);
matrix operator+  (matrix mat1, int scalar);
matrix operator-  (matrix mat1, int scalar);
matrix operator*  (matrix mat1, int scalar);


matrix operator+= (matrix& mat1, matrix mat2);
matrix operator-= (matrix& mat1, matrix mat2);
matrix operator+= (matrix& mat, int scalar);
matrix operator-= (matrix& mat, int scalar);
matrix   operator++ (matrix& mat);
matrix  operator-- (matrix& mat);
istream& operator>> (istream& is, matrix& mat);


ostream& operator<< (ostream& out, matrix mat);
bool   operator== (matrix mat1, matrix mat2);
bool   operator!= (matrix mat1, matrix mat2);
bool   isSquare   (matrix mat);
bool   isSymetric (matrix mat);
bool   isIdentity (matrix mat);
matrix transpose(matrix mat);

int main()
{
  int data1 [] = {1,2,3,4,5,6,7,8};
  int data2 [] = {13,233,3,4,5,6};
  int data3 [] = {10,100,10,100,10,100,10,100};
  int choose;

  matrix mat1, mat2, mat3,newMat , mat ;
  int row , col;
    while(1){
        cout<<endl;
  cout << "ahlan ya user ya hapipy " << endl;
  cout << "1-operator +\n2-operator -\n3-operator * \n4-operator + scalar\n5-operator - scalar\n6-operator * scalar\n7-operator +=\n8-operator -=\n9-operator += scalar\n10-operator -= scalar\n11-operator ++\n12-operator --\n13-operator ==\n14-operator !=\n15-is square\n16-is symetric\n17-is identity\n18-transpose\n";
  cout << "enter your choose: ";
  cin >> choose;

  if(choose==1){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
     matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];}
        createMatrix (row, col, data1, mat1);
    cout << "enter the num of rows of mat2:  " ;
    cin >> row;
    cout << "enter the num of col of mat2: ";
    cin >> col;
    matrix mat2;
    int m=row*col;
    int data2[m];
    for(int j=0 ; j<m ; j++){
        cin>>data2[j];}
    createMatrix (row, col, data2, mat2);
    if((mat1.row!=mat2.row) && (mat1.col!=mat2.col)){
            cout<<"Error!"<<endl;
        }
        else{
    matrix mat3;
    int data [row*col];
    createMatrix (row, col, data, mat3);
    mat3=mat1+mat2;
    cout<<endl<<"new matrix: \n"<<mat3;
    }}
if(choose==2){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
     matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];}
        createMatrix (row, col, data1, mat1);
    cout << "enter the num of rows of mat2:  " ;
    cin >> row;
    cout << "enter the num of col of mat2: ";
    cin >> col;
    matrix mat2;
    int m=row*col;
    int data2[m];
    for(int j=0 ; j<m ; j++){
        cin>>data2[j];}
        createMatrix (row, col, data2, mat2);
        if((mat1.row!=mat2.row) && (mat1.col!=mat2.col)){
            cout<<"Error!"<<endl;
        }
        else{
    matrix mat3;
    int data [row*col];
    createMatrix (row, col, data, mat3);
    mat3=mat1-mat2;
    cout << endl<<"new matrix: \n"<<mat3;
    }}
if(choose==3){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
     matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];}
        createMatrix (row, col, data1, mat1);
    cout << "enter the num of rows of mat2:  " ;
    cin >> row;
    cout << "enter the num of col of mat2: ";
    cin >> col;
    matrix mat2;
    int m=row*col;
    int data2[m];
    for(int j=0 ; j<m ; j++){
        cin>>data2[j];}
        createMatrix (row, col, data2, mat2);
if(mat1.col!=mat2.row){
    cout<<"Error!"<<endl;
}
else{
     matrix mat3;
    int data [row*col];
    createMatrix (row, col, data, mat3);
    mat3=mat1*mat2;
    cout << endl<<"new matrix: \n"<<mat3;
    }
}
if(choose==4){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
    int scalar;
    cout<<"enter the scalar value: ";
    cin>>scalar;
    matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    matrix mat2;
    int data [row*col];
    createMatrix (row, col, data, mat2);
     mat1+scalar;
     mat2=mat1;
     cout<<endl;
     cout<<"new matrix: \n"<<mat2;
    }
if(choose==5){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
    int scalar;
    cout<<"enter the scalar value: ";
    cin>>scalar;
    matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    matrix mat2;
    int data [row*col];
    createMatrix (row, col, data, mat2);
     mat1-scalar;
     mat2=mat1;
     cout<<endl;
     cout<<"new matrix: \n"<<mat2;
  }
if(choose==6){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
    int scalar;
    cout<<"enter the scalar value: ";
    cin>>scalar;
    matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    matrix mat2;
    int data [row*col];
    createMatrix (row, col, data, mat2);
     mat1*scalar;
     mat2=mat1;
     cout<<endl;
     cout<<"new matrix: \n"<<mat2;
}
if(choose==7){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
     matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];}
        createMatrix (row, col, data1, mat1);
    cout << "enter the num of rows of mat2:  " ;
    cin >> row;
    cout << "enter the num of col of mat2: ";
    cin >> col;
    matrix mat2;
    int m=row*col;
    int data2[m];
    for(int j=0 ; j<m ; j++){
        cin>>data2[j];}
        createMatrix (row, col, data2, mat2);
        if((mat1.row!=mat2.row) && (mat1.col!=mat2.col)){
            cout<<"Error!"<<endl;
        }
        else{
    matrix mat3;
    int data [row*col];
    createMatrix (row, col, data, mat3);
    mat3=mat1+mat2;
    cout << endl<<"new matrix: \n"<<mat3;
    }}
if(choose==8){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
     matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];}
        createMatrix (row, col, data1, mat1);
    cout << "enter the num of rows of mat2:  " ;
    cin >> row;
    cout << "enter the num of col of mat2: ";
    cin >> col;
    matrix mat2;
    int m=row*col;
    int data2[m];
    for(int j=0 ; j<m ; j++){
        cin>>data2[j];}
        createMatrix (row, col, data2, mat2);
        if((mat1.row!=mat2.row) && (mat1.col!=mat2.col)){
            cout<<"Error!"<<endl;
        }
        else{
    matrix mat3;
    int data [row*col];
    createMatrix (row, col, data, mat3);
    mat3=mat1-mat2;
    cout << endl<<"new matrix: \n"<<mat3;
    }}
if(choose==9){
     cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
    int scalar;
    cout<<"enter the scalar value: ";
    cin>>scalar;
    matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    matrix mat2;
    int data [row*col];
    createMatrix (row, col, data, mat2);
     mat1+scalar;
     mat2=mat1;
     cout<<"new matrix: \n"<<mat2;
    }
if(choose==10){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
    int scalar;
    cout<<"enter the scalar value: ";
    cin>>scalar;
    matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    matrix mat2;
    int data [row*col];
    createMatrix (row, col, data, mat2);
     mat1-scalar;
     mat2=mat1;
     cout<<"new matrix: \n"<<mat2;
  }
if(choose==11){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
    matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    matrix mat2;
    int data [row*col];
    createMatrix (row, col, data, mat2);
    mat2=++mat1;
    cout<<"new matrix: \n"<< mat2;
}
if(choose==12){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
    matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    matrix mat2;
    int data [row*col];
    createMatrix (row, col, data, mat2);
    mat2=--mat1;
    cout << endl<<"new matrix: \n"<<mat2;

}
if(choose==13){
     int row, col;
    cout<<"Enter the num of rows of mat1 " ;
    cin>>row;
    cout<<"Enter the num  of col of mat1 " ;
    cin>>col;
    int n =row*col;
    int data1[n] ;
    for(int i=0; i<n; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    cout<<"Enter the num of rows of mat2 " ;
    cin>>row;
    cout<<"Enter the num  of col of mat2 " ;
    cin>>col;
    int m =row*col;
    int data2[m] ;
    for(int i=0; i<m; i++){
    cin>>data2[i];}
    createMatrix (row, col, data2, mat2);
if((mat1.row!=mat2.row)&&(mat1.col!=mat2.col)){
    cout<<"error"<<endl;
    }
    else{
        cout << (mat1== mat2);
  }}
if(choose==14){
    int row, col;
    cout<<"Enter the num of rows of mat1 " ;
    cin>>row;
    cout<<"Enter the num  of col of mat1 " ;
    cin>>col;
    int n =row*col;
    int data1[n] ;
    for(int i=0; i<n; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    cout<<"Enter the num of rows of mat2 " ;
    cin>>row;
    cout<<"Enter the num  of col of mat2 " ;
    cin>>col;
    int m =row*col;
    int data2[m] ;
    for(int i=0; i<m; i++){
        cin>>data2[i];}
        createMatrix (row, col, data2, mat2);
if((mat1.row!=mat2.row)&&(mat1.col!=mat2.col)){
    cout<<"error"<<endl;
    }
    else{
        cout << (mat1!= mat2);

  }}
if(choose==15){
    cout<<isSquare(mat1);
  }
if(choose==16){
    int data1 [] = {1,2,3,4,5,6,7,8};
    matrix mat1;
    int row , col;
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
    createMatrix (row, col, data1, mat1);
    cin >> mat1 ;
    cout<<isSymetric(mat1);
}
if(choose==17){
    cout<<isIdentity(mat1);
}
if(choose==18){
    cout << "enter the num of rows of mat1:  " ;
    cin >> row;
    cout << "enter the num of col of mat1: ";
    cin >> col;
    if(row!=col){
        cout<<"Error!"<<endl;
    }
    else{
    matrix mat1;
    int n=row*col;
    int data1 [n];
    for(int i=0 ; i<n ; i++){
        cin>>data1[i];
    }
    createMatrix (row, col, data1, mat1);
    mat2=transpose(mat1);
    cout<< endl;
    cout << mat2;
}
}}}












void createMatrix (int row, int col, int num[], matrix& mat) {
  mat.row = row;
  mat.col = col;
  mat.data = new int* [row];

  for (int i = 0; i < row; i++){
    mat.data[i] = new int [col];
  }
  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
      mat.data[i][j] = num[i * col + j];
    }}
}

matrix operator+ (matrix mat1, matrix mat2){
    int n=mat1.row*mat1.col;
    int data1 [n] ;
    int m=mat2.row*mat2.col;
    int data2 [m];
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){

                        mat1.data[i][j]+=mat2.data[i][j];        }
    }

    return mat1;
}

matrix operator- (matrix mat1, matrix mat2){
    matrix mat3;
    int n=mat1.row*mat1.col;
    int data1 [n] ;
    int m=mat2.row*mat2.col;
    int data2 [m];
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){

                        mat1.data[i][j]-=mat2.data[i][j];}
    }

    return mat1;
}

matrix operator*(matrix mat1, matrix mat2)
{


    if(mat1.col==mat2.row)
    {
        int sum=0;
        matrix mat3;
        int data4 [mat1.row*mat2.col];
        createMatrix (mat1.row, mat2.col,data4, mat3);

        for (int i = 0; i < mat1.row; i++)
        {
            for (int j = 0; j < mat2.col; j++)
            {
                for (int k = 0; k < mat1.row; k++)
                {
                    sum=sum+(mat1.data[i][k]*mat2.data[k][j]);

                }
                mat3.data[i][j]=sum;
                sum=0;

            }
        }
        return mat3;
    }
    else
        cout<<" Invalid Input ";


return mat1;
}

matrix operator+ (matrix mat1, int scalar){
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){
                        mat1.data[i][j]+=scalar;

    }}
    return mat1;
}

matrix operator- (matrix mat1, int scalar){
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){

            mat1.data[i][j]-=scalar;
        }
    }
        return mat1;
}

matrix operator* (matrix mat1, int scalar){
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){

            mat1.data[i][j]*=scalar;
        }
    }
        return mat1;
}

matrix operator+= (matrix& mat1, matrix mat2){
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){
            mat1.data[i][j]+=mat2.data[i][j];        }
    }

    return mat1;
}

matrix operator-= (matrix& mat1, matrix mat2){
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){
            mat1.data[i][j]-=mat2.data[i][j];        }
    }

    return mat1;
}

matrix operator+= (matrix& mat1, int scalar){
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){

                        mat1.data[i][j]+=scalar;
        }
    }
    return mat1;
}

matrix operator-= (matrix& mat1, int scalar){
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){

            mat1.data[i][j]-=scalar;
        }
    }
        return mat1;
}

matrix operator++ (matrix& mat1){
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){
            mat1.data[i][j]+=1;
        }
    }
    return mat1;
}

matrix operator-- (matrix& mat1){
    for(int i=0 ; i<mat1.row ; i++){
        for(int j=0 ; j<mat1.col ; j++){
            mat1.data[i][j]-=1;
        }
    }
    return mat1;
}

istream& operator>> (istream& is, matrix& mat){
    for (int i = 0; i < mat.row ; i++){
        for(int j = 0 ; j < mat.col ; j++){
            is >> mat.data[i][j];
        }
    }
return is;
}

ostream& operator<< (ostream& out, matrix mat){
     for (int i = 0; i < mat.row ; i++){
         for(int j = 0 ; j < mat.col ; j++){
            out << mat.data[i][j] << " " ;}
         out << endl;}
return out;}

bool   operator== (matrix mat1, matrix mat2){
    int n=mat1.row*mat1.col;
    int data1 [n] ;
    int m=mat2.row*mat2.col;
    int data2 [m];
    for(int i=0; i<mat1.row; i++){
        for(int j=0; j<mat1.col; j++){
          if(mat1.data[i][j]!=mat2.data[i][j])
               {
               return false;

             }
             }}
            return true;

}

bool   operator!= (matrix mat1, matrix mat2){
    int n=mat1.row*mat1.col;
    int data1 [n] ;
    int m=mat2.row*mat2.col;
    int data2 [m];
    for(int i=0; i<mat1.row; i++){
        for(int j=0; j<mat1.col; j++){
          if(mat1.data[i][j]==mat2.data[i][j])
               {
               return false;

             }
             }}
            return true;

}

bool   isSquare   (matrix mat){

int data1[] ={};
matrix mat1;
int row, col;
cout<<"Enter the num of rows of mat1 " ;
cin>>row;
cout<<"Enter the num  of col of mat1 " ;
cin>>col;
createMatrix(row,col,data1,mat1);
cin>>mat1;
if (row==col){
    return true;
}
else
    return false;
}

bool   isSymetric (matrix mat){
        int test = 0 ;
        for (int i = 0; i < mat.row ; i++){
            for(int j = 0 ; j < mat.col ; j++){
                    if(i==j)continue;
                else
                    if (mat.data[i][j]!=mat.data[j][i])test+=1;
                }}
                if (test==0) return true;
                else return false;
}

bool   isIdentity (matrix mat){
int data1[] ={1,2,3,4,5,6,7,8};
matrix mat1;
int row, col;
cout<<"Enter the num of rows of mat1 " ;
cin>>row;
cout<<"Enter the num  of col of mat1 " ;
cin>>col;
createMatrix(row,col,data1,mat1);
cin>>mat1;
int testzero=0; int testone=0;
 for(int i=0; i<mat.row; i++){
        for(int j=0; j<mat.col; j++){
              if(i==j){
                if(mat.data[i][j] !=1) testone+=1;

              }
              else
                  if(mat.data[i][j] !=0) testzero+=1;

        }
    }
    if(testone==0 && testzero==0){
            return true;
    }
        else{
                return false;
        }
}



matrix transpose(matrix mat1){
    int n=mat1.row*mat1.col;
int data1 [n] ;
  matrix mat;
  createMatrix (mat1.row, mat1.col, data1, mat);
    for (int i = 0; i < mat1.row ; i++){
         for(int j = 0 ; j < mat1.col ; j++){
             mat.data[j][i]=mat1.data[i][j];
         }}
return mat;
}




