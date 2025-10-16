class Emp
 {
    int id;
    String name;
    Double salary;

      void setid(int id) {
        this.id = id;
    }

    void setname(String name) {
        this.name = name;
    }

    void setsalary(double salary) {
        this.salary = salary;
    }

      int getid() {
        return this.id;
    }

    String getname() {
        return this.name;
    }

    double getsalary() {
        return this.salary;
    }

      void display() {
    	  System.out.println("ID is "+this.id);
  		System.out.println("Name is"+this.name);
  		System.out.println("Salary is "+this.salary);
		
    }
    
    Emp() {
        this.id = 101;
        this.name = "pallavi";
        this.salary = 30000.0;
        System.out.println("default constructor");
    }

      Emp(int i, String n, double s) {
        this.id = i;
        this.name = n;
        this.salary = s;
        System.out.println("parameterized constructor");
    }

}

class SalesManager extends Emp
{
	double incentive;
	int target;
	double getIncentive() {
		return incentive;
	}
	void setIncentive(double incentive) {
		this.incentive = incentive;
	}
	int getTarget() {
		return target;
	}
	void setTarget(int target) {
		this.target = target;
	}
	SalesManager() {
		super();
		this.incentive=600;
		this.target=5;
		
	}
	SalesManager(int i, String n, double s,double in,int t) {
		super(i, n, s);
		this.incentive=in;
		this.target=t;
		
	}
	
	void display()
	{
		super.display();
		System.out.println("Incentive is "+this.incentive);
		System.out.println("Target is"+this.target);
	}
}//Sales manager ends here


class HR extends Emp
{
	double commission;
	
	double getcommission() {
		return commission;
	}
	void setcommission(double  commission) {
		this.commission =  commission;
	}
	
	HR() {
		super();
		this.commission=600;	
	}
	HR(int i, String n, double s,double com) {
		super(i, n, s);
		this.commission=com;
	
		
	}
	
	void display()
	{
		super.display();
		System.out.println("Commission is "+this.commission);
		
	}
}//HR manager ends here


class Admin extends Emp
{
	double allowance;
	
	double getallowance() {
		return allowance;
	}
	void setallowance(double  allowance) {
		this.allowance =  allowance;
	}
	
	Admin() {
		super();
		this.allowance=600;	
	}
	Admin(int i, String n, double s,double allo) {
		super(i, n, s);
		this.allowance=allo;
	
		
	}
	
	void display()
	{
		super.display();
		System.out.println("Allowance is "+this.allowance);
		
	}
}//Admin manager ends here
class AreaManager extends SalesManager
{
	String areaName;
	
	
	 String getAreaName() {
		return areaName;
	}
	 void setAreaName(String areaName) {
		this.areaName = areaName;
	}
	 AreaManager() {
		super();
		this.areaName="Pune";	
	}
	 AreaManager(int i, String n, double s,double in,int t ,String aname) {
		super(i, n, s,in,t);
		this.areaName=aname;
	
		
	}
	
	void display()
	{
		super.display();
		System.out.println("Area name is "+this.areaName);
		
	}
}//manager ends here


class TestEmp
{
    public static void main(String[] args) 
    {
        Emp e1 = new Emp(); 
        e1.display();

        System.out.println();
        Emp e2 = new Emp(102, "mansi", 40000.00);  
        e2.display();
        
        System.out.println();
        SalesManager s1=new SalesManager();
        s1.display();
        
        System.out.println();
        SalesManager s2=new SalesManager(101,"sm1",6000,600,5);
        s2.display();
        
        System.out.println();
        Admin a1=new Admin();
        a1.display();
        
        System.out.println();
        Admin a2=new Admin(102,"A1",5000,500);
        a2.display();
        
        HR h1=new HR();
        h1.display();
        
        System.out.println();
        HR h2=new HR(103,"HR1",7000,700);
        h2.display();
       
        System.out.println();
        AreaManager am=new AreaManager();
        am.display();
        
        System.out.println();
        AreaManager am1=new AreaManager(104,"AM1",9000,600,5,"Mumbai");
        am1.display();
    }   
}
    
