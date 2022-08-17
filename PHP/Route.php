<?php
class Route{
    private $id;
    private $start;
    private $end;

    public function __construct($id, $start, $end){
        $this->id = $id;
        $this->start = $start;
        $this->end = $end;
    }
}
?>