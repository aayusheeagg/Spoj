#include<iostream>

using namespace std;

int main()
{
    string s;
    int n, sum = 1, count1 = 0, count2 = 0, count3 = 0, extra;
    cin >> n;
    for (int i=0; i < n; i++)
    {
        cin >> s;
        if (s == "1/2")count1 ++;
        if (s == "1/4")count2 ++;
        if (s == "3/4")count3 ++;
    }
    sum += count3 + count1/2.0 + 0.5;
	//cout<<"sum:"<<sum;
    extra = count3 + (count1%2)*2;		//extra of 1/4th part
    if (count2 >= extra)
    {
       count2 -= extra;
       sum += count2 / 4.0 + 0.75;
    }
    cout << sum << endl;
    return 0;
}
