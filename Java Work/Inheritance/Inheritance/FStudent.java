class Student {

		int fbs_id;
		String name;
		double distance_travelled;
		static int count;

		static
		{
			count=0;
		}

	//Setters
		void setFbs_id(int id)
		{
			this.fbs_id=id;
		}
		void setName(String n)
		{
			this.name=n;
		}
		void setDistance_travelled(double dt)
		{
			this.distance_travelled=dt;
		}
		


	//getters
		int getFbs_id()
		{
			return this.fbs_id;
		}
		String getName()
		{
			return this.name;
		}
		double getDistance_Travelled()
		{
			return this.distance_travelled;
		}
		static double getCount()
		{
			return count;	
		}

	//Display Function


		void display()	
		{
			System.out.println("FBS_id:"+this.fbs_id);
			System.out.println("Name:"+this.name);
			System.out.println("Distance_travelled:"+this.distance_travelled);
			//System.out.println("Count of Students:"+count);
		}

	//Constructors
		Student()
		{
			this.fbs_id=101;
			this.name="sachin";
			this.distance_travelled=30;
			count++;		
		}
		Student(int r,String n, double m)
		{
			this.fbs_id=r;
			this.name=n;
			this.distance_travelled=m;
			count++;
		}
	}//Student Class Ends here
class PlacedStudent extends Student {

	String CName;
	String Desg;

//Setters
	void setCName(String sn)
	{
		this.CName=sn;
	}
	void setDesg(String d)
	{
		this.Desg=d;
	}
	


//getters
	String getCName()
	{
		return CName;
	}
	String getDesg()
	{
		return Desg;
	}


//Constructors
	PlacedStudent()
	{
		super();
		this.CName="BCCI";
		this.Desg="Batsman";		
	}
	PlacedStudent(int r,String n, double m,String cname,String Desg)
	{
		super(r,n,m);
		this.CName=cname;
		this.Desg=Desg;
	}
	
	//Display Function
	void display()	
	{
		super.display();
		System.out.println("Cname is "+this.CName);
		System.out.println("Cname is "+this.Desg);
	}
}//Placed Student Class Ends here

	class FStudentTest
	{
		public static void main(String [] args)
		{
			Student s1=new Student(1,"Radha",30);
			s1.display();
			Student s2=new Student(2,"Rucha",25);
			s2.display();
			
			PlacedStudent ps=new PlacedStudent();
			ps.display();
			
			PlacedStudent ps1=new PlacedStudent(3,"Pallavi",60,"XYZ","ABX");
			ps1.display();
			
			System.out.println("Total Count"+Student.getCount());	
		
		}
	}


