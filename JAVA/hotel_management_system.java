import java.util.Scanner;

class HotelRoom {
    private int roomNumber;
    private boolean isBooked;
    private String guestName;

    public HotelRoom(int roomNumber) {
        this.roomNumber = roomNumber;
        this.isBooked = false;
        this.guestName = "";
    }

    public int getRoomNumber() {
        return roomNumber;
    }

    public boolean isBooked() {
        return isBooked;
    }

    public String getGuestName() {
        return guestName;
    }

    public void bookRoom(String guestName) {
        this.isBooked = true;
        this.guestName = guestName;
        System.out.println("Room " + roomNumber + " has been booked by " + guestName);
    }

    public void checkout() {
        this.isBooked = false;
        this.guestName = "";
        System.out.println("Guest has checked out from room " + roomNumber);
    }
}

public class HotelManagementSystem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        HotelRoom[] rooms = new HotelRoom[10]; // Assuming there are 10 rooms in the hotel

        // Initialize hotel rooms
        for (int i = 0; i < rooms.length; i++) {
            rooms[i] = new HotelRoom(i + 1);
        }

        while (true) {
            System.out.println("\nHotel Management System");
            System.out.println("1. Check Room Availability");
            System.out.println("2. Book a Room");
            System.out.println("3. Checkout");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Available Rooms:");
                    for (HotelRoom room : rooms) {
                        if (!room.isBooked()) {
                            System.out.println("Room " + room.getRoomNumber() + " is available");
                        }
                    }
                    break;
                case 2:
                    System.out.print("Enter room number to book: ");
                    int roomNumber = scanner.nextInt();
                    if (roomNumber >= 1 && roomNumber <= rooms.length) {
                        System.out.print("Enter guest name: ");
                        scanner.nextLine(); // Consume newline character
                        String guestName = scanner.nextLine();
                        rooms[roomNumber - 1].bookRoom(guestName);
                    } else {
                        System.out.println("Invalid room number");
                    }
                    break;
                case 3:
                    System.out.print("Enter room number to checkout: ");
                    int checkoutRoomNumber = scanner.nextInt();
                    if (checkoutRoomNumber >= 1 && checkoutRoomNumber <= rooms.length) {
                        rooms[checkoutRoomNumber - 1].checkout();
                    } else {
                        System.out.println("Invalid room number");
                    }
                    break;
                case 4:
                    System.out.println("Exiting...");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 4.");
            }
        }
    }
}
