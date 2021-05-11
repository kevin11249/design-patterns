package strategy;

public class MiniDuckSimulator {
    public static void main(String[] args) {
        Duck mallDuck = new MallardDuck();
        mallDuck.performFly();
        mallDuck.performQuack();

        Duck model = new ModelDuck();
        model.performFly();
        model.setFlyBehavior(new FlyRocketPowered());
        model.performFly();
    }
}
