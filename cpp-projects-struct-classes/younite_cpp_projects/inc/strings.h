//
// Created by Moulvii on 11/08/2022.
//

#ifndef CPP_INTERNSHIP_STRINGS_H
#define CPP_INTERNSHIP_STRINGS_H
bool isIsomorphic(string s, string t) {

    if(s.size() != t.size()){
        return false;
    }

    std::string::iterator it ;

    for ( it=s.begin(); it!=s.end(); ++it){

        cout<<"\niter : "<<*it;
        if(s.find(*it)==string::npos){

            return false;
        }

    }

    return false;
}

#endif //CPP_INTERNSHIP_STRINGS_H
