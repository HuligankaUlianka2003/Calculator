#include  <iostream>

int main(){
  int a = 0;
  int b = 0;
  char operation;
  std:: cout << "Enter number: ";
  std:: cin >> a;
  std:: cout << "Enter number two: ";
  std:: cin >> b ;
  std:: cout << "Enter operation: ";
  std:: cin >> operation;
  
  switch (operation){
      case '-':
      std:: cout << a - b << '\n';
      break;
      case '+':
      std:: cout << a + b << '\n';
      break;
      case '*':
      std:: cout << a * b << '\n';
      break;
      case '/':
      std:: cout << a / b << '\n';
      break;
      default:
      std:: cout << "Erorr \n";
  }
  return 0;
}
