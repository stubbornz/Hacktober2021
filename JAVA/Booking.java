package Practice.Experiment.Unit_2.Exp_2_1;

class Ticket {
    static boolean []bookStatus = {false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};
    int numbOfTicket;
    double totalCost;
    static void bookStatus() {
        int totalSeat = bookStatus.length;
        int bookedSeat = 0;
        System.out.println("\n*Available Seats We have....\n");
        for (boolean b : bookStatus) {
            if(b == true) {
                bookedSeat++;
                System.out.print("T  ");
            } else {
                System.out.print("F  ");
            }
        }

        System.out.println("\n\nTotal Seat we have " + (totalSeat - bookedSeat) + "\n");
    }

    void bookTicket(int post) { //overloading
        if(bookStatus[post - 1] == true) {
            System.out.println("\nyou are not allowed to book this seat as this seat is already booked by some other user\n");
            return;
        }

        numbOfTicket = 1;
        bookStatus[post - 1] = true;
        System.out.println("\nSeat with position " + post + "booked successfully.\n");
    }
    void bookTicket(int post1,int post2) { //overloading
        if(bookStatus[post1 - 1] == true || bookStatus[post2 - 1] == true) {
            System.out.println("\nyou are not allowed to book this seat as this seat is already booked by some other user\n");
            return;
        }

        numbOfTicket = 2;
        bookStatus[post1 - 1] = true;
        bookStatus[post2 - 1] = true;

        System.out.println("\nSeat with position " + post1 + " and " + post2 + " booked successfully.\n");
    }
    void bookTicket(int post1,int post2, int post3) { //overloading
        if(bookStatus[post1 - 1] == true || bookStatus[post2 - 1] == true || bookStatus[post3 - 1] == true) {
            System.out.println("\nyou are not allowed to book this seat as this seat is already booked by some other user\n");
            return;
        }

        numbOfTicket = 3;
        bookStatus[post1 - 1] = true;
        bookStatus[post2 - 1] = true;
        bookStatus[post3 - 1] = true;

        System.out.println("\nSeat with position " + post1 + "," + post2 + "," + post3 + " booked successfully.\n");
    }
    void bookTicket(int post1, int post2, int post3, int post4) { //overloading
        if(bookStatus[post1 - 1] == true || bookStatus[post2 - 1] == true || bookStatus[post3 - 1] == true || bookStatus[post4 - 1] == true) {
            System.out.println("\nyou are not allowed to book this seat as this seat is already booked by some other user\n");
            return;
        }

        numbOfTicket = 4;
        bookStatus[post1 - 1] = true;
        bookStatus[post2 - 1] = true;
        bookStatus[post3 - 1] = true;
        bookStatus[post4 - 1] = true;

        System.out.println("\nSeat with position " + post1 + "," + post2 + "," + post3 + "," + post4 + " booked successfully.\n");

    }

    void billing(double price) { // overriding 
        double sumPrice = numbOfTicket * price;
        double tax = sumPrice * 20/100;
        totalCost = sumPrice + tax;
        
        System.out.println("\t Cost of each Tickets : " + price);
        System.out.println("\t Number of seat booked : " + numbOfTicket);
        System.out.println("\t Applied 20% of Tax on Tickets : " + tax);
        System.out.println("\t Total cost : " + totalCost);
        
    }
}

class Movies extends Ticket {

    void billing(double price) { //overriding 
        if(numbOfTicket >= 2) {
            double applyDiscount = totalCost * (50 / 100);
            
            System.out.println("*Billing of Booked Tickets");
            super.billing(price);

            System.out.println("*Applied discount of 50%");
            totalCost = totalCost - applyDiscount;
            super.billing(price);

        } else {
            System.out.println("*Billing of Booked Tickets");
            super.billing(price);
        }
    }
}

public class Booking {
    
    public static void main(String[] args) {
        System.out.println("\n*Booking Ticket of user no 1.");
        Movies.bookStatus();
        
        Movies user1 = new Movies();
        user1.bookTicket(19);
        user1.billing(200);

        System.out.println("\n*Booking Ticket of user no 2.");
        Movies.bookStatus();

        Movies user2 = new Movies();
        user2.bookTicket(2,3);
        user2.billing(450);

        System.out.println("\n*Booking Ticket of user no 3.");
        Movies.bookStatus();

        Movies user3 = new Movies();
        user3.bookTicket(5,6,7);
        user3.billing(150);


        System.out.println("\n*Booking Ticket of user no 4.");
        Movies.bookStatus();

        Movies user4 = new Movies();
        user4.bookTicket(11,12,13,14);
        user4.billing(250);

        System.out.println("\n*Booking Ticket of user no 5.");
        Movies.bookStatus();

        Movies user5 = new Movies();
        user5.bookTicket(5);
        user5.billing(110);

    }
}
