using System;

namespace CSharp
{
    class Route
    {
        private int id;
        private ArrayList<Double> start;
        private ArrayList<Double> end;

        public Route(int id, ArrayList<Double> start, ArrayList<Double> end)
        {
            this.id = id;
            this.start = start;
            this.end = end;
        }
    }
}