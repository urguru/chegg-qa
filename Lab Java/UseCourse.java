import java.util.*;

class CollegeCourse {
    String dept;
    int id;
    double credits;
    double price;

    public CollegeCourse(String dept, int id, double credits) {
        this.dept = dept;
        this.id = id;
        this.credits = credits;
    }

    public void display() {
        System.out.println(dept + id + "\nNon-lab-course\n" + credits + " credits");
        System.out.println("Total fees is $" + credits * 120);
    }
}

class LabCourse extends CollegeCourse {
    public LabCourse(String dept, int id, double credits) {
        super(dept, id, credits);
    }

    public void display() {
        System.out.println(dept + id + "\nLab-course\n" + credits + " credits");
        System.out.println("Lab fee is $50");
        System.out.println("Total fees is $" + (credits * 120 + 50));
    }
}

public class UseCourse {
    public static void main(String args[]) {
        String dept;
        int id;
        double credits;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the dept name");
        dept = in.nextLine();
        System.out.println("Enter the course id and credits");
        id = in.nextInt();
        credits = in.nextInt();
        if (dept.equals("BIO") || dept.equals("CHM") || dept.equals("CIS") || dept.equals("PHY")) {
            LabCourse course = new LabCourse(dept, id, credits);
            course.display();
        } else {
            CollegeCourse course = new CollegeCourse(dept, id, credits);
            course.display();
        }
        in.close();
    }
}
