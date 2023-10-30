

// Method 1: using Lamda expression
   // the [] used in lamda is called capture claus which is used for capturing a variable or function which is defined 
   // outside the lamda block. TO access them we use [&] ampersand sign , other wise we can leave it empty, if we don't
   // want to access anything from outside.
 			auto lamda = [&](string &w1 , string &w2)
              {
                return  w1.size() < w2.size();

              };

            sort(words.begin() , words.end() , lamda);


// Method 2: using inline lamda expression

            
             sort(words.begin() , words.end() , [](string &w1 , string &w2)-> bool
             {
                 return w1.size() < w2.size();
             });


// Method 3: using stati bool comparator.
             // public: 
             static bool comp(string &a,string &b)
             {
            	return a.size() < b.size();
      		 }
             
             
      		 sort(words.begin() , words.end() , comp);


// How to count number of set bits in a number using STL functions in O(1) time.
 int bits_num1 = __builtin_popcount(num1);    // Eg: 6 = 110 => bits_num1 = 2 , because 2 set bits.

// TO calculate gcd of  numbers, we can usse:
 int gcd = __gcd(num1, num2);

// To calculate the lower and upper boud  of a number in sorted array, we use

 int lb = lower_bound(arr.begin() , arr.end(), target) - arr.begin(); // when we subtract arr.begin() from the lower_bound it gives us the 
// index of the target.
 int ub = upper_bound(arr.begin() , arr.end(), target) - arr.begin();

 


