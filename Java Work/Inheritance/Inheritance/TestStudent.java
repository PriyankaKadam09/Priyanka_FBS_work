class NewStudent
{
	int rno ;
	String sname;
	double marks;

	void setRno(int a)
	{
		this.rno= a;
	}
	void setSname(String str)
	{
		this.sname= str;
	}
	void setMarks(int y)
	{
		this.marks= y;
	}
	int getRno()
	{
		return rno;
	}
	
	String getSname()
	{
		return sname;
	}
	
	double getMarks()
	{
		return marks;
	}
	NewStudent() {
		this.rno = 0;
		this.sname = "Default Name";
		this.marks = 0;
	}
	
	NewStudent(int rno, String sname, double marks) {
		this.rno = rno;
		this.sname = sname;
		this.marks = marks;
	}
	void display()
	{
		System.out.println("Student rno is"+this.rno);
		System.out.println("Student Name is"+this.sname);
		System.out.println("Student Matks are"+this.marks);

	}


}//class Student ends here 


class EngineeringStudent extends NewStudent
{
	String Branch;
	double fees;
	String getBranch() {
		return Branch;
	}
	void setBranch(String branch) {
		Branch = branch;
	}
	double getFees() {
		return fees;
	}
	void setFees(double fees) {
		this.fees = fees;
	}
	EngineeringStudent() {
		super();
		this.Branch="Not defined";
		this.fees=150000;
	}
	public EngineeringStudent(int rno, String sname, double marks,String b,double f) {
		super(rno, sname, marks);
		this.Branch=b;
		this.fees=f;
		
	}
	void display()
	{
		super.display();
		System.out.println("Branch is"+this.Branch);
		System.out.println("Fees are"+this.fees);
		

	}

}//Class Engineering Student ends here


class MedicalStudent extends NewStudent
{
	String Branch;
	double fees;
	String getBranch() {
		return Branch;
	}
	void setBranch(String branch) {
		Branch = branch;
	}
	double getFees() {
		return fees;
	}
	void setFees(double fees) {
		this.fees = fees;
	}
	MedicalStudent() {
		super();
		this.Branch="Not defined";
		this.fees=0;
	}
	public MedicalStudent(int rno, String sname, double marks,String b,double f) {
		super(rno, sname, marks);
		this.Branch=b;
		this.fees=f;
		
	}
	void display()
	{
		super.display();
		System.out.println("Branch is"+this.Branch);
		System.out.println("Fees are"+this.fees);
		

	}

}



public class TestStudent {

	public static void main(String[] args) {
		
		NewStudent s1=new NewStudent();
		s1.display();
		
		System.out.println();
		NewStudent s2=new NewStudent(101,"Radhika",90);
		s2.display();
		
		System.out.println();
		EngineeringStudent e1=new EngineeringStudent();
		e1.display();
		
		System.out.println();
		EngineeringStudent e2=new EngineeringStudent(102,"Ruchika",88,"Computer Enginnering",150000);
		e2.display();
		
		System.out.println();
		MedicalStudent m1=new MedicalStudent();
		m1.display();
		
		System.out.println();
		MedicalStudent m2=new MedicalStudent(102,"Rutuja",97,"MBBS",500000);
		m2.display();

	}

}
