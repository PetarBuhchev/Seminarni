package day_06_11_2026;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.Locale;

class Student implements Serializable {
    private static final long serialVersionUID = 1L;

    private String name;
    private int facultyNumber;
    private double grade;

    public Student(String name, int facultyNumber, double grade) {
        this.name = name;
        this.facultyNumber = facultyNumber;
        this.grade = grade;
    }

    @Override
    public String toString() {
        return String.format(Locale.US, "Student: %s, Faculty No: %d, Grade: %.2f", name, facultyNumber, grade);
    }
}

public class task4 {

    private static void serializeStudents(Student[] students) {
        try (FileOutputStream fileOut = new FileOutputStream("students.ser");
                ObjectOutputStream out = new ObjectOutputStream(fileOut)) {
            out.writeObject(students);
            System.out.println("\nStudents serialized successfully!");
        } catch (IOException e) {
            System.out.println("Error serializing students: " + e.getMessage());
        }
    }

    private static Student[] deserializeStudents() {
        try (FileInputStream fileIn = new FileInputStream("students.ser");
                ObjectInputStream in = new ObjectInputStream(fileIn)) {
            Student[] students = (Student[]) in.readObject();
            System.out.println("\nStudents deserialized successfully!");
            return students;
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("Error deserializing students: " + e.getMessage());
            return null;
        }
    }

    public static void main(String[] args) {
        Student[] students = {
                new Student("Ivan", 12345, 5.50),
                new Student("Maria", 12346, 6.00),
                new Student("Peter", 12347, 4.75)
        };

        System.out.println("Original students:");
        for (Student student : students) {
            System.out.println(student);
        }

        serializeStudents(students);

        students = null;

        Student[] restoredStudents = deserializeStudents();

        if (restoredStudents != null) {
            System.out.println("\nRestored students:");
            for (Student student : restoredStudents) {
                System.out.println(student);
            }
        }
    }
}
