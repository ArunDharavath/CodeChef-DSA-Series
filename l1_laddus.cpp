#include <iostream>
using namespace std;

int main() {
    int tc, num, rank, laddus, months;
    cin >> tc;
    string str, str1;
    while(tc--)
    {
        cin >> num >> str;
        laddus = 0;
        for(int i = 0; i < num; ++i)
        {
            cin >> str1;
            if(str1 == "CONTEST_WON" || str1 == "BUG_FOUND")
            {
                cin >> rank;
                if(str1 == "CONTEST_WON")
                {
                    if(rank <= 20)
                        laddus += 300 + (20 - rank);
                    else
                        laddus += 300;
                }
                else
                    laddus += rank;
            }
            else if(str1 == "TOP_CONTRIBUTOR" || str1 == "CONTEST_HOSTED")
            {
                if(str1 == "TOP_CONTRIBUTOR")
                    laddus += 300;
                else
                    laddus += 50;
            }
        }
        if(str == "INDIAN")
        {
            if(laddus < 200)
                cout << "0" << endl;
            else
            {
                months = int(laddus/200);
                cout << months << endl;
            }
        }
        else
        {
            if(laddus < 400)
                cout << "0" << endl;
            else
            {
                months = int(laddus/400);
                cout << months << endl;
            }
        }
    }
	return 0;
}
