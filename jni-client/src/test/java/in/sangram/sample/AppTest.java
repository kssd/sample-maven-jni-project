package in.sangram.sample;

import in.sangram.jni.JniAdaptor;
import org.junit.Assert;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;

public class AppTest {

    private JniAdaptor adaptor;

    @BeforeClass
    public static void loadSO() {
        App app = new App();
    }

    @Before
    public void initializeAdaptor() {
        adaptor = new JniAdaptor();
    }

    @Test
    public void testApp() {
        Assert.assertTrue("Square", 9 == adaptor.intMethod(3));
    }
}
