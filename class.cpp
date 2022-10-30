#include<iostream>
using namespace std;
class Book
{
  int bookid;
  int price;
  public:
  void setid(int n)
  {
    bookid=n;
  }
  void setprice(int n)
  {price=n;
  }
  
};
int main()
{
Book b1;
  b1.setid(5);
}
