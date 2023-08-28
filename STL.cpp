

// Method 1: using Lamda expression

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
