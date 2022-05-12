#include <iostream>
using namespace std;

void findAverage(int const scores[][3], double stdAverage[],int row,int col)
{
  for(int i=0;i<row;i++)
    {
      int sum=0;
      for(int y=0;y<col;++y)
        {
          sum=sum+scores[i][y];
        }

      double average=static_cast<double>(sum)/col;
      stdAverage[i]=average;
    }

  
  
}  

void findTestAverage(int const scores[][3],double stdAverage[],double testAverage[],int row,int col)
{
  for(int i=0;i<col;++i)
    {
      int sum=0;
      for(int y=0;y<row;++y)
        {
          sum+=scores[i][y];
        }
      double average=static_cast<double>(sum)/row;
     testAverage[i] =average;
    }
}

int main() {
  const int rowSize=5;
  const int colSize=3;
  //int scores[5] [3];
  int scores[rowSize][colSize]={ {70,65,90},
                                  {60,90,35},
                                  {50,55,67},
                                  {20,60,45},
                                  {90,100,95}
                                };
  double stdAver[rowSize];
  double testAverage[colSize];

  findAverage(scores,stdAver,rowSize,colSize);
  findTestAverage(scores,testAverage,stdAver,rowSize,colSize);

  cout<<"Test Scores:"<<endl;
  for(int i=0;i<rowSize;++i)
    {
      for(int y=0;y<colSize;++y)
        {
          cout<<scores[i][y]<<" ";
        }
      cout<<"\t"<<stdAver[i]<<endl;
    }

  cout<<"Test Averages:";
  for(int i=0;i<rowSize;++i)
    {
      cout<<stdAver[i]<<"\t";
    }
  }