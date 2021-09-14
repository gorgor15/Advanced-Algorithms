package coin;

import java.util.Scanner;

public class coin1 {
	public static void main(String[] args) {
		Scanner a = new Scanner(System.in);
		int N = a.nextInt();
		int K = a.nextInt();
		int cnt = 0;
		int coin[] = new int[N+1];
		for(int i=1;i<=N;i++) {
			coin[i]=a.nextInt();
		}
		
		for(int i=N;i>=1;i--) {
			cnt += K/coin[i];
			K %= coin[i];
		}
		System.out.println(cnt);
		
	}
}
