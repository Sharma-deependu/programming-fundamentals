public class Bank {
	public static void main(String args[]) {
		int ch = 1;
		Customer ob[] = new Customer[5];
		int i = 0;
		while (ch != 0) {
			Input.komal.println("Enter your choice :-");
			Input.komal.println("1 for create new Account");
			Input.komal.println("2 for Display All Account");
			Input.komal.println("3 for depost  Account");
			Input.komal.println("4 for withdrawl  Account");
			Input.komal.println("5 to delete an existing Account");
			Input.komal.println("0 for exit  Account");
			ch = Input.sahil.nextInt();
			if (ch == 1) {
				ob[i] = new Customer();

				ob[i].takeData();
				i++;
			} else if (ch == 2) {
				System.out.println("Congratulations! Your account has been opened.");
				for (int j = 0; j < i; j++) {
					System.out.println("\t\t\n");
					ob[j].show();
				}
			} else if (ch == 3) {
				System.out.println("Enter the Account Number:");
				String ac = Input.sahil.next();
				Input.komal.println("Enter The amount you want to deposit");
				float t = Input.sahil.nextFloat();
				for (int m = 0; m < i; m++) {
					if (ob[m].deposit(t, ac) == false) {
						break;
					}
				}

			} else if (ch == 4) {
				System.out.println("Enter the Account Number:");
				String acc = Input.sahil.next();
				Input.komal.println("Enter The amount you want to withdrawl");
				float t = Input.sahil.nextFloat();
				for (int n = 0; n < i; n++) {
					if (ob[n].withdrawl(t, acc) == false) {
						break;
					}
				}
			} else if (ch == 0) {
				System.out.println("Thank You for your Visit. Please Visit Again.");
			}
			if (ch == 5) {
				ob[i].deleteaccount();
				i--;
			}
		}
	}
}
