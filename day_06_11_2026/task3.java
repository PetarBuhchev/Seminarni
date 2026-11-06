package day_06_11_2026;

interface Message {
    void send(String recipient, String content);
}

class EmailMessage implements Message {
    @Override
    public void send(String recipient, String content) {
        System.out.println("Sending EMAIL to " + recipient + ": " + content);
    }
}

class SMSMessage implements Message {
    @Override
    public void send(String recipient, String content) {
        System.out.println("Sending SMS to " + recipient + ": " + content);
    }
}

class PushNotification implements Message {
    @Override
    public void send(String recipient, String content) {
        System.out.println("Sending PUSH Notification to " + recipient + ": " + content);
    }
}

class MessageFactory {
    public static Message createMessage(String type) {
        switch (type) {
            case "EMAIL":
                return new EmailMessage();
            case "SMS":
                return new SMSMessage();
            case "PUSH":
                return new PushNotification();
            default:
                throw new IllegalArgumentException("Unknown message type: " + type);
        }
    }
}

public class task3 {
    public static void main(String[] args) {
        Message email = MessageFactory.createMessage("EMAIL");
        Message sms = MessageFactory.createMessage("SMS");
        Message push = MessageFactory.createMessage("PUSH");

        email.send("student@example.com", "Exam tomorrow!");
        sms.send("+359888123456", "Your code is ready.");
        push.send("Student123", "New assignment available.");
    }
}
