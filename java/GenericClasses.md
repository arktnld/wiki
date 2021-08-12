TYPE PARAMETER NAMES

        ●  E - Element (used extensively by Java Collections,
                        you can't pass primitive data types.)

        ●  T - Type

        ●  K - Key

        ●  V - Value

        ●  N - Number

        ●  A - Accumulation

        ●  R - Result

        ●  X - Exception

        ●  A sequence of arbitrary types
           can be used T, U, V or T1, T2, T3



SYNTAX FOR A GENERIC CLASS

        className<T1, T2, .., Tn>{/*..*/}

        ● Type parameters ar delimited by angle brackets.

        ● The type follows the class name.

        ● The class can have multiple type parameters


        Comparable Using The Generic Implementation

            public interface Comparable {
                public int compareTo(Object o);
            }

            public interface Comparable<T> {
                public int compareTo(<T> o);
            }



        Generic Interfaces

            ● Interfaces declared with type parameters are generic

            ● They expose members of a class to be used by other classes

            ● They force a class to implement specific functionality


        Syntax For A Generic Method

            public static <E> void print(E[] list) {}


        Syntax for a Generic Interface

            public interface MyInterface <E> {}

            // interface with 2 types, a key and value
            public interface MyInterface <K, V> {}


        Bounded Generic Types

        ● It is possible to have restrictions on type parameters

        ● Bounded types allow compile time onforced restrictions

        ● These restrictions are called bounds

        ● They are specitied using the keyword extends

        ● Type parameters can be bounded by a superclass or an interface

        ● Bounds increase the number of permitted method calls

        ● An unbounded type may only call the object methods

        ● By applying a syperclass, the accessible members of that
          type are also available

                public <T extends Number> void print(T t) {}

                print(new Integer(20)); //ok

                print("text"); // error

                public <T extends Interger & Double> void print(T t) {}

TYPE ERASURE

        ● Type erasure is the process of removing type information
          from a generic code.

        ● For example, List<Integer> is converted to nongeneric List

        ● This is referred to as the raw type

        ● this allows for backward compatibility

        ● A raw type is the name of a generic class without any type arguments

        ● A nongeneric class or interface type is not a raw type

        ● Raw types show up in legacy code

        ● Using raw types get pre-generics behavior

        ● This usually means you work with only objects


                // generic integer list
                List<Integer> list = new List<Integer>();

                // raw type generic list
                List rawList = new List();



WILDCARDS


    A wildcard is a type argument that uses a question mark, ?, which may or may
    not have an upper or lower bound.

    Type arguments without bounds are useful, but have limitations. If ou declare
    a List of unbounded type you can read from it but not write to it.

        // unbounded wildcard
        List<?> stuff = new ArrayList<>();
        // stuff.add("abc");            // no additions allowed
        // stuff.add(new Object());     // no additions allowed
        // stuff.add(3);                // no additions allowed
        int numElements = stuff.size(); // numElements is zero

    Any method that takes a List<?> as an argument will accept any list at all
    when invoked.

    The question mark forms the basis for bounding the types. This is where the
    fun stats.



UPPER BOUNDED WILDCARDS

    An upper bounded wildcard uses the 'extends' keyword to set a superclass limit.
    To define a list of numbers that will allow ints, longs, doubles, and even
    BigDecimal instances to be added to it, you can use Numbers.

        List<? extends Number> numbers = new ArrayList();
        /* numbers.add(3);                    still cannot add values
          numbers.add(3.14159);              still cannot add values
          numbers.add(new BigDecimal("3"));  still cannot add values */

    The problem is that when you retrieve the value, the compiler has no idea what
    type it is, only that it extends Number. You can define a method argument that
    takes List<? extends Number> and then invoke the method with the different types
    of lists.

        // using an upper bound
        private static double sumList(List<? extends Number> list) {
            // Number num = list.get(0);
            return list.stream().mapToDouble(Number::doubleValue).sum();
        }

        public static void main(String[] args) {
            List<Integer> ints = Arrays.asList(1, 2, 3);
            List<Double>  doubles = Arrays.asList(1.0, 2.0, 3.0);
            List<BigDecimal> bigDecimals = Arrays.asList(new BigDecimal("1.0"),
                                                         new BigDecimal("2.0"),
                                                         new BigDecimal("3.0"));

            System.out.printf("ints sum is        %s%n", sumList(ints));
            System.out.printf("doubles sum is     %s%n, sumList(doubles));
            System.out.printf(big decimals sum is %s%n, sumList(bigDecimals));
        }



LOWER BOUNDED WILDCARDS

   A lower bounded wildcard means any ancestor of class is acceptable. You use the
   'super' keyword with the wildcard to specify a lower bound. The implicationn,
   in the case of a List<? super Number>, is that the reference could represent
   List<Number> of List<Object>.

   Public void numsUpTo(Integer num, List<? super Integer> output) {
       IntStream.rangeClosed(1, num).forEach(output::add);
   }

   Making the second argument of type List<? super Integer>, the supplied list
   can be of type List<Integer>, List<Number>, or even List<Object>

   public static void main(String[] args) {
       ArrayList<Integer> integerList = new ArrayList<>();
       ArrayList<Number>  numberList = new ArrayList<>();
       ArrayList<Object>  objectList = new ArrayList<>();

       numsUpTo(5, integerList);
       numsUpTo(5, numberList);
       numsUpTo(5, objectList);
   }

   With the upper bounded list, we were extracting values and using them. With the
   lower bounded list, we supplied them. This combination has a traditional name: PECS



PECS


    The term PECS stands for "Producer Extends, Consumer Super", which an odd acronym
    coined by Joshua Block in his Effectie java book, but provides a mnemonic on what
    to do. It means that if a parameterized type represents a producer, use extends.
    If it represents a consumer, use super. if the parameter is both, don't use wildcards
    at all──the only type that satisfies both requirements is the explicit type itself.

    The advice boils down to:

        · Use extends when you only get values out of a data structure
        · Use super when you only put values onto a data structure
        · Use an explicit type when you plan to do both

MULTIPLE BOUNDS

    The bounds are separated by an ampersand when they are defined:

        T extends Runnable & AutoCloseable

    You can have as many interface bounds as you like, but only one can be a class.
    If you have a class as a nounds, it must be first in the list.


EXEMPLE GENERIC METHODS

            // lower bounded wildcard in the Comparator
            // the return type is Optional<T> because may be empty
            Optional<T> max(Comparator<? super T> comparator)


            public class GenericMethodExample {

                // using comparable to compare two generic elements
                public static <T extends Comparable<T>> int countGreaterThan(T[] list, T elem)
                {
                    int count = 0;
                    for(T element : list)
                    {
                        // comparable extension using compareTo
                        if(element.compareTo(elem) > 0)
                            count++;
                    }
                    return count;
                }

                public static <E> void print(E[] list)
                {
                    for(E element : list)
                    {
                        System.out.print(element + " ");
                    }
                    System.out.println("");
                }
                public static void main(String[] args) {
                    Integer[] ints = {10, 20, 30, 40, 50, 60, 70, 80};
                    String[] daysOfWeek = {"Monday", "Tuesday", "Wednesday", "Thursday",
                        "Friday", "Saturday", "Sunday"};

                    print(ints);
                    print(daysOfWeek);
                    System.out.println(countGreaterThan(daysOfWeek,"S"));

                }
            }

