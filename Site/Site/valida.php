<?php
	require_once(dirname(__FILE__).'\classe\Logar.php');
	$objConexao = new Conexao1();
	$objLogar = new Logar();
	if(isset($_POST["Enviar"]) && $_POST["Enviar"] == "Enviar"){
			$logar = $objLogar->Acessar($_POST["usuario"], MD5($_POST["senha"]));
		}
	if (isset($logar)){
 echo $logar;
	};
 ?>