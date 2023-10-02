#include<string>

class Invoice {
  // The Invoice class represents a billing invoice with functionality to manage and calculate the total amount owed for various services.

  private:
    std::string _invoiceId;
    int _dollarOwed;

  public:
    Invoice(std::string invoiceId);
    void addServiceCost(int costDollars);
    int getDollarsOwed();

    std::string getInvoiceId();

};