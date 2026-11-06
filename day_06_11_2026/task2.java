package day_06_11_2026;

import java.io.FileWriter;
import java.io.IOException;

interface Logger {
    void log(String message);
}

class ConsoleLogger implements Logger {
    @Override
    public void log(String message) {
        System.out.println(message);
    }
}

class FileLogger implements Logger {
    @Override
    public void log(String message) {
        try (FileWriter fileWriter = new FileWriter("application.log", true)) {
            fileWriter.write(message + "\n");
        } catch (IOException e) {
            System.out.println("Error writing to log file: " + e.getMessage());
        }
    }
}

class OrderService {
    private Logger logger;

    public OrderService(Logger logger) {
        this.logger = logger;
    }

    public void createOrder(String productName) {
        logger.log("Order created: " + productName);
    }
}

public class task2 {
    public static void main(String[] args) {
        Logger consoleLogger = new ConsoleLogger();
        OrderService consoleOrderService = new OrderService(consoleLogger);
        consoleOrderService.createOrder("Laptop");
        consoleOrderService.createOrder("Keyboard");

        Logger fileLogger = new FileLogger();
        OrderService fileOrderService = new OrderService(fileLogger);
        fileOrderService.createOrder("Monitor");
        fileOrderService.createOrder("Mouse");
    }
}
