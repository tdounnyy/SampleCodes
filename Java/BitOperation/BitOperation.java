class BitOperation {
    private static final int MSK_BIT_1 = 0x01;
    private static final int MSK_BIT_2 = 0x01<<1;
    private static final int MSK_BIT_3 = 0x01<<2;

    private static int a = 0;
    public static void main(String[] args) {
        System.out.println("java bit operation test\n");

        System.out.println("MSK_BIT_1 = " + MSK_BIT_1);
        System.out.println("MSK_BIT_2 = " + MSK_BIT_2);
        System.out.println("MSK_BIT_3 = " + MSK_BIT_3);
        System.out.println("a = " + a);
        System.out.println("~a = " + ~a);

        // Java style to turn bit flag
        a |= MSK_BIT_1;
        a |= MSK_BIT_2;
        a |= MSK_BIT_3;
        a &= ~MSK_BIT_2;

        System.out.println("a = " + a);

        // Java style to check bit status
        if ((a & MSK_BIT_1)== MSK_BIT_1) 
            System.out.println("true");
        else
            System.out.println("false");

        if ((a & MSK_BIT_2)== MSK_BIT_2) 
            System.out.println("true");
        else
            System.out.println("false");

        if ((a & MSK_BIT_3)== MSK_BIT_3) 
            System.out.println("true");
        else
            System.out.println("false");

    }
}
