<?php
	require_once(dirname(__FILE__).'..\..\classe\Logar.php');
	$objLogar = new Logar();
	$objLogar->verificarLogado();
?>
<!DOCTYPE HTML>
<html lang="pt-br">
<head>
<meta charset="UTF-8">
	<title>Bem Vindo</title>
</head>
<body>
	<h3>Bem Vindo <?php echo $idUsuario = $objLogar->getIdUsuario(); ?></h3>
    <br>
    <a href="logout.php">Sair</a>
</body>
</html>