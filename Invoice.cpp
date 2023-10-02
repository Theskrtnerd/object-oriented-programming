#include "Invoice.h"

Invoice::Invoice(std::string invoiceId){
  _dollarOwed = 0;
  _invoiceId = invoiceId;
};

void Invoice::addServiceCost(int costDollars){
      _dollarOwed += costDollars;
    };

int Invoice::getDollarsOwed(){
      return _dollarOwed;
    };

std::string Invoice::getInvoiceId(){
      return _invoiceId;
    };