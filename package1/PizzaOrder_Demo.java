import java.util.Scanner;
public class PizzaOrder_Demo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String size1;
        int cheese1, pepp1, ham1, cheese2, pepp2, ham2, num;
        System.out.println("Enter the size of pizza for pizza1 for pizza1 ");
        size1 = input.nextLine();
        System.out.println("Enter the number of cheese toppings for pizza1");
        cheese1 = input.nextInt();
        System.out.println("the number of pepperoni toppings for pizza1");
        pepp1 = input.nextInt();
        System.out.println("the number of ham toppings for pizza1");
        ham1 = input.nextInt();
        System.out.println("Enter the size of pizza for pizza1 for pizza2");
        input.nextLine();
        String size2;
        size2 = input.nextLine();
        System.out.println("Enter the number of cheese toppings for pizza2");
        cheese2 = input.nextInt();
        System.out.println("the number of pepperoni toppings for pizza2");
        pepp2 = input.nextInt();
        System.out.println("the number of ham toppings for pizza2");
        ham2 = input.nextInt();
        Pizza pizza1 = new Pizza(size1, cheese1, pepp1, ham1);
        Pizza pizza2 = new Pizza(size2, cheese2, pepp2, ham2);
        Pizza pizza3 = new Pizza("small", 0, 0, 0);
        PizzaOrder order = new PizzaOrder(1, pizza1, pizza2, pizza3);
        num = input.nextInt();
        order.SetNumPizzas(num);
        order.setPizza1(pizza1);
        order.setPizza2(pizza2);
        double total = order.calcTotal();
        System.out.println("The total cost is "+ total);
        input.close();
    }
}

class PizzaOrder {
    private int numPizzas;
    private Pizza pizza1;
    private Pizza pizza2;
    private Pizza pizza3;

    // constructor
    public PizzaOrder(int numPizzas, Pizza pizza1, Pizza pizza2, Pizza pizza3) {
        this.numPizzas = numPizzas;
        this.pizza1 = pizza1;
        this.pizza2 = pizza2;
        this.pizza3 = pizza3;
    }

    public void SetNumPizzas(int numPizzas) {
        if (numPizzas > 3)
            this.numPizzas = 3;
        else if (numPizzas < 1)
            this.numPizzas = 0;
    }

    public int getNumpizzas() {
        return numPizzas;
    }

    public void setPizza1(Pizza pizza1) {
        this.pizza1 = pizza1;
    }

    public Pizza getPizza1() {
        return pizza1;
    }

    public void setPizza2(Pizza pizza2) {
        this.pizza2 = pizza2;
    }

    public Pizza getPizza2() {
        return pizza2;
    }

    public void setPizza3(Pizza pizza3) {
        this.pizza3 = pizza3;
    }

    public Pizza getPizza3() {
        return pizza3;
    }

    public double calcTotal() {
        double total = pizza1.CalCost();
        if (numPizzas >= 2)
            total += pizza2.CalCost();
        if (numPizzas == 3)
            total += pizza3.CalCost();
        return total;
    }
}

class Pizza {
    private String sofpizza;
    private int nofcheese, nofpepperoni, nofham;

    // construtor
    public Pizza(String sofpizza, int nofcheese, int nofpepperoni, int nofham) {
        this.sofpizza = sofpizza;
        this.nofcheese = nofcheese;
        this.nofpepperoni = nofpepperoni;
        this.nofham = nofham;
    }
    // method

    public void set_sofpizza(String l) {
        this.sofpizza = l;
    }

    public String get_sofpizza() {
        return sofpizza;
    }

    public void set_nofcheese(int b) {
        this.nofcheese = b;
    }

    public int get_nofcheese() {
        return nofcheese;
    }

    public void set_nofpepperoni(int p) {
        this.nofpepperoni = p;
    }

    public int get_nofpepperoni() {
        return nofpepperoni;
    }

    public void set_nofham(int h) {
        this.nofham = h;
    }

    public int get_nofham() {
        return nofham;
    }

    public double CalCost() {
        if (sofpizza.equalsIgnoreCase("small"))

            return (10 + (2 * nofcheese) + (2 * nofpepperoni) + (2 * nofham));
        else if (sofpizza.equalsIgnoreCase("medium"))
            return (12 + (2 * nofcheese) + (2 * nofpepperoni) + (2 * nofham));
        else
            return (14 + (2 * nofcheese) + (2 * nofpepperoni) + (2 * nofham));
    }

    public String getDiscription() {
        return (" Size of pizza= " + sofpizza + "\n number of cheese= " + nofcheese + "\n number of pepperoni= "
                + nofpepperoni + "\n number of ham=" + nofham);
    }
}