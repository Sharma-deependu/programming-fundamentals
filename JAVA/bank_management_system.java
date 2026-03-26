public class Customer {
	String fname;
	String lname;
	String phone;
	String account;
	String address;
	float balance;

	public void takeData() {
		Input.komal.println("Enter your First Name:");
		fname = Input.sahil.next();
		Input.komal.println("Enter your Last Name:");
		lname = Input.sahil.next();
		Input.komal.println("Enter your Phone Number:");
		phone = Input.sahil.next();
		Input.komal.println("Enter your Address:");
		address = Input.sahil.next();
		Input.komal.println("Enter your Account Number:");
		account = Input.sahil.next();
		Input.komal.println("Enter your Opening Balance:");
		balance = Input.sahil.nextFloat();
	}

	public void show() {
		System.out.println("Name :" + fname + " " + lname);
		System.out.println("Phone Number : " + phone);
		System.out.println("Address :" + address);
		System.out.println("Account Number you wish to choose :" + account);
		System.out.println("Opening Balance of your Account :" + balance);
	}

	public boolean deposit(float amount, String acc) {
		if (acc.equals(account) == true) {
			balance += amount;
			System.out.println("Amount sucessfully deposited.");
			return false;

		} else {
			System.out.println("Invalid Entry. Account number doesnot exist.");
			return true;
		}

	}

	public boolean withdrawl(float amount, String ac) {
		if (ac.equals(account) == true) {
			balance -= amount;
			System.out.println("Amount sucessfully withdrawn.");
			return false;
		} else {
			System.out.println("Invalid Entry. Account number doesn't exist.");
			return true;
		}
	}

	public void deleteaccount(String accountno) {
		System.out.println("Enter the customer account number you want to delete account:");
		if (accountno.equals(account) == true) {
			delete.account(accountno);
			System.out.println("Account successfully deleted.");
		} else {
			System.out.println("Invalid Entry. Account number doesn't exist.");
		}
	}
}
