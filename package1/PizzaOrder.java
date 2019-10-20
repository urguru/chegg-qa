
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

