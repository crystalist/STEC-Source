public class Core {

	public static void main(String[] args) {
		int coreNum = Runtime.getRuntime().availableProcessors();
		System.out.println("Number of cores are: " + coreNum);

		long maxMemory = Runtime.getRuntime().maxMemory();
		System.out.println("MAX size of the heap (MB): " + maxMemory / 1048576);

		long freeMemory = Runtime.getRuntime().freeMemory();
		System.out.println("Free size of the heap (MB): " + freeMemory / 1048576);
	}
}

