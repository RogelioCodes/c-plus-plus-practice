#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getTotal (int arr[12][4])
{
  int total = 0;
  for (int i=0; i<12; i++)
    total += arr[i][k];
  return total;
}
double getAverage (int arr[12][4])
{
  int total=0;
  int count=0;
  for (int i=0;i<12;i++)
    for (int k=0;k<4;k++)
      total += arr[i][k];
  count++;
  return total/(count*1.0);
}
double getRowAvg (int arr[12][4], int Row)
{
  int total=0;
  int count=0;
  for (int i=0; i<12; i++)
    {
      for (int k=0;k<4;k++)
	{
	  if (k == Row)
	    {
	      total+=arr[i][k];
	      count ++;
	    }
	}
    }
  return total/(count*1.0);
}
double getColumnAvg (int arr[12][4], int column)
{
  int total=0;
  int count=0;
  for (int i=0; i<12; i++)
{
  for (int k=0;k<4;k++)
    {
      if (k==Row)
	{
	  total+=arr[i][k];
	  count ++;

	}
    }
}
return total/(count*1.0);
}
double getColumnAvg (int arr[12][4], int column)
{
  int total=0;
  int count=0;
  for (int k=0;k<4;k++)
    {
      for (int k=0;k<4;k++)
	{
	  if(k==column)
	    {
	      total+=arr[i][k];
	      count++;
	    }
	}
    }
  return total/(count*1.0);
}
int getTargetInRow (int arr[12][4], int rowIndex, int Val)
{
  int subscript=0;
  for (int i=0;i<12;i++)
    for (int k=0;k<4;k++)
      {
	if (Val==ar[i][k])
	  {
	    return k;
	  }
      }
  return 0;
}
int getTargetInCol (int arr[12][4], int colIndex, int Val)
{
  int subscrpit=0;

  int max=arr[rowIndex][0];
  for (int i=0;i<12;i++)
    for (int k=0;k<4;k++)
      {
	if (rowIndex==i)
	  {
	    if (arr[i][k] < min)
	      {
		min = arr[i][k];
	      }
	  }
      }
  return min;
}
void getHighestandLowestInCol (int arr[12][4], int rowIndex)
{
  int subscript=0;
  max=arr[0][col];
  min=arr[0][col];
  for (int i=0; i<12;i++)
    for (int k=0;k<4;k++)
      {
	if (col==k)
	  {
	    if (arr[i][k] > max)
	      {
		max = arr[i][k];
	      }
	    if (arr[i][k]<min)
	      {
		min = arr [i][k];
	      }
	  }
      }
}
int getHighestInRow (int arr[12][4], int rowIndex)
{
  int subscript=0;
  int max=arr[rowIndex][0];
  for (int i=0;i<12;i++)
    for (int k=0;k<4;k++)
      {
	if (rowIndex==i)
	  {
	    if (arr[i][k] < min)
	      {
		min=arr[i][k];
	      }
	  }
      }
  return max;
}
int getLowestInRow (int arr[12][4], int rowIndex)
{
  int subscript=0;
  int min=arr[rowIndex][0];
  for (int i=0;i<12;i++)
    for (int k=0;k<4;k++)
      {
	if (rowIndex==i)
	  {
	    if(arr[i][k]<min)
	      {
		min=arr[i][k];
	      }
	  }
      }
  return min;
}
void getHighestandLowestInColl (int arr[12][4], int col, int &max, int &min)
  int subscript = 0;
max = arr[0][col];
min = arr[0][col];
for (int i=0;i<12;i++)
  {
    if (col==k)
      {
	if (arr[i][k]>max)
	  {
	    max = arr[i][k];
	  }
	if (arr[i][k]<min)
	  {
	    min=arr[i][k];
	  }
      }
  }
}
int getColumnOfHighestInRow (int arr[12][4], int rowIndex)
{
  int subscript =0;
  int col=0;
  int max=arr[rowIndex][0];
  for (int k=0;k<4;k++)
    {
      if(rowIndex==1)
	{
	  if (arr[i][k] > max)
	    {
	      max = arr[i][k];
	      col=k;
	    }
	}
    }
  return col;
}
int main()
{
  ifstream file;
  file.open ("2Dnumber.txt");
  int count;
  int arr[12][4];
  int c, r=0;
  for (int mm=0;mm<12;mm++)
    {
      c=0;
      for (int hh=0; hh<4; hh++)
	{
	  file >> count;
	  arr[mm][hh] = count;
	}
    }
  int ch;
  cout << "1 - GetTotal" << endl;
  cout << "2 - getAverage. " << endl;
  cout << "3 - getRowAvg. " << endl;
  cout << "4 - getColumnAvg. " << endl;
  cout << "5 - getTargetInRow. " << endl;
  cout << "6 - getTargetInCol. " << endl;
  cout << "7 - getHighestInRow. " << endl;
  cout << "8 - getLowestInRow. " << endl;
  cout << "9 - getHighestandLowestInCol. " << endl;
  cout << "10 - getColumnOfHighestInRow. " << endl;
  cout << "Enter the choice 1-10: ";
  cin >> ch;
  if (ch==1)
    {
      cout << "1 - Total is " << getTotal(arr) << endl;
    }
  else if (ch==2)
    {
      cout << "2 - Average is " << getAverage(arr) << endl;
    }
  else if (ch==3)
    {
      int row;
      cout << "Enter the Row: ";
      cin >> row;
      while (row<0 && row >100)
	{
	  cout << "Invalid, Enter the Row: ";
	  cin >>row;
	}
      cout << "3 - getRowAvg. " << getRowAvg(arr,row) << endl; {
	cout << "Invalid, Enter the val: ";
	cin >> val;
      }
      cout << "5 - getTargetInRow. " << getTargetInRow (arr,row,val) << endl;
    }
  else if (ch==6)
    {
      int col;
      cout << "Enter the subscript of row: ";
      cin >> col;
      while (col<0 && col>100)
	{
	  cout << "Invalid, Enter the row subscript: ";
	  cin >> col;
	}
      int val;
      cout << "Enter the value: ";
      cin >>val;
      while (val<0)
	{
	  cout << "Invalid, enter the value: ";
	  cin >> val;
	}
      cout << "6 - getTargetInCol. " << getTargetInCol (arr,col,val) << endl;
    }
  else if (ch==7)
    {
      int row;
      cout << "Enter the row: ";
      cin >> row;
      while (row<0 && row>100)
	{
	  cout << "Invalid, enter the row: ";
	  cin>>row;
	}
      cout << "7 - getHighestInRow. " getHighestInRow (arr,row) << endl;
    }
  else if (ch==8)
    {
      int row;
      cout << "Enter the row: ";
      cin >> row;
      while (row < 0 && row > 100)
	{
	  cout << "Invalid, enter the row: ";
	  cin >> row;
	}
      cout << "8 - getLowestInRow. " << getLowestInRow (arr,row) << endl;
    }
  else if (ch==9)
    {
      int col;
      int max = 0, min;
      cout << "Enter the Subscript of Row: ";
      cin >> col;
      while (col<0 && col>100)
	{
	  cout << "Invalid, enter the subscript: ";
	  cin >> col;
	}
      getHighestandLowestInCol (arr,col,max,min);
      cout << "Maximum is " << max << endl;
      cout << "Minimum is " <<min << endl;
    }
  else if (ch==10)
    {
      int row;
      cout << "Enter the row: ";
      cin >> row;
    }
  cout << "10 - getColumnOfHighestInRow. " << getColumnOfHighesrInRow (arr,row) << endl;
}
 else
   {
     cout << "Invlaid, Try again!" << endl;
        }
return 0;
}
