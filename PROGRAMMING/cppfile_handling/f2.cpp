#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Product {
  string name;
  int price;
  int quantity;
};

void writeProductData(Product product) {
  ofstream file("product_data.txt", ios :: app);

  file << product.name << ":" << product.price << ":" << product.quantity << endl;

  file.close();
}

Product searchProductInformation(string productName) {
  ifstream file("product_data.txt");

  Product product;

  while (file >>product.name >> product.price >> product.quantity ) {
    if (product.name == productName) {
      return product;
    }
  }

  return product;
}

int countNumberOfProducts() {
  int numberOfProducts = 0;

  ifstream file("product_data.txt");

  string line;

  while (getline(file, line)) {
    numberOfProducts++;
  }

  return numberOfProducts;
}

void displayAllProductInformation() {
  ifstream file("product_data.txt");

  string line;

  while (getline(file, line)) {
    cout << line << endl;
  }
}

int main() {
  // Write product data to a text file.
  Product product = {
    "iPhone 13",
    999,
    10
  };
  writeProductData(product);
  Product p1 = {
    "abc", 299, 10
  };
    writeProductData(p1);
  // Search for product information in a text file.
  string productName = "iPhone 13";
  Product productInformation = searchProductInformation(productName);
  cout << productInformation.name << ":" << productInformation.price << ":" << productInformation.quantity << endl;

  // Count the number of products in a text file.
  int numberOfProducts = countNumberOfProducts();
  cout << "There are " << numberOfProducts << " products in the text file." << endl;

  // Display all product information in a text file.
  displayAllProductInformation();

  return 0;
}