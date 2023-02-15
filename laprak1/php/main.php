<?php
require('Mahasiswa.php');
$Hlist = array();

$temp = new Mahasiswa();

$temp->set_Nama("ardyn");
$temp->set_Kelamin("L");
$temp->set_Nim(201);
$temp->set_Fakultas("FPMIPA");
$temp->set_Prodi("Ilkom");

array_push($Hlist, $temp);

$temp2 = new Mahasiswa();
$temp2->set_Nama("yusuf");
$temp2->set_Kelamin("L");
$temp2->set_Nim(202);
$temp2->set_Fakultas("FPMIPA");
$temp2->set_Prodi("Ilkom");

array_push($Hlist, $temp2);

$temp3 = new Mahasiswa();
$temp3->set_Nama("faiz");
$temp3->set_Kelamin("L");
$temp3->set_Nim(203);
$temp3->set_Fakultas("FPMIPA");
$temp3->set_Prodi("Ilkom");

array_push($Hlist, $temp3);

$temp4 = new Mahasiswa();
$temp4->set_Nama("ayes");
$temp4->set_Kelamin("L");
$temp4->set_Nim(204);
$temp4->set_Fakultas("FPMIPA");
$temp4->set_Prodi("Ilkom");

array_push($Hlist, $temp4);

echo '<table border = 1>
		<thead>
			<tr>
				<th>Nama</th>
				<th>Jenis Kelamin</th>
				<th>NIM</th>
				<th>Fakultas</th>
				<th>Prodi</th>
			</tr>
		</thead>
		<tbody>';

foreach ($Hlist as $mahasiswa) {
    echo '<tr>
			<td>' . $mahasiswa->get_Nama() . '</td>
			<td>' . $mahasiswa->get_Kelamin() . '</td>
			<td>' . $mahasiswa->get_Nim() . '</td>
			<td>' . $mahasiswa->get_Fakultas() . '</td>
			<td>' . $mahasiswa->get_Prodi() . '</td>
		</tr>';
}
echo '
	</tbody>
</table>';

// echo "Berikut isi dari list Mahasiswa: ";
// echo "<hr>";
// foreach ($Hlist as $mahasiswa) {
//     echo $mahasiswa->get_Nama() . " " . $mahasiswa->get_Nim() . " " .  $mahasiswa->get_Kelamin() . " " . $mahasiswa->get_Fakultas() . " " . $mahasiswa->get_Prodi() . "<hr>";
// }
