
// https://www.programiz.com/java-programming/online-compiler/

class Main {
    // 💡 RECOMMENDATION: Make Processor a static nested class 
    public static class Processor { // Added 'static'
        private final Object lock = new Object(); // Đối tượng khóa riêng
    
        public void doWork() {
            // ... non-synchronized work ...
    
            synchronized (lock) {
                // ... work accessing shared resources ...
                System.out.println("Entering synchronized block...");
            }
        }
    }


    public static void main(String[] args) {
        System.out.println("Try programiz.pro");
        // No change needed here, as static nested classes are instantiated directly
        Processor process = new Processor(); 
        process.doWork(); 
    }
}
