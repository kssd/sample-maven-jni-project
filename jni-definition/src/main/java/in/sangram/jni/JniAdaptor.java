package in.sangram.jni;

public class JniAdaptor {
  public static String sync(){
    return "ADAPTOR: Sync";
  }

  public native int intMethod(int n);
  public native boolean booleanMethod(boolean flag);
  public native String stringMethod(String text);
  public native int intArrayMethod(int[] arr);

}
