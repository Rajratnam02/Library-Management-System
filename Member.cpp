#include "Member.h"
#include <iostream>

using namespace std;

Member::Member(int memberId, const string& name)
    : memberId(memberId), name(name)
{
}

void Member::displayMember() const
{
    cout << "Member Id: " << memberId << endl;
    cout << "Name: " << name << endl;
}

int Member::getMemberId() const
{
    return memberId;
}