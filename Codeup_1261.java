import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int arr[] = new int[10];
		boolean flat = false;
		Scanner sc = new Scanner(System.in);

		for (int i = 0; i < 10; i++) {
			arr[i] = sc.nextInt();
		}
		for (int i = 0; i < 10; i++) {
			if (arr[i] % 5 == 0) {
				flat = true;
				System.out.println(arr[i]);
				break;
			}
		}
		if (flat == false)
			System.out.println(0);
	}
	//
}
