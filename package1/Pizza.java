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