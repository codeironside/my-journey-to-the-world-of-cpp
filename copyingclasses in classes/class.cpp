
class person {
private:
    string name;
public:
    person(string name){
    name = name }
};

class course {
private:
    person instructor;
    int enrollment;
public:
    course(string teachername, int nstudents){
    instructor =person(
                       teachername);
    enrollment= nstudents
    }
};
