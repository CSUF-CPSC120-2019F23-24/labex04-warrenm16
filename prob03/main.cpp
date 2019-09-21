// Sales prediction


#include <iostream>

int main()
{
  //
   const long long LAST_YEARS_SALE = 2103419277;
   const double increase = 0.18;
  long long this_years_sales;

//Formula for sales prediction 
this_years_sales = (LAST_YEARS_SALE * increase) + LAST_YEARS_SALE ;

  // Displays last year sales and sales prediction
  std::cout << "Last year\'s sales were $" << LAST_YEARS_SALE << std::endl;
  std::cout << "This year\'s sales prediction: $" << this_years_sales << std::endl;



return 0;
}
