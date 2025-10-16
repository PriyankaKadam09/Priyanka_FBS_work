class Country {
    public String countryName;

    Country(String countryName) {
        this.countryName = countryName;
    }

    void display() {
        System.out.println("Country: " + countryName);
    }
}

class State extends Country {
    public String stateName;

    State(String countryName, String stateName) {
        super(countryName);
        this.stateName = stateName;
    }

   
    void display() {
        super.display();
        System.out.println("State: " + stateName);
    }
}

public class TestCountry {
    public static void main(String[] args) {
        State s = new State("India", "Maharashtra");
        s.display();
    }
}
