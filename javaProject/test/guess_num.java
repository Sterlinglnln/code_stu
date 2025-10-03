public class guess_num {
    public static void main(String[] args) {
        // 随机生成一个1到100之间的整数
        int secretNumber = (int) (Math.random() * 100) + 1;
        // 用户输入数字
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        int guess;
        System.out.println("请输入您猜测的数字（1-100）：");
        guess = scanner.nextInt();

        // 最多输入10次
        int attempts = 10;
        while (guess != secretNumber && attempts > 1) {
            if (guess < secretNumber) {
                System.out.println("您猜的数字太小了，请再试一次：");
            } else {
                System.out.println("您猜的数字太大了，请再试一次：");
            }
            guess = scanner.nextInt();
            attempts--;
        }
        if (guess == secretNumber) {
            System.out.println("恭喜您，猜对了！");
        } else {
            System.out.println("很遗憾，您没有猜对。正确答案是：" + secretNumber);
        }
        scanner.close();
    }
}
