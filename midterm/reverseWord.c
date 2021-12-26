using namespace std;

string reverseWord(string s){

    std::string s_new = "";

    for (int i = s.size() - 1; i >= 0; --i){
        s_new += s[i];
    }

    return s_new;
}
