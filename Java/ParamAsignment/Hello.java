class Hello {
    static int a = 1;
    static int ary[] = new int[1];
    static String[] b = new String[1];
    static String c = new String();
    static Obj obj = new Obj();
    public static void main(String[] args) {
        System.out.println("How to assign a param?\n");

        System.out.println("a = " + a);
        getValue(a);
        System.out.println("a = " + a);

        System.out.println("ary[0] =" + ary[0]);
        getValue(a);
        System.out.println("ary[0] =" + ary[0]);

        b[0] = "init";
        System.out.println("b[0] =" + b[0]);
        getString(b);
        System.out.println("b[0] =" + b[0]);

        c = "init";
        System.out.println("c =" + c);
        getString(c);
        System.out.println("c =" + c);

        System.out.println("obj.a =" + obj.a + "  obj.b = " + obj.b);
        getObj(obj);
        System.out.println("obj.a =" + obj.a + "  obj.b = " + obj.b);
    }

    public static void getValue(int param) {
        param = 10;
        return;
    }

    public static void getValue(int[] param) {
        param[0] = 10;
        return;
    }

    public static void getString(String[] param) {
        param[0] = "10";
        return;
    }

    public static void getString(String param) {
        param = "10";
        return;
    }

    public static void getObj(Obj param) {
        param.a = 10;
        param.b = "10";
        return;
    }

    private static class Obj {
        public int a = 1;
        public String b = "init";
        public Obj() {
        }
    }
}
