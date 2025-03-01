<?php

require ('PetShop.php');

class Aksesoris extends PetShop
{
    // Atribut-atribut yang akan dipakai pada main.php
    private $jenis = "";
    private $bahan = "";
    private $warna = "";

    // CONSTRUCTOR dengan parameter
    public function __construct($jenis = "", $bahan = "", $warna = "")
    {
        parent::__construct();
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    // GETTER SETTER

    // Setter ID
    public function set_jenis($jenis)
    {
        $this->jenis = $jenis;
    }

    // Getter ID
    public function get_jenis()
    {
        return $this->jenis;
    }

    // Setter nama produk
    public function set_bahan($bahan)
    {
        $this->bahan = $bahan;
    }

    // Getter nama produk
    public function get_bahan()
    {
        return $this->bahan;
    }

    // Setter stok produk
    public function set_warna($warna)
    {
        $this->warna = $warna;
    }

    // Getter stok produk
    public function get_warna()
    {
        return $this->warna;
    }

    // DESTRUKTOR
    public function __destruct()
    {
        
    }
}
