package day_06_11_2026;

abstract class PaymentMethod {
    public void pay(double amount) {
        if (amount <= 0) {
            System.out.println("Invalid payment amount!");
            return;
        }
        processPayment(amount);
    }

    public abstract void processPayment(double amount);
}

class CreditCard extends PaymentMethod {
    @Override
    public void processPayment(double amount) {
        System.out.println("Processing credit card payment: " + amount);
    }
}

class PayPal extends PaymentMethod {
    @Override
    public void processPayment(double amount) {
        System.out.println("Processing PayPal payment: " + amount);
    }
}

public class task1 {
    public static void main(String[] args) {
        PaymentMethod creditCard = new CreditCard();
        PaymentMethod payPal = new PayPal();

        creditCard.pay(150.0);
        payPal.pay(75.5);
        creditCard.pay(-20.0);
    }
}
