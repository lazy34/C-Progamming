//Pasing structure member as argument

#include<stdio.h>

                        //CALL BY VALUE:

/*void print (char name[],int age,int roll_no,float marks)
{
    printf("%s %d %d %.2f",name,age,roll_no,marks);
}

struct student 
{
    char name[50];
    int age;
    int roll_no;
    float marks;
};


int main()
{
    struct student s1={"Surajit",19,34,90};
    print  (s1.name,s1.age,s1.roll_no,s1.marks);

    return 0;
} */


                    //CALL BY REFERENCES:
struct charset
{
    char s;
    int i;
};

void keyvalue(char* s,int *i)
{
    scanf("%c %d",s,i);
}


int main()
{
    struct charset cs;
    keyvalue(&cs.s,&cs.i);
    printf("%c %d",cs.s,cs.i);
    return 0;

}
