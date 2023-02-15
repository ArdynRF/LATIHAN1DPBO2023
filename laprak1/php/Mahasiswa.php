<?php
class Mahasiswa
{
    private $Nama;
    private $Nim;
    private $Prodi;
    private $Fakultas;
    private $Kelamin;

    public function __construct($Nama = "", $Nim = 0, $Prodi = "-", $Fakultas = "-", $Kelamin = "-")
    {
        $this->Nama = $Nama;
        $this->Nim = $Nim;
        $this->Prodi = $Prodi;
        $this->Fakultas = $Fakultas;
        $this->Kelamin = $Kelamin;

    }

    public function get_Nama()
    {
        return $this->Nama;
    }

    public function set_Nama($Nama)
    {
        $this->Nama = $Nama;
    }

    public function get_Nim()
    {
        return $this->Nim;
    }

    public function set_Nim($Nim)
    {
        $this->Nim = $Nim;
    }

    public function get_Prodi()
    {
        return $this->Prodi;
    }

    public function set_Prodi($Prodi)
    {
        $this->Prodi = $Prodi;
    }

    public function get_Fakultas()
    {
        return $this->Fakultas;
    }

    public function set_Fakultas($Fakultas)
    {
        $this->Fakultas = $Fakultas;
    }

    public function get_Kelamin()
    {
        return $this->Kelamin;
    }

    public function set_Kelamin($Kelamin)
    {
        $this->Kelamin = $Kelamin;
    }
}
