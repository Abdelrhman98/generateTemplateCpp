#include <bits/stdc++.h>
//#include "template.h"
#define nonImportantLines 4
#define lp(i,n) FOR(i,0,n)
#define sz(v) (int)v.size()
typedef vector<int>       VI;
#define nl printf("\n")
using namespace std;
vector<string> tempAsVec, answerCode, newScript, goodCode;
map<string, string> templateAsmp;
map<string, bool> isVis;
string allCode;
void readTemplate();
void genMyAnswerFile();
void outTempPart();
void mkAnswerCodeFinal();
void contain();
vector<string> trim(string str);
vector<string> explode(string str);
string getTillPrac(string str);
string removeFirstSpaces(string str);
char* tochar(string str){
    char newstr[(int)str.size()+1];
    strcpy(newstr,  str.c_str());
    newstr[str.size()] = '\0';
    //cout<<newstr;
    return newstr;
}
void cpyCode();

int main()
{
    //cout<<"good";
    lp(i, 10){
    cout<<"test";}
    contain();
    //cpyCode();
    return 0;
}



void readTemplate(){
    freopen("template.h", "r", stdin);
    string str;
    int i=0;
    while(!cin.eof()){
        getline(cin,str);
        tempAsVec.push_back(str);
        vector<string> tempVec = explode(str);
        if(tempVec[0] == "#define"){
           // cout<<getTillPrac(tempVec[1])<<endl;
            templateAsmp[getTillPrac(tempVec[1])] = str;
        }else if(tempVec[0] == "typedef"){
            string tempo = tempVec.back();
            int tempoSize = (int)tempo.size();
            string finn = tempo.substr(0, tempoSize-1);
            //cout<<finn<<endl;
            templateAsmp[finn] = str;
        }
        tempVec.clear();
    }
}


vector<string> explode(string str){
    istringstream iss(str);
    vector<string> strVec;
    while(!iss.eof()){
        iss>>str;
        strVec.push_back(str);
    }
    return strVec;
}


string getTillPrac(string str){
    string strFin;
    int i = 0;
    while(str[i] != '(' && i!= (int) str.size()){
        strFin+=str[i];
        i++;
    }
    return strFin;
}

void genMyAnswerFile(){

    freopen("main.cpp", "r", stdin);
    while(!cin.eof()){
        string ss;
        getline(cin, ss);
        goodCode.push_back(ss);
        ss = removeFirstSpaces(ss);
        answerCode.push_back(ss);
        //cout<<ss<<endl;
    }
}

void outTempPart(){
    vector<string> trimmedText;
    for(int i = 0;i<(int)answerCode.size();i++){
        trimmedText = trim(answerCode[i]);
        for(int j = 0; j< (int)trimmedText.size();j++){
            if(!isVis[trimmedText[j]]){
                //cout<<trimmedText[j]<<endl;
                if(templateAsmp[trimmedText[j]] != "" ){
                    //cout<<templateAsmp[trimmedText[j]]<<endl;
                    newScript.push_back(templateAsmp[trimmedText[j]]);
                }
                isVis[trimmedText[j]] = true;
            }
        }
        trimmedText.clear();
    }
}

string removeFirstSpaces(string str){
    int i=0;
    while(str[i]== ' '){
        str.erase(str.begin());
    }
    return str;
}

vector<string> trim(string str){
    string newStr;
    vector<string>vecSStr;
    for(int i = 0; i<(int)str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A'&& str[i] <= 'Z' && str[i]!=' ' || str[i]>='0'&&str[i]<='9'){
            newStr += str[i];
        }else{
            vecSStr.push_back(newStr);
            newStr.clear();
        }
    }
    return vecSStr;
}

void mkAnswerCodeFinal(){
    freopen("STDin.cpp","w",stdout);
    if((int)goodCode.size())
        for(int i = 0; i<3;i++){
            if(goodCode[i] == "#include \"template.h\""){
                cout<<"//";
                allCode+="//";
            }
            cout<<goodCode[i]<<endl;
            allCode+=goodCode[i]+"\n" ;
        }
    for(int i=0;i<(int)newScript.size();i++){
        cout<<newScript[i]<<endl;
        allCode+=newScript[i]+"\n";
    }
    for(int i=3;i<(int)goodCode.size();i++){
        cout<<goodCode[i]<<endl;
        allCode+=goodCode[i]+"\n";
    }
}

void contain(){
    //trim("set<int> str (sz(int))");
    readTemplate();
    cin.clear();
    genMyAnswerFile();
    cin.clear();
    //cout<<templateAsmp["lp"];
    outTempPart();
    mkAnswerCodeFinal();
//cout<<templateAsmp["lp"];
    /*for(int i=0; i<(int)tempAsVec.size(); i++){
        cout<<tempAsVec[i]<<endl;
    }*/

    //cout<<templateAsmp["VI"];
    map<string, string >::iterator it = templateAsmp.begin();
    /*while(it != templateAsmp.end()){
        cout<<it->first<<" ===> "<<it->second<<endl;
        //nl;
        it++;
    }*/
}
void cpyCode()
{
    /*EmptyClipboard();
	HGLOBAL hg=GlobalAlloc(GMEM_MOVEABLE,allCode.size()+1);
	memcpy(GlobalLock(hg),allCode.c_str(),allCode.size()+1);
	GlobalUnlock(hg);
	SetClipboardData(CF_TEXT,hg);
	CloseClipboard();
	GlobalFree(hg);*/
}

