public class ChicagoStylePepperoniPizza extends Pizza {

    public ChicagoStylePepperoniPizza() {
        name = "Chicago Style Deep Dish pepperon Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";

        toppings.add("Shredded Mozzarella pepperon");
    }

    @Override
    public void cut() {
        System.out.println("Cutting the pizza into square slices");
    }
}
