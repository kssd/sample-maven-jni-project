package in.sangram.sample;

public class App {
    static {
        System.out.println(System.getProperty("java.library.path"));
        System.loadLibrary("jniJniAdaptor");
    }
}
