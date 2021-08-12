            It's time to build things with...


                                       ██╗ █████╗ ██╗   ██╗ █████╗
                                       ██║██╔══██╗██║   ██║██╔══██╗
                                       ██║███████║██║   ██║███████║
                                  ██   ██║██╔══██║╚██╗ ██╔╝██╔══██║
                                  ╚█████╔╝██║  ██║ ╚████╔╝ ██║  ██║
                                   ╚════╝ ╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝


IDENTIFIER CONVENTIONS

Classes start with uppercase character.
class MyClass

methods and variables start with lowercase character.
void doSomething(String withThis) { }

int myVar = 5;

Constants are al uppercase.
public static final String  FIRSTNAME = "Cleber"



HELPER CLASS EXAMPLE

java.lang.Double supports double values.

        double doubleValue = 156.5d;

        Double doubleObj   = new Double(doubleValue);

        byte byteValue     = doubleObj.byteValue();

        int intValue       = doubleObj.intValue();

        float floatValue   = doubleObj.floatValue();

        String stringValue = doubleObj.toString();



CONVERT NUMBERS AND CAST

        int intValue1 = 56;

        // You get a copy not a reference
        int intValue1 = intValue2;

        // You don't need to cast
        long longValue = intValue1;

        // For lowers types you need to cast
        byte byteValue = (byte) intValue3;

VARIABLES INITIALIZATION

Local variable always have to be initialized,
and global variable can have the default value
of a variable. Boolean have a default value of
false and int have the default zero.

VARIABLES REVERSION

        boolean b = false;

        // you get a reversed variable true
        boolean b2 = !b;



TERNARY OPERATOR

        String s = condition ? trueValue : falseValue;


HANDLING EXCEPTIONS WITH TRY AND CATCH


You can do an simple try and catch

        String welcome = "Welcome!";
        char[] chars = welcome.toCharArray();

        try {
            char lastChar = chars[chars.lenght - 1];
            // you get a array index error
            system.out.println(lastChar);
        } catch (Exception e) {
            // Exception class catch all types of error
            // this will print the standard message error
            e.printStackTrace();
        }

And you can be more specific with try and catch

        String welcome = "Welcome!";
        char[] chars = welcome.toCharArray();

        try {

            if (chars.length < 10) {
                // Create a custom exception
                throw (new Exception("My cystom message"));
            }

            char lastChar = chars[chars.length - 1];
            // you get a array index error
            system.out.println(lastChar);

            // this will cause a string index error
            String sub = welcome.substring(10);
        } catch (ArrayIndexOutOfBoundsExceptions e) {
            // With the above class you will catch
            // a specific array error
            System.out.println("Array index problem!");
        } catch (StringOutOfBoundsExceptions e) {
            // With the above class you will catch
            // a specific string error
            System.out.println("Array index problem!");
        } catch (Exception e) {
            // Catch the custom exception
            // and print the custom exception
            System.out.println(e.getMessage());
        }

 Explore the java class library and documentations
 and you will find that certain methods tell you
 "this method can throw this kind of exception".
 It's up to you to add the code for your application
 to handle those exceptions elegantly.



USAGE OF EXCEPTION

    IllegalArgumentException            Non-null parameter value is inappropriate

    IllegalStateException               Object state is inappropriate for method invocation

    NullPointerException                Parameter value is null where phohibited

    IdexOutOfBoundsException            Index parameter value is out of range

    ConcurrentModificationException     Concurrent modification of an object has been
                                        detected where it is prohibited

    UnsupportedOperationException       Object does not support method



MULTIPLE VALUES IN METHOD CALL

        static double addValues(String ... values) {
            // with the ... you can work with
            // a array o any value
            double result = 0;
            for (String value : values) {
                double d = Double.parseDouble(value);
                result += d;
            }
            return result;
        }

        addValue(s1, s2, s3);



COPY ARRAY WITH SYSTEM.ARRAY

        int[] sized  = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int[] copied = new int![pic](5);
        // this will copy 5-9 to copied array
        System.arraycopy(sized, 5, copied, 0, 5);
        for (int value : coped) {
            System.out.println(value);
        }


MANAGING DATA WITH HASH MAP

       // instantiate object by interface using
       // implement class
       Map<String, String> map = new HashMap<>();

       // put values
       map.put("California", "Sacramento"); map.put("Oregon", "Salem");
       map.put("Washington", "Olympia");
       System.out.println(map);

       map.put("Alaska", "Juneau");
       System.out.println(map);

       // take value referred to Oregon
       String cap = map.get("Oregon");
       String cap = map.get("The capitol of Oregon is " + cap);

       // remove California and his reference
       map.remove("California");
       System.out.println(map);

USING FOREACH WITH COLLECTION AND HASHMAP

        List<String> list = new ArrayList<~>();
        list.add("California");
        list.add("Oregon");
        list.add("Washington");

        // common way to use iterator
        for (String value : list) {
            System.out.prinltln(value);
        }

        // simplified way for java version 8
        list.forEach(System.out::println);


       Map<String, String> map = new HashMap<>();
       map.put("California", "Sacramento"); map.put("Oregon", "Salem");
       map.put("Washington", "Olympia");

       // generate the set of keys for iteration
       Set<String> keys = map.keySet();
       for (String key : keys) {
           System.out.println("The capitol of " + key + " is " + map.get(key));
       }



ENCAPSULATION

     About Encapsulation

     ●  Packaging complex functionality for ease of programming.

     ●  Access to individual functions can be restricted

     ●  Hide complex functionality in methods

     ●  The true nature of encapsulated data may also be hidden


     Benefits of Encapsulation

     ●  Breaking functionality into small, maintainable units

     ●  Grouping funcions and data together

     ●  Supporting testing of software at a granular level



 POLYMORPHISM

     About Polymorphism

     ●  Addressses an object as either syper- or sybtype

     ●  Writes methods that accepts supertype as arguments

     ●  Passes instances of subtypes

     ●  increases code flexibility and reusability



JAVA IO LIB

        // this will get the file
        Path sourceFile = Paths.get("files", "f1.txt");
        Path targetFile = Paths.get("files", "f2.txt");

        // replate override of f2.txt with f1.txt
        // or create f2.txt if not exist
        Files.copy(sourceFile, targetFile, standardCopyOption.REPLACE_EXISTING);
