<?php
class Car{
    private $id;
    private $license;
    private $driver;
    private $numberOfPassengers;

    public function __construct($id, $license, $driver, $numberOfPassengers){
        $this->id = $id;
        $this->license = $license;
        $this->driver = $driver;
        $this->numberOfPassengers = $numberOfPassengers;
    }
}
?>