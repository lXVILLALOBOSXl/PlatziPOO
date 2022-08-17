import java.util.ArrayList;

public class Route {
    private Integer id;
    private ArrayList<Double> start;
    private ArrayList<Double> end;

    public Route(Integer id, ArrayList<Double> start, ArrayList<Double> end) {
        this.id = id;
        this.start = start;
        this.end = end;
    }
}
