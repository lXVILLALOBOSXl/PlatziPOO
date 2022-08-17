using System;
using System.Collections.Generic;

namespace CSharp
{
    class Route
    {
        private int id;
        private List<double> start = new List<double>();
        private List<double> end = new List<double>(); 

        public Route(int id, List<double> start, List<double> end)
        {
            this.id = id;
            this.start = start;
            this.end = end;
        }
    }
}