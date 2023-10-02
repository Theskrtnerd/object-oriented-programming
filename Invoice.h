#include<string>

class Invoice {
  // The Invoice class represents a billing invoice with functionality to manage and calculate the total amount owed for various services.

  private:
    std::string _invoiceId;
    int _dollarOwed;

  public:
    Invoice(std::string invoiceId){
      _dollarOwed = 0;
      _invoiceId = invoiceId;
    };
    void addServiceCost(int costDollars){
      _dollarOwed += costDollars;
    };
    int getDollarsOwed(){
      return _dollarOwed;
    };

    std::string getInvoiceId(){
      return _invoiceId;
    };

};