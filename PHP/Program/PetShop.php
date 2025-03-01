<?php

class Petshop
{
    // Atribut-atribut yang akan dipakai pada main.php
    private $ID = 0;
    private $nama_produk = "";
    private $stok_produk = 0;
    private $harga_produk = 0.0;
    private $foto_produk = "";

    // CONSTRUCTOR dengan parameter
    public function __construct($ID = 0, $nama_produk = "", $stok_produk = 0, $harga_produk = 0.0, $foto_produk = "")
    {
        $this->ID = $ID;
        $this->nama_produk = $nama_produk;
        $this->stok_produk = $stok_produk;
        $this->harga_produk = $harga_produk;
        $this->foto_produk = $foto_produk;
    }

    // GETTER SETTER

    // Setter ID
    public function set_id($ID)
    {
        $this->ID = $ID;
    }

    // Getter ID
    public function get_id()
    {
        return $this->ID;
    }

    // Setter nama produk
    public function set_nama_produk($nama_produk)
    {
        $this->nama_produk = $nama_produk;
    }

    // Getter nama produk
    public function get_nama_produk()
    {
        return $this->nama_produk;
    }

    // Setter stok produk
    public function set_stokProduk($stok_produk)
    {
        $this->stok_produk = $stok_produk;
    }

    // Getter stok produk
    public function get_stok_produk()
    {
        return $this->stok_produk;
    }

    // Setter harga produk
    public function set_hargaProduk($harga_produk)
    {
        $this->harga_produk = $harga_produk;
    }

    // Getter harga produk
    public function get_harga_produk()
    {
        return $this->harga_produk;
    }

    // Setter foto produk
    public function set_fotoProduk($foto_produk)
    {
        $this->foto_produk = $foto_produk;
    }

    // Getter foto produk
    public function get_fotoProduk()
    {
        return $this->foto_produk;
    }

    // DESTRUKTOR
    public function __destruct()
    {
        
    }
}
