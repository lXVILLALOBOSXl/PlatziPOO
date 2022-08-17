<?php
class Account{
    private $id;
    private $name;
    private $document;
    private $email;
    private $password;

    public function __construct($id, $name, $document, $email, $password){
        $this->id = $id;
        $this->name = $name;
        $this->document = $document;
        $this->email = $email;
        $this->password = $password;
    }
}
?>