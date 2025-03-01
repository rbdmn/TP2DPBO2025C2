<?php
require('Baju.php');

$list_baju = array();

// FORMAT [nama_produk] [jenis] [bahan] [warna] [untuk] [merk] [harga_produk] [stok_produk] [size] [gambar]
$HARCODELIST = array(
    "BigBlackClothes",
    "Kasual",
    "Silk",
    "Hitam",
    "Hamster",
    "Abibas",
    200000,
    15,
    'L',
    "Gambar/black_clothes.jpg",
    "BigWhitePajamas",
    "Rumahan",
    "Cotton",
    "Putih",
    "Burung",
    "Neki",
    137000,
    20,
    'S',
    "Gambar/white_pajamas.jpg",
    "BigGreenShirt",
    "Berkelas",
    "Satin",
    "Hijau",
    "Anjing",
    "Ubiboft",
    888000,
    5,
    'M',
    "Gambar/green_shirt.jpg",
    "BigYellowJacket",
    "Kasual",
    "Silk",
    "Kuning",
    "Kucing",
    "Volvo",
    125000,
    14,
    'S',
    "Gambar/yellow_jacket.jpg",
    "BigRedShoes",
    "Rumahan",
    "Cotton",
    "Merah",
    "Kelinci",
    "EAJAMES",
    321321,
    20,
    'L',
    "Gambar/red_shoes.jpg",
);

for ($i = 0; $i < count($HARCODELIST); $i += 10) {
    $ProdukBaru = new Baju("", '', "");

    $ProdukBaru->set_nama_produk($HARCODELIST[$i]);
    $ProdukBaru->set_jenis($HARCODELIST[$i + 1]);
    $ProdukBaru->set_bahan($HARCODELIST[$i + 2]);
    $ProdukBaru->set_warna($HARCODELIST[$i + 3]);
    $ProdukBaru->set_untuk($HARCODELIST[$i + 4]);
    $ProdukBaru->set_merk($HARCODELIST[$i + 5]);
    $ProdukBaru->set_hargaProduk($HARCODELIST[$i + 6]);
    $ProdukBaru->set_stokProduk($HARCODELIST[$i + 7]);
    $ProdukBaru->set_size($HARCODELIST[$i + 8]);
    $ProdukBaru->set_fotoProduk($HARCODELIST[$i + 9]);

    array_push($list_baju, $ProdukBaru);
}
?>

<!DOCTYPE html>
<html>

<head>
    <title>Daftar Produk Baju</title>
    <style>
        h1 {
            font-size: 32px;
            text-align: center;
        }

        table {
            width: 90%;
            margin: 20px auto;
            border-collapse: collapse;
        }

        th,
        td {
            padding: 15px;
            border: 2px solid black;
            text-align: center;
        }

        img {
            width: 100px;
            height: auto;
        }
    </style>
</head>

<body>

    <h1>Daftar Produk Baju</h1>

    <table border="1">
        <tr>
            <th>Gambar</th>
            <th>Nama Produk</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Merk</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Size</th>
        </tr>

        <?php foreach ($list_baju as $baju) {
            echo "<tr>";
            echo "<td><img src='" . $baju->get_fotoProduk() . "' alt='" . $baju->get_nama_produk() . "'></td>";
            echo "<td>" . $baju->get_nama_produk() . "</td>";
            echo "<td>" . $baju->get_jenis() . "</td>";
            echo "<td>" . $baju->get_bahan() . "</td>";
            echo "<td>" . $baju->get_warna() . "</td>";
            echo "<td>" . $baju->get_untuk() . "</td>";
            echo "<td>" . $baju->get_merk() . "</td>";
            echo "<td>Rp " . number_format($baju->get_harga_produk(), 0, ',', '.') . "</td>";
            echo "<td>" . $baju->get_stok_produk() . "</td>";
            echo "<td>" . $baju->get_size() . "</td>";
            echo "</tr>";
        } ?>

    </table>

</body>

</html>