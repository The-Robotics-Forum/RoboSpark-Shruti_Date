struct Student 
    {
        int ID;
        char name[20];
        int Year;
        float CGPA;
    };


int main()
{
    struct Student s1;
    s1.ID = 1191;
    strcpy(s1.name, "Rutika");
    s1.Year = 1;
    s1.CGPA = 9.2;

printf("Student 1: ID - %d \n Name - %s \n Year - %d \n CGPA - %f \n\n", s1.ID, s1.name, s1.Year, s1.CGPA);


    struct Student s2;
    s2.ID = 1191;
    strcpy(s2.name, "Rohan");
    s2.Year = 3;
    s2.CGPA = 9.0;

    printf("Student 2: ID - %d \n Name - %s \n Year - %d \n CGPA - %f \n\n", s2.ID, s2.name, s2.Year, s2.CGPA);

    struct Student s3;
    s3.ID = 1191;
    strcpy(s3.name, "Saee");
    s3.Year = 2;
    s3.CGPA = 8.3;

    printf("Student 3: ID - %d \n Name - %s \n Year - %d \n CGPA - %f \n\n", s3.ID, s3.name, s3.Year, s3.CGPA);


    struct Student s4;
    s4.ID = 1191;
    strcpy(s4.name, "Gauravi");
    s4.Year = 4;
    s4.CGPA = 8.13;

    printf("Student 4: ID - %d \n Name - %s \n Year - %d \n CGPA - %f \n\n", s4.ID, s4.name, s4.Year, s4.CGPA);

    return 0;

}