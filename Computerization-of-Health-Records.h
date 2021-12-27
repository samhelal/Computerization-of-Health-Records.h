/*3.16 (Computerization of Health Records) A health-care
issue that has been in the news lately is the computerization of
health records. This possibility is being approached cautiously
because of sensitive privacy and security concerns, among
others. [We address such concerns in later exercises.](c++ how to program)*/
#include <string>

class HealthProfile {
    public:
    HealthProfile (std::string firstName,std::string lastName,std::string intialGender,
                   int month,int day,int year,int initialHeight,int intialWeight):
                   fName(firstName){
                   lName = lastName ;
                   gender = intialGender ;
                   m      = month ;
                   d      = day ;
                   y      = year ;
                   height = initialHeight ;
                   weight = intialWeight ;
                   }

    void setFirstName (std::string firstName){
        fName = firstName ;
    }

    void setLastName (std::string lastName){
        lName = lastName ;
    }

    void setGender (std::string intialgender){
        gender = intialgender ;
    }

    void  setMonth (int month){
        m = month ;
    }

    void setDay (int day){
        d = day ;
    }

    void setYear (int year){
        y = year ;
    }

    void setHeight (int sHeight){
        height =  sHeight ;
    }

    void setWeight (int sWeight){
        weight = sWeight ;
    }

    void setDate(int sDate){
        date = sDate ;
    }

    void setAge (int sAge){
        age = sAge ;
    }

    void setMaximumHeartRate (int maximum){
        maximumHeartRate = maximum ;
    }

    std::string getLastName ()const{
        return lName ;
    }
                   
    std::string getFirstName ()const{
        return fName ;
    }

    std::string getGender() const{
        return gender ;
    }

    int getDay () const {
        return d ;
    }

    int getMonth () const {
        return m ;
    }

    int GetYear () const{
        return y ;
    }

    int getDate () const {
        return date ;
    }

    int getAge () const {
        return date-y  ;
    }

    int getMaximumHeartRate ()const{
        return 220 - age ;
    }

    int getMinimumTargetRate ()const{
        return (maximumHeartRate/100)*50;
    }

    int gatMaximumTargetRate()const {
        return (maximumHeartRate/100)*85;
    }

    int getHeigh() const {
        return height ;
    }

    int getWeigh() const {
        return weight ;
    }

    int getBMI () const {
        return (( weight )/(height*height)) ;
    }


    std::string displayHealthProfile ()const{
        return fName+" "+lName+" "+gender+" "+std::to_string(m)+"/"+std::to_string(d)+"/"+
               std::to_string(y) ;
    }

    private:
    std::string fName;
    std::string lName;
    std::string gender;
    int m{0};
    int d{0};
    int y{0};
    int height{0};
    int weight{0};
    int date {0};
    int age = {0} ;
    int maximumHeartRate{0};

};