public class ChicagoStyleClamPizza extends Pizza{
    public ChicagoStyleClamPizza(){
        name = "Chicago Style Deep Dish clam Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";

        toppings.add("Shredded Mozzarella clam");
    }

    @Override
    public void cut(){
        System.out.println("Cutting the pizza into square slices");
    }
}
