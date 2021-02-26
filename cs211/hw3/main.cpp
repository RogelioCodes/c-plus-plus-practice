#include "PackageInventory.h"
int main()
{
  PackageInventory inventory;
  inventory.ProcessTransactionFile("TransactionFile.txt");
  return 0;
}
