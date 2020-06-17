#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main() {
    map<string,int>countries;
    map<string,int>chefs;
    map<string,string>chef_country_mappings;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        string chef;
        string country;
        cin>>chef>>country;
        // cout<<chef<<country;
        // return 0;
        chef_country_mappings[chef]= country;
    }
    // return 0;
    for(int i=0;i<m;i++) {
        string s;
        cin>>s;
        chefs[s]++;
        countries[chef_country_mappings[s]]++;
    }
    // return 0;
    string winnerCountry="";
    string winnerChef = "";
    int maxChef = 0;
    int maxCountry =0;
    // cout<<chefs["a"];
    // return 0;
    map<string,int>::iterator it1 = chefs.begin();
    while(it1!=chefs.end()) {
        if(it1->second > maxChef) {
            maxChef = it1->second;
            winnerChef = it1->first;
        }
        it1++;
    }
    it1 = countries.begin();
    while(it1 != countries.end()) {
        if(it1->second > maxCountry) {
            maxCountry = it1->second;
            winnerCountry = it1->first;
        }
        it1++;
    }
    cout<<winnerCountry<<endl<<winnerChef<<endl;
}