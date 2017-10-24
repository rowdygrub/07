#ifndef containers.h
#define containers.h
#include <iostream>
#include <string>

using namespace std;

class Containers{
  public:
    Containers(string name, string description, double wholesale_cost, double retail_price, int stock)
      : name{name}, description{description}, wholesale_cost{wholesale_cost}, retail_price{retail_price},
      stock{stock}, maximum{maximum} {}

    string to_string(); //list the contents
    int get_maximum();//get the max to compare to number of scoops customer wants
    void stock();//decrement each time containers is used and if(stock == 0) then sold out
  private:
    string name;
    string description;
    double wholesale_cost;
    double retail_price;
    int stock;
    int maximum;
};
#endif