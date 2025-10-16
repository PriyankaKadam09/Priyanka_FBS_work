
class Person {
    String name;
    int age;

    
    Person() {
        this.name = "NULL";
        this.age = 0;
        System.out.println("Person Default Constructor");
    }

    Person(String name, int age) {
        this.name = name;
        this.age = age;
        System.out.println("Person Parameterized Constructor");
    }
    
    

    String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this.age = age;
	}

	void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}// class Person ends here

class NStudents extends Person {
    int rollNo;
    String course;

    NStudents() {
        super();
        this.rollNo = 101;
        this.course = "BCA";
        System.out.println("Student Default Constructor");
    }

    NStudents(String name, int age, int rollNo, String course) {
        super(name, age);
        this.rollNo = rollNo;
        this.course = course;
        System.out.println("Student Parameterized Constructor");
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Course: " + course);
    }
}// class Student ends here

class TestPerson {
    public static void main(String[] args) {
        
    	System.out.println();
        Person p1 = new Person();
        p1.display();

        System.out.println();
        Person p2 = new Person("Trupti",30);
        p2.display();
        
        System.out.println();
        NStudents s1 = new NStudents();
        s1.display();

        System.out.println();
        NStudents s2 = new NStudents("Pratik", 21, 10, "MCA");
        s2.display();
    }
}// class TestPerson ends here


