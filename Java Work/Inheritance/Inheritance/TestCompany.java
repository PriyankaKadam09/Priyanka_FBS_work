class Company {
    public String companyName;

    Company(String companyName) {
        this.companyName = companyName;
    }

    void display() {
        System.out.println("Company: " + companyName);
    }
}

class Employee extends Company {
    public String empName;

    Employee(String companyName, String empName) {
        super(companyName);
        this.empName = empName;
    }

   
    void display() {
        super.display();
        System.out.println("Employee: " + empName);
    }
}

public class TestCompany {
    public static void main(String[] args) {
        Employee e = new Employee("Infosys", "Priya");
        e.display();
    }
}
