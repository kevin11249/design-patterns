public class ChicagoStyleVeggiePizza extends Pizza{
    public ChicagoStyleVeggiePizza() {
        name = "Chicago Style Deep Dish veggie Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";

        toppings.add("Shredded Mozzarella veggie");
    }

    @Override
    public void cut() {
        System.out.println("Cutting the pizza into square slices");
    }
}
