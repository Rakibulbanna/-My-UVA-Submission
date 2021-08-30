#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
      #ifndef ONLINE_JUDGE
       clock_t tStart = clock();
        //freopen("input.txt", "r", stdin);
       // freopen("output.txt", "w", stdout);
    #endif

    map <string, string> m;
    m[""] = "";
    m[".-"] = "A";
    m["-..."] = "B";
    m["-.-."] = "C";
    m["-.."] = "D";
    m["."] = "E";
    m["..-."] = "F";
    m["--."] = "G";
    m["...."] = "H";
    m[".."] = "I";
    m[".---"] = "J";
    m["-.-"] = "K";
    m[".-.."] = "L";
    m["--"] = "M";
    m["-."] = "N";
    m["---"] = "O";
    m[".--."] = "P";
    m["--.-"] = "Q";
    m[".-."] = "R";
    m["..."] = "S";
    m["-"] = "T";
    m["..-"] = "U";
    m["...-"] = "V";
    m[".--"] = "W";
    m["-..-"] = "X";
    m["-.--"] = "Y";
    m["--.."] = "Z";
    m["-----"] = "0";
    m[".----"] = "1";
    m["..---"] = "2";
    m["...--"] = "3";
    m["....-"] = "4";
    m["....."] = "5";
    m["-...."] = "6";
    m["--..."] = "7";
    m["---.."] = "8";
    m["----."] = "9";
    m[".-.-.-"] = ".";
    m["--..--"] = ",";
    m["..--.."] = "?";
    m[".----."] = "\'";
    m["-.-.--"] = "!";
    m["-..-."] = "/";
    m["-.--."] = "(";
    m["-.--.-"] = ")";
	m[".-..."] = "&";
    m["---..."] = ":";
    m["-.-.-."] = ";";
    m["-...-"] = "=";
    m[".-.-."] = "+";
    m["-....-"] = "-";
    m["..--.-"] = "_";
    m[".-..-."] = "\"";
    m[".--.-."] = "@";
	int tc,c=0;
	cin >> tc;

	string temp;
	getline(cin,temp);
	while(tc--){
            c++;
    if (c>1){printf("\n");}

		cout << "Message #" <<c<< endl;
		string s;
		getline(cin,s);
		string cnt = "";

		for(int i=0;i<s.size();i++){
			if(s[i]!=' '){
				cnt+=s[i];
			}
			else {
                cout << m[cnt];
                cnt="";
                if(i+1<(int)s.length()){
                    if (s[i+1]==' '){
                        cout << " ";
                        i++;
                    }
                }
			}
		}
		cout << m[cnt] << endl;
	}
    #ifndef ONLINE_JUDGE
    //printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
    #endif
return 0;
}
