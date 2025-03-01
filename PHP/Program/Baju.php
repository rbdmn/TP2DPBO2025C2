<?php

require ('Aksesoris.php');

class Baju extends Aksesoris
{
    // Atribut-atribut yang akan dipakai pada main.php
    private $untuk = "";
    private $size = '-';
    private $merk = "";

    // CONSTRUCTOR dengan parameter
    public function __construct($untuk = "", $size = '', $merk = "")
    {
        parent::__construct();
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    // GETTER SETTER

    // Setter ID
    public function set_untuk($untuk)
    {
        $this->untuk = $untuk;
    }

    // Getter ID
    public function get_untuk()
    {
        return $this->untuk;
    }

    // Setter nama produk
    public function set_size($size)
    {
        $this->size = $size;
    }

    // Getter nama produk
    public function get_size()
    {
        return $this->size;
    }

    // Setter stok produk
    public function set_merk($merk)
    {
        $this->merk = $merk;
    }

    // Getter stok produk
    public function get_merk()
    {
        return $this->merk;
    }

    // DESTRUKTOR
    public function __destruct()
    {
        
    }
}
