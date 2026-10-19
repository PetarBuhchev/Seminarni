import java.util.Arrays;
import java.util.Scanner;

class Book {
    private String title;
    private String author;
    private double price;

    public Book(String title, String author, double price) {
        this.title = title;
        this.author = author;
        this.price = price;
    }

    public String getTitle() {
        return title;
    }

    public String getAuthor() {
        return author;
    }

    public double getPrice() {
        return price;
    }

    @Override
    public String toString() {
        return "Title: " + title +
                ", Author: " + author +
                ", Price: " + price;
    }
}

class BookStack {
    private Book[] books;
    private int size;

    public BookStack(int initialCapacity) {
        books = new Book[initialCapacity];
        size = 0;
    }

    public void push(Book book) {
        if (size == books.length) {
            resize();
        }

        books[size] = book;
        size++;
    }

    public Book pop() {
        if (size == 0) {
            return null;
        }

        Book removedBook = books[size - 1];
        books[size - 1] = null;
        size--;

        return removedBook;
    }

    private void resize() {
        books = Arrays.copyOf(books, books.length * 2);
    }

    public void searchByPrice(double minPrice) {
        boolean found = false;

        for (int i = 0; i < size; i++) {
            if (books[i].getPrice() >= minPrice) {
                System.out.println(books[i]);
                found = true;
            }
        }

        if (!found) {
            System.out.println("No matching books found.");
        }
    }

    public void printStackInformation() {
        System.out.println("Number of books: " + size);
        System.out.println("Array capacity: " + books.length);

        if (size == 0) {
            System.out.println("Stack is empty.");
            return;
        }

        System.out.println("Books in stack:");

        for (int i = 0; i < size; i++) {
            System.out.println(books[i]);
        }
    }
}

public class taskFinal {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        BookStack stack = new BookStack(2);

        int choice;

        do {
            System.out.println("\n=== BOOK STACK MENU ===");
            System.out.println("1. Add book");
            System.out.println("2. Remove book");
            System.out.println("3. Search books by minimum price");
            System.out.println("4. Print stack information");
            System.out.println("0. Exit");
            System.out.print("Choose an option: ");

            choice = Integer.parseInt(scanner.nextLine());

            switch (choice) {

                case 1:
                    System.out.print("Book title: ");
                    String title = scanner.nextLine();

                    System.out.print("Book author: ");
                    String author = scanner.nextLine();

                    System.out.print("Book price: ");
                    double price = Double.parseDouble(scanner.nextLine());

                    Book book = new Book(title, author, price);
                    stack.push(book);

                    System.out.println("Book added successfully!");
                    break;

                case 2:
                    Book removedBook = stack.pop();

                    if (removedBook == null) {
                        System.out.println("Stack is empty.");
                    } else {
                        System.out.println("Removed book:");
                        System.out.println(removedBook);
                    }
                    break;

                case 3:
                    System.out.print("Minimum price: ");
                    double minPrice = Double.parseDouble(scanner.nextLine());

                    stack.searchByPrice(minPrice);
                    break;

                case 4:
                    stack.printStackInformation();
                    break;

                case 0:
                    System.out.println("Goodbye!");
                    break;

                default:
                    System.out.println("Invalid option!");
            }

        } while (choice != 0);

        scanner.close();
    }
}