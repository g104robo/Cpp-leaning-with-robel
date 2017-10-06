#ifndef CLASS_STUDY_HPP
#define CLASS_STUDY_HPP

class CTest
{
    public:
    void printMemberNum();

    //inline function
    void setMenberNum(int member_num)
    {
        member_num_ = member_num;
    }

    private:
    int member_num_;
};


#endif
