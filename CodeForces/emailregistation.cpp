#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef vector<int> vi;

int main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   srand(chrono::high_resolution_clock::now().time_since_epoch().count());

   string str;
   set<string> st;
   set<string>::iterator it;
   int t = 1;

   cin >> t;

   while (t--)
   {
      int serial = 0;
      cin >> str;
      if (str.size() != 0)
      {

         it = st.find(str);
         if (it == st.end())
         {
            cout << "OK" << endl;
            st.insert(str);
         }
         else
         {
            while (true)
            {
               serial++;
               str += std::to_string(serial);
               it = st.find(str);
               if (it != st.end())
               {
                  serial = 0;
                  str.pop_back();
                  continue;
               }
               else
               {
                  cout << str << endl;
                  break;
               }
            }
         }
      }
      else
      {
      }
   }

   return 0;
}