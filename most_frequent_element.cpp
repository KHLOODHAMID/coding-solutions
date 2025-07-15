#include <iostream>
using namespace std;

int main() {
 int matrix[100];
 int nowmatrix[100];
 int number, numbers,count= 0, maxCount=0, mostRepeated , mostR,index=0;
 cout << " enter number";
 cin >> number;
 for (int i = 0;i < number;i++) {

     cout << "enter numbers";
     cin >> numbers;
     matrix[i] = numbers;

 }
 nowmatrix[index++] = matrix[0];
 for (int i = 1; i < number;i++) {

     if (matrix[i] != matrix[i - 1]) {
         nowmatrix[index++] = matrix[i];
     }
 }
     for (int j = 0;j < index;j++) {

          mostRepeated= nowmatrix[j];
          count = 0;
          for (int k = 0;k < index;k++) {

              if (mostRepeated == nowmatrix[k])
                  count++;
          }
          if (count > maxCount) {
          
               maxCount= count;
              mostR = mostRepeated;
          }

     }
      cout << maxCount<<"   "<< mostR;

 
    return 0;
}
