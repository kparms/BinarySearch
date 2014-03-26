#include <iostream>
#include <apvector.h>

using namespace std;

void binarySearch(apvector <int> &array, int lowerbound, int upperbound, int key)
{
       int position;
       int comparisonCount = 1;    //count the number of comparisons (optional)

       // To start, find the subscript of the middle position.
       position = ( lowerbound + upperbound) / 2;

       while((array[position] != key) && (lowerbound <= upperbound))
       {
              comparisonCount++;
              if (array[position] > key)               // If the number is > key, ..
             {                                                       // decrease position by one.
                    upperbound = position - 1;
             }
             else
            {                                                        // Else, increase position by one.
                   lowerbound = position + 1;
             }
             position = (lowerbound + upperbound) / 2;
       }
      if (lowerbound <= upperbound)
      {
            cout<< "The number was found in array subscript "<< position<<endl<<endl;
            cout<< "The binary search found the number after " << comparisonCount
                   << " comparisons.\n";
            // printing the number of comparisons is optional
       }
       else
             cout<< "Sorry, the number is not in this array.  The binary search made "
                   <<comparisonCount << " comparisons.";
       return;  // you may also consider returning the subscript
}


int main() {
	apvector<int> kevin(10,4);

	binarySearch(kevin, 0, 9, 4);

	return 0;
}
