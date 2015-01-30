//v0.3

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
  ofstream datafile;
  datafile.open("primes.txt", ios::app);
  datafile << 2 << endl;
  int number = 3;
  while(true)
    {
      bool isPrime = true;
      for(int i = 2; i <= sqrt(number); i++)
	{
	  if(number % i == 0)
	    {
	      isPrime = false;
	    }
	}

      if(isPrime)
	{
	  datafile << number << endl;
	}
      if(number == 2147483647)
	{
	  return -1;
	}
      number++;
      number++;
    }  
  datafile.close();

  return 0;
}
