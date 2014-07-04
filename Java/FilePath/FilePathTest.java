import java.io.File;
import java.lang.Exception;

class FilePathTest {
    public static void main(String[] args) {
        System.out.println("FilePathTest\n");


        String target = "../../../../aurora/Aurora_SystemUI/stash";
        try {
            File file = new File(target);

            //System.out.println("can read? " + file.canRead());
            System.out.println("target " + target);
            System.out.println("getPath() " + file.getPath());
            File.getCanonicalPath() resolves symlinks

// Quote from stackoverflow.com
//A canonical pathname is both absolute and unique. The precise definition of canonical form is system-dependent. This method first converts this pathname to absolute form if necessary, as if by invoking the getAbsolutePath() method, and then maps it to its unique form in a system-dependent way. This typically involves removing redundant names such as "." and ".." from the pathname, resolving symbolic links (on UNIX platforms), and converting drive letters to a standard case (on Microsoft Windows platforms).
//I assume you can compare the result of getCanonicalPath() and getAbsolutePath().
            System.out.println("getCanonicalPath() " + file.getCanonicalPath());
            System.out.println("getAbsolutePath() " + file.getAbsolutePath());
        } catch (Exception e) {
            System.out.println("Exception\n");
        }
        
    }
}
