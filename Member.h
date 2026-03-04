#pragma once

#include<string>


class Member{
    private:
        int memberId;
        std::string name;

    public:
        Member(int memberId, const std::string& name);
        
        void displayMember() const;

        int getMemberId() const;
};